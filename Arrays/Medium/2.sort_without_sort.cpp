class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroCount=0,oneCount=0,twoCount=0;
        for(int i=0;i<nums.size();i++)
        {
            int n=nums[i];
            if(n==0)  zeroCount++;
            else if(n==1)   oneCount++;
            else twoCount++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(zeroCount!=0) 
            {
                zeroCount-=1;
                nums[i]=0;
            } 
            else if(oneCount!=0){
                 nums[i]=1;
                oneCount-=1;
            }
            else{
                 nums[i]=2;
                 twoCount-=1;
            }
        }
    }
};