#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>


//              C++ STL data structures
// 
//      1. std::vector - arrays and caching
//      2. std::list / std::forward_list - frequent insertions/deletions anywhere
//      3. std::deque - queueing where you need fast access to both ends
//      4. std::set / std::map - sorted data, fast lookups, range queries
//      5. std::unordered_map - distionary lookups, fast ID/key matching
// 
// 




namespace Solutions {

    namespace TwoSum {

        // 1. Two Sum - brute: : O(n^2) time, O(1) space
        class Brute {
            public:
                std::vector<int> solve(const std::vector<int>& nums, int target) {
                    for (size_t i = 0; i < nums.size(); i++) {
                        for (size_t j = i + 1; j < nums.size(); j++) {
                            if (nums[i] + nums[j] == target) {
                                return {(int)i, (int)j};
                            }
                        }
                    }

                    return {};
                }
        };


        // two sum - hash method: O(n) time, O(n) space
        class Hash {
            public: 
                std::vector<int> solve(const std::vector<int>& nums, int target) {
                    std::unordered_map<int, int> num_to_index;
                    for (size_t i = 0; i < nums.size(); i++) {
                        int complement = target - nums[i];
                        if (num_to_index.count(complement)) {
                            return {num_to_index[complement], (int)i};
                        }
                        num_to_index[nums[i]] = (int)i;
                    }
                    return {};
                }
        };

        
    }





    //  217. Contains Duplicate - hash method



}

int main() {

    std::vector<int> nums = {2, 7, 11, 15};
    int target = 17;

    Solutions::TwoSum::Brute printer;
    std::vector<int> result = printer.solve(nums, target);
    std::cout << "Brute Answer: Indices: [" << result[0] << ", " << result[1] << "]" << std::endl;

    Solutions::TwoSum::Hash printer_hash;
    std::vector<int> result_hash = printer_hash.solve(nums, target);
    std::cout << "Hash Answer: Indices: [" << result_hash[0] << ", " << result_hash[1] << "]" << std::endl;
    return 0;



}