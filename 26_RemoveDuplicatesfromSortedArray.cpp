#include <vector>
#include <iostream>

int removeDuplicates(std::vector<int>& nums) {
    if (nums.empty()) return 0; // If array is empty, return 0.

    int j = 0; // Pointer for the last unique element's index

    // Start from the second element and compare with the previous one.
    for (int i = 1; i < nums.size(); i++) {
        //If the current element is different from the last unique element.
        if (nums[i] != nums[j]) {
            j++; //Move the pointer for unique elements.
            nums[j] = nums[i]; //Update the array with the new unique element.
        }
    }

    return j + 1; // Return the count of the unique elements (j is an index)
}

int main() {
    std::vector<int> nums ={1, 1, 2, 2, 3}; // Example input
    int k = removeDuplicates(nums); //Remove duplicates and get the count.

    std::cout << "Number of unique elements: " << k << std::endl;
    std::cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        std::cout << nums[i] << " "; //Print the unique elements.
    }
    return 0;
}