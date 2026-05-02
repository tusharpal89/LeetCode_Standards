#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sortColors(vector<int>& nums){
    int count_0 = 0, count_1 = 0, count_2 = 0;

    for(int num : nums){
        if(num == 0) count_0++;
        else if(num == 1) count_1++;
        else if(num == 2) count_2++;
    }

    int idx = 0;

    for(int i=0; i<count_0; i++){
        nums[idx++] = 0;
    }
    for(int i=0; i<count_1; i++){
        nums[idx++] = 1;
    }
    for(int i=0; i<count_2; i++){
        nums[idx++] = 2;
    }
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    cout << "Original array: ";
    for(int num : nums) cout << num << " ";
    cout << endl;

    sortColors(nums);

    cout << "Sorted array:   ";
    for(int num : nums) cout << num << " ";
    cout << endl;

    return 0;
}