// Problem statement
// You are given an array ‘Arr’ of size ‘N’ consisting of positive integers.
// Your task is to make a doubly linked list from the array and return the head of the linked list.
// Here, the head of the doubly linked list is the first element of the array, and the tail of the doubly linked list is the last element.


//SOLUTION
/*
 * Definition for doubly-linked list.
 * class Node
 * {
 * public:
 *    int data;
 *    Node *next, *prev;
 *    Node() : data(0), next(nullptr), prev(nullptr) {}
 *    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
 *    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
 * };
 */

Node* constructDLL(vector<int>& arr) {
    Node*head=new Node(arr[0]);
    Node*prev=head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i],NULL,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
