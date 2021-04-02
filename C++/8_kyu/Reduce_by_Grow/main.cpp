#include <iostream>
#include <vector>

int grow(std::vector<int> nums);

int main() {
    std::vector<int> nums = {1,2,3,4};
    std::cout << grow(nums);
    return 0;
}

int grow(std::vector<int> nums) {
    int multiply=1;
    for (int i = 0; i < nums.size(); i++) { multiply *= nums[i]; }
    return multiply;
}