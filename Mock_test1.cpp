#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int left = 0;
    for (int right = 0; right < nums.size(); right++) {
        if (nums[right] != 0) {
            swap(nums[left], nums[right]);
            left++;
        }
    }
    for (; left < nums.size(); left++) {
        nums[left] = 0;
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    cout << "Output: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
