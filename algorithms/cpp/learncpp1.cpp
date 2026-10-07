#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>

// Chapters 0 and 1 of learncpp.com

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

// Intro to C++ development:









