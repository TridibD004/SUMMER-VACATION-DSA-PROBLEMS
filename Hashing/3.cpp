// Sorting Elements of an Array by Frequency
// MediumAccuracy: 47.44%Submissions: 33319Points: 4
// Given an array of integers, sort the array according to frequency of elements. That is elements that have higher frequency come first. If frequencies of two elements are same, then smaller number comes first.

// Example 1:

// Input:
// N = 5
// A[] = {5,5,4,6,4}
// Output: 4 4 5 5 6
// Explanation: The highest frequency here is
// 2. Both 5 and 4 have that frequency. Now
// since the frequencies are same then 
// smallerelement comes first. So 4 4 comes 
// firstthen comes 5 5. Finally comes 6.
// The output is 4 4 5 5 6.
// Example 2:

// Input:
// N = 5
// A[] = {9,9,9,2,5}
// Output: 9 9 9 2 5
// Explanation: The highest frequency here is
// 3. The element 9 has the highest frequency
// So 9 9 9 comes first. Now both 2 and 5
// have same frequency. So we print smaller
// element first.
// The output is 9 9 9 2 5.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    static bool comp(pair<int,int> &a,pair<int,int> &b){
       if(a.second==b.second){
           return a.first<b.first;
       }
       return a.second>b.second;
   }
   vector<int> sortTheMap(map<int,int> &m){
       vector<pair<int,int> > v1;
       for(auto &i:m){
           v1.push_back(i);
       }
       sort(v1.begin(),v1.end(),comp);
       vector<int> v2;
       for(auto &k:v1){
           while(k.second--)
               v2.push_back(k.first);
       }
       return v2;
   }
   vector<int> sortByFreq(int arr[],int n)
   {
       map<int,int> mp;
       vector<int> v;
       for(int i=0;i<n;i++){
           mp[arr[i]]++;
       }
       v = sortTheMap(mp);
       return v;
   }
};

//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends
