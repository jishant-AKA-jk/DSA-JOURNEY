
//brute force
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> resArr;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if((nums[i]+nums[j])==target)
                {
                    resArr.push_back(i);
                    resArr.push_back(j);
                    return resArr;
                }
            }
        }
        return resArr;
    }
};

