// delete tail of a linked list
node*deleteNode(node*head) {
    // Write your code here.
    if(head==NULL || head->next==NULL) return NULL;
    LinkedListNode<int>*temp=head;
    while(temp->next->next!=NULL){
     temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    return  head;
}
