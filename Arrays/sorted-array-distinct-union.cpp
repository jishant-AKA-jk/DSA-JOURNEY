#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays.
    
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        int ind1=0,ind2=0;
        vector<int> nums;
        
        while(ind1<n && ind2<m){
            if(arr1[ind1]==arr2[ind2])
            {
                if(nums.size()==0) nums.push_back(arr1[ind1]);
                else if(nums.back()!=arr1[ind1]) nums.push_back(arr1[ind1]);
                ind1+=1;
                ind2+=1;
            }
            else if(arr1[ind1]<arr2[ind2])
            {
                if(nums.size()==0) nums.push_back(arr1[ind1]);
                else if(nums.back()!=arr1[ind1]) nums.push_back(arr1[ind1]);
                ind1+=1;
            }
            else if(arr1[ind1]>arr2[ind2])
            {
                if(nums.size()==0) nums.push_back(arr2[ind2]);
                else if(nums.back()!=arr2[ind2]) nums.push_back(arr2[ind2]);
                ind2++;
            }
        }
        if(ind1<n && ind2==m)
            {
                while(ind1<n)
                {
                     if(nums.size()==0) nums.push_back(arr1[ind1]);
                     else if(nums.back()!=arr1[ind1]) nums.push_back(arr1[ind1]);
                     ind1+=1;
                }
            }
            if(ind1==n && ind2<m)
            {
                while(ind2<m)
                {
                     if(nums.size()==0) nums.push_back(arr2[ind2]);
                     else if(nums.back()!=arr2[ind2]) nums.push_back(arr2[ind2]);
                     ind2++;
                }
            }
        return nums;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends