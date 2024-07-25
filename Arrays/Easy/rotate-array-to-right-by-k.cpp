// https://leetcode.com/problems/rotate-array/

class Solution {
public:
void reverseArray(vector<int>& arr, int start, int end)
{
  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}


    vector<int> rotateArray(vector<int>& nums, int k) {
        k = k % nums.size();
         reverseArray(nums,0,nums.size()-k-1);
         reverseArray(nums,nums.size()-k,nums.size()-1);
        reverseArray(nums,0,nums.size()-1);
    }

    void rotate(vector<int>& nums, int k) { nums = rotateArray(nums, k); }
};