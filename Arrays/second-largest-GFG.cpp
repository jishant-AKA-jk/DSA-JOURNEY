// https://bit.ly/3Pld280

#include <bits/stdc++.h>

using namespace std;

// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n) {
        // code here
        int maxValue=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>maxValue)
            {
                maxValue=arr[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==maxValue)
            {
                arr[i]=-1;
            }
        }
        maxValue=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>maxValue)
            {
                maxValue=arr[i];
            }
        }
        return maxValue;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
