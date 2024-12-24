#include <iostream>
#include <vector>
#include <unordered_map> //For using hash map

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    //Create a hash map to store the number and its index
    std::unordered_map<int, int> numMap;

    //Iterate through the nums array
    for (int i = 0; i <nums.size();i++) {
        //Calculate the complement 
        int complement = target - nums[i]; // This is the number we need to find 

        //Check if the complement exists in the map
        if (numMap.find(complement) != numMap.end()) {
            //If found , return the indices 
            return {numMap[complement], i};
        }

        //Store the number and its index in the hash map
        numMap[nums[i]] = i;

    }
    return {};
}