// Union of Two Linked Lists
// EasyAccuracy: 50.08%Submissions: 23902Points: 2
// Given two linked lists, your task is to complete the function makeUnion(), that returns the union of two linked lists. This union should include all the distinct elements only.

// Example 1:

// Input:
// L1 = 9->6->4->2->3->8
// L2 = 1->2->8->6->2
// Output: 1 2 3 4 6 8 9

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

struct Node* makeUnion(struct Node* head1, struct Node* head2);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        
        printList(makeUnion(first,second));
    }
    return 0;
}

// } Driver Code Ends


/*
// structure of the node is as follows

struct node
{
	int data;
	struct node* next;
	
	node(int x){
	    data = x;
	    next = NULL;
	}
	
};

*/

struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    // code here
    set<int>s;
    while(head1!=NULL)
    {
        s.insert(head1->data);
        head1=head1->next;
    }
    while(head2!=NULL)
    {
        s.insert(head2->data);
        head2=head2->next;
    }
    vector<int>a;
    for(int i: s)
    a.push_back(i);
    sort(a.begin(),a.end());
    Node* head;
    Node* p=head;
    for(int i:a)
        cout<<i<<" ";
    return head1;
}
