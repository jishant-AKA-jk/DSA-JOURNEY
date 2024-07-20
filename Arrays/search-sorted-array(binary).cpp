#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    
   
    int searchInSorted(int arr[], int N, int K) 
    { 
        int index=N/2;
        int low =0;
        int mid =N/2;
        int end =N-1;
        
        while(low<=end)
        {
            if(arr[mid]==K) return 1;
            if(arr[mid]>K)
            {
               end=mid-1;
                mid=(low+end)/2;
                 
            }
            else
            {
                low=mid+1;
                mid=(end+low)/2;
                
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 