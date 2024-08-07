//PROBLEM STATEMENT
//You are given an array ‘Arr’ of size ‘N’ consisting of positive integers.
//Make a linked list from the array and return the head of the linked list.
//The head of the linked list is the first element of the array, and the tail of the linked list is the last element.
//Note:
//In the output, you will see the elements of the linked list made by you.

// SOLUTION
/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

Node* constructLL(vector<int>& arr) {
    // Write your code here
    Node*head=new Node(arr[0]);
    Node*mover=head;
    for(int i=1;i<arr.size();i++){
       Node*temp=new Node(arr[i]);
       mover->next=temp;
       mover=temp;
    }
    return head;
}
