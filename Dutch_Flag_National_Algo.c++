#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sortColors(vector<int>& nums) {
    int n = nums.size();
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else { // nums[mid] == 2
            swap(nums[high], nums[mid]);
            high--;
        }
    }
}

int main() {
    vector<int> nums = {2, 0, 1, 2, 0, 1};

    sortColors(nums);

    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}