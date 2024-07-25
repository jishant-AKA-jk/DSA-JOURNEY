// MY solution 

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        if(nums.size()<3) return nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                count++;
                if(count>=(nums.size()/2))
                {   
                    return nums[i];
                }
            }
            else{
                count=0;
            }
        }
        return nums[0];
    }
};


// Most efficient solution O(n)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;
        
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            
            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }
        
        return candidate;
    }
};