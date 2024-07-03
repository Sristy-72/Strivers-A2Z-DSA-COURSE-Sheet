//Problem statement
//You are given a doubly-linked list of size 'N', consisting of positive integers. 
//Now your task is to reverse it and return the head of the modified list.
//Note:
//A doubly linked list is a kind of linked list that is bidirectional, meaning it can be
//traversed in both forward and backward directions.


// SOLUTION 
Node* reverseDLL(Node* head)
{   
     if(head==NULL || head->next==NULL){
         return head;
     }
     Node*prev=NULL;
     Node*current=head;
     while(current!=NULL){
         prev=current->prev;
         current->prev=current->next;
         current->next=prev;
         current=current->prev;
     }
     return prev->prev;
}
