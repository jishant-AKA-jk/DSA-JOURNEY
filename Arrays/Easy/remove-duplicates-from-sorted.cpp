// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count =0;
        vector<int> res;
        res.push_back(nums[0]);
        for( int i=1;i<nums.size();i++)
        {
            
            if(nums[i]==nums[i-1])
            {
                count+=1;
            }
            else
            {
                res.push_back(nums[i]);
            }
        }
        nums = res;
        return res.size();
    }
};