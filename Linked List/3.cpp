/*
PROBLEM :- Check if Linked List is Palindrome

Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.

Example 1:

Input:
N = 3
value[] = {1,2,1}
Output: 1
Explanation: The given linked list is
1 2 1 , which is a palindrome and
Hence, the output is 1.
Example 2:

Input:
N = 4
value[] = {1,2,3,4}
Output: 0
Explanation: The given linked list
is 1 2 3 4 , which is not a palindrome
and Hence, the output is 0.
Your Task:
The task is to complete the function isPalindrome() which takes head as reference as the only parameter and returns true or false if linked list is palindrome or not respectively.

Expected Time Complexity: O(N)
Expected Auxialliary Space Usage: O(1)  (ie, you should not use the recursive stack space as well)

Constraints:
1 <= N <= 105*/

//CODE :- 

// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    int FindLength(Node * head){
        int len = 0;
        while(head != NULL){
            head = head -> next;
            len++;
        }
        return len;
    }
    
    Node * ReverseUtil(Node * head){
        Node * prev = NULL, *curr = head;
        
        
        while(curr != NULL){
            Node* store = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = store;
        }
        
        return prev;
    }
    
    Node* ReverseLL(Node * head, int start){
        Node* prev = NULL, *curr = head;
        for(int i = 0; i < start; i++){
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = ReverseUtil(curr);
        return prev -> next;
    }
    
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(head -> next == NULL){
            return true;
        }
        
        int len = FindLength(head);
        Node* head2 = ReverseLL(head, (len+1)/2);
        
        
        Node* head1 = head;
        while(head2 != NULL){
            if(head2 -> data != head1 -> data){
                return false;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
        return true;
    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends
