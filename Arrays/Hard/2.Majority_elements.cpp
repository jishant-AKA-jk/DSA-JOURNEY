class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        vector<int> res;
        if(nums.size()==1)  return nums;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                count++;
                if((count>=(nums.size()/3)) ) 
                {
                    if (!res.empty())
                    {
                        if(res.back() != nums[i])
                            res.push_back(nums[i]);
                    }
                    else
                        res.push_back(nums[i]);
                }
                    
            }
            else
            {
                count=0;
            }
        }
        if(nums.size()==2 && res.size()==0) return nums;
        return res;
    }
};