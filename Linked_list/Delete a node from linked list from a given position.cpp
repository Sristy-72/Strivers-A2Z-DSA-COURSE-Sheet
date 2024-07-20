//Problem statement
//You have been given a linked list of integers. Your task is to write a function that deletes a node from a given position, 'POS'.
//Note :
//Assume that the Indexing for the linked list always starts from 0.
//If the position is greater than or equal to the length of the linked list, you should return the same linked list without any change.

/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *deleteNode(Node *head, int pos)
{
    if(head==NULL)return head;
	if(pos==0){
		Node*temp=head;
		head=head->next;
		free(temp);
		return head;
	}
	int cnt=0;
	Node*prev=NULL;
	Node*temp=head;
	while(temp!=NULL && cnt < pos){
		prev=temp;
		temp=temp->next;
		cnt++;
		// if(cnt==pos){
			//break;
		// }
	
	}
	if (temp == NULL) return head; 

			prev->next=temp->next;
			free(temp);
	return head;
}
