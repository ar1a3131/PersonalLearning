#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>

// Chapter 0 of learncpp.com

// machine language/code: binary, etc.
// assembly: e.g. mov al, 0x61


// a program that can be
// easily transfered from one platform
//  to another, is called portable and
// modifying a program so it can run on
// different platform is called porting


// each family of compatible CPUs has it's own
// machine language... CPU family = ISA
// Instruction set architecture = ISA

// assembly must be translated by assembler
// into machine language

// Much like assembly programs (which must be 
// assembled to machine language), programs written
//  in a high-level language must be translated into 
// machine language before they can be run. There are
//  two primary ways this is done: compiling and 
// interpreting.

// of course, C++ uses a compiler

// advantages of compilers:
// - because they can see all the code up-front,
//    they can perform optimizations when generating
//    machine code that allow the final version to
//    execute faster than interpretting each individual
//    line
// 
// - they can often generate low-level code that performs
//    the equivalent of high-level ideas (dynamic dispatch
//    or inheritance) in terms of memory table look ups.
//    This means the resulting programs need less info
//    about the original code, lowering memory usage
//    of the generated program
// 
// - compiled code is usually faster than interpreted
//   code because it doesn't have to account for 
//   INTERPRETER OVERHEAD

// C ended up being so efficient and flexible that in 
// 1973, Dennis Ritchie and Ken Thompson rewrote most of the 
// Unix operating system using C. Many previous operating 
// systems had been written in assembly. Unlike assembly, 
// which produces programs that can only run on specific 
// CPUs, C has excellent portability, allowing Unix to be 
// easily recompiled on many different types of computers 
// and speeding its adoption. 

// C++ allows for OOP, unlike C

// Intro to the compiler, linker, and libraries:
// the compiler translates your C++ code into machine 
// language instructions. These instructions are stored 
// in an intermediate file called an object file. The 
// object file also contains other data that is required 
// or useful in subsequent steps (including data needed 
// by the linker in step 5, and for debugging in step 7).
// Object files are typically named name.o or name.obj, 
// where name is the same name as the .cpp file it was produced from.
// 
// After the compiler has successfully finished, another 
// program called the linker kicks in. The linker’s job is 
// to combine all of the object files and produce the desired 
// output file (such as an executable file that you can run). 
// This process is called linking. If any step in the linking 
// process fails, the linker will generate an error message 
// describing the issue and then abort...Almost every C++ 
// program written utilizes the standard library in some way,
//  so it’s extremely common to have the C++ standard library 
// linked into your programs. Most C++ linkers are configured 
// to link in the standard library by default, so this generally 
// isn’t something you need to worry about.


int main()
{
	std::cout << "Hello, world!";
	return 0;
}

// to run this in terminal
//     g++ -o learn0 learncpp0.cpp
// once you see that learn0 was created:
//     ./learn0
// ^ that should print out Hello World!












