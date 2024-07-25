class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=0,sum=0,minusFlag=0,smallestMinus=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0) minusFlag=1;
            sum+=nums[i];
            if(sum<0)
            {
                sum=0;
            }
            if(sum>maxSum)  maxSum=sum;
            if(smallestMinus<nums[i])  smallestMinus=nums[i];
        }
        return minusFlag? maxSum:smallestMinus;
    }
};