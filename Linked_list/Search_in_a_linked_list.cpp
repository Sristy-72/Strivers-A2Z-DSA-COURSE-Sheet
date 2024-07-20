// Problem statement
//You are given a Singly Linked List of integers with a head pointer. Every node of the Linked List has a value written on it
//Now you have been given an integer value, 'K'. Your task is to check whether a node with a value equal to 'K' exists in
//the given linked list. Return 1 if node exists else return 0.

// Solution
int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
      Node<int>* temp = head;
   while (temp) {
     if (temp->data == k)
      return 1;
       temp = temp->next;
    
   }
return 0;
}
