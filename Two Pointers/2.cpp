/*Merge Two Sorted Lists II

Given two sorted integer arrays A and B, merge B into A as one sorted array.

Note: You have to modify the array A to contain the merge of A and B. Do not output anything in your code.

TIP: C users, please malloc the result into a new array and return the result.

If the number of elements initialized in A and B are m and n respectively, the resulting size of array A after your code is executed should be m + n

Example :

Input : 
         A : [1 5 8]
         B : [6 9]

Modified A : [1 5 6 8 9]
Note:You only need to implement the given function. Do not read input, instead use the arguments to the function. Do not print the output, 
instead return values as specified. Still have a question? Checkout Sample Codes for more details.*/

//CODE:- [function part done as code from interviewbit]

void Solution::merge(vector<int> &a, vector<int> &b) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i=0,j=0;
    vector<int>ans;
    while(i<a.size() && j<b.size())
    {
        if(a[i]<=b[j])
        {
            ans.push_back(a[i]);
            i++;
        }
        else
        {
            ans.push_back(b[j]);
            j++;
        }
    }
     while(i<a.size())
       ans.push_back(a[i++]);
    while(j<b.size())
       ans.push_back(b[j++]);
    int p;
    a.resize(ans.size());
    for(p=0;p<ans.size();p++)
        a[p]=ans[p];
}
