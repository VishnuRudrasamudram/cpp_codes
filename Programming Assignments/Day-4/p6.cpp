#include<iostream>
#include<fstream>
using namespace std;

typedef struct Node
{
	int data;
	Node* next;
}Node;

class llist
{
	Node *head,*last,*node;
	public:
	llist()
	{
		head = NULL;
		last = NULL;
		node = NULL;
	}
	Node* create_list(char *fp)
	{	
		ifstream in(fp);
		int a;
		while(in>>a){
			Node *temp=new Node;
	        	temp->data=a;
	        	if(head==NULL)
	        	{
	                	temp->next=NULL;
	                	head=temp;
	                	last=temp;
	        	}
	        	else
	        	{
	                	if(head->next==NULL && head->data>a)
	                	{
	                       		temp->next=head;
	                       		head=temp;
	                	}
	               		else if(head->next==NULL && head->data<=a)
	                	{
	                       		temp->next=NULL;
       	                		head->next=temp;
       	                		last=temp;
       		         	}
       		         	else
                		{
                	        	node=head;
                	        	while(node!=NULL)
                	        	{
                	                	if(node==head && head->data>=a)
                	                	{
                        	               		temp->next=head;
                        	               		head=temp;
                                	        	break;
                                		}
                                		else if(node->next==NULL && node->data<=a)
                                		{
                                        		temp->next=NULL;
                                        		node->next=temp;
                                       		 	last=temp;
                                        		break;
                                		}
                                		else if(node->data<=a && node->next->data>=a)
                                		{
                                        		temp->next=node->next;
                                        		node->next=temp;
                                        		break;
                                		}
                                		node=node->next;
                        		}
				}		
			}
		}
		return head;
	}

	void display_nodes(Node* head)
	{
		while(head!=NULL)
		{
			cout<<head->data<<' ';
			head=head->next;
		}
		cout<<endl;
	}
	
	int remove_duplicates(Node *&head)
	{
		if(head==NULL)
			return -1;
		Node* current=head;
		while(current!=NULL)
		{
			Node* nex=current->next;
			if((nex!=NULL) && (nex->data==current->data))
			{
				current->next=nex->next;
				delete nex;
			}
			else
			{
				current=nex;
			}
		}
		return 	1;
	}
};

int main(int argc,char *argv[])
{
	llist lis;
	Node * head = lis.create_list(argv[1]);
	cout<<"Original: ";
	lis.display_nodes(head);
	lis.remove_duplicates(head);
	cout<<"Processed: ";
	lis.display_nodes(head);
}

