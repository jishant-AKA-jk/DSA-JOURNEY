// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/
#include <vector>
#include <iostream>
class Solution {
public:
    bool isArraySorted(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << " ";
        }
        cout << '\n';

        for (int i = 0; i < nums.size() - 1; i++) {
            cout << nums[i] << " * " << nums[i + 1] << "\n";
            if (nums[i] > nums[i + 1]) {
                return false;
            }
        }
        return true;
    }

    bool rotateArray(vector<int>& nums) {
        for (int j = 0; j < nums.size(); j++) {
            int first=first = nums[0] ;
            for (int i = 0; i < nums.size() - 1; i++) {
                
                nums[i] = nums[(i + 1) % nums.size()];
            }
            nums[nums.size()-1] = first;
            if(isArraySorted(nums))
            {
                return true;
            }

            for (int i = 0; i < nums.size(); i++) {
                    cout << nums[i] << " ";
                }
            cout << '\n';
        }
        return false;
    }

    bool check(vector<int>& nums) {
        return rotateArray(nums);;
    }
};