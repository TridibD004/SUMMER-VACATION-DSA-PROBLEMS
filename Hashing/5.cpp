// Find All Four Sum Numbers
// MediumAccuracy: 41.1%Submissions: 62685Points: 4
// Lamp
// This problem is part of GFG SDE Sheet. Click here to view more.  

// Given an array of integers and another number. Find all the unique quadruple from the given array that sums up to the given number.

// Example 1:

// Input:
// N = 5, K = 3
// A[] = {0,0,2,1,1}
// Output: 0 0 1 2 $
// Explanation: Sum of 0, 0, 1, 2 is equal
// to K.
// Example 2:

// Input:
// N = 7, K = 23
// A[] = {10,2,3,4,5,7,8}
// Output: 2 3 8 10 $2 4 7 10 $3 5 7 8 $
// Explanation: Sum of 2, 3, 8, 10 = 23,
// sum of 2, 4, 7, 10 = 23 and sum of 3,
// 5, 7, 8 = 23.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
   vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        set<vector<int>>s;
        vector<int> v;
        //vector<vector<int>> res;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int l=j+1;
                int h=n-1;
                int sum=0;
                while(l<h){
                    sum=arr[i]+arr[j]+arr[l]+arr[h];
                    if(sum==k){
                        s.insert({arr[i],arr[j],arr[l],arr[h]});
                        l++;
                        h--;
                    }
                    else if(sum<k)
                        l++;
                    else if(sum>k)
                        h--;
                }
            }
        }
        vector<vector<int>> res(s.begin(),s.end());
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
