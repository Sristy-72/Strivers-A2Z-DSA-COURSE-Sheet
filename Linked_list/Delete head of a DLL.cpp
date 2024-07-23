//Problem statement
//You are given a doubly-linked list of length ’n’ .
//Your task is to delete the head of a doubly-linked list.

// SOLUTION 
/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev=NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->next= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};
*/

Node * deleteHead(Node *head) {
    Node*prev=head;
    if(head==NULL || head->next==NULL){
        return  NULL;
    }
    head=head->next;
    head->prev=NULL;
    prev->next=NULL;
    delete prev;
    return head;
}


