#include <iostream>
#include <vector>
#include <unordered_set> // Include the library for the unordered_set
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen; //Initialize an empty set to keep track of seen numbers

    for (int num : nums) { //Iterate  through each number in the array
        //If we see the number again, it's duplicate
        if (seen.find(num) != seen.end()) {
            return true; // Duplicate found
        }
        //Otherwise, we add the number to the set
        seen.insert(num);
    }

    return false; //No duplicates found 
}