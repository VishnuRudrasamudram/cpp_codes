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
	Node * head;
	public:
	llist()
	{
		head = NULL;
	}

	Node * create_list(char *fp)
	{
		ifstream fin(fp);
		int dat;
		while(fin>>dat)
		{
			Node *temp = new Node;
			temp->data = dat;
			temp->next = NULL;
			if(head == NULL)
			{
				head = temp;
			}
			
			else
			{
				Node * cur = head;
				while(cur)
				{
					if(cur->next == NULL)
					{
						cur->next = temp;
						break;
					}
					cur = cur->next;
				}
			}
		}
		return head;
	}

	void display_nodes(Node * hd)
	{
		Node * cur = hd;
		while(cur)
		{
			cout<<cur->data<<" ";
			cur=cur->next;
		}		
		cout<<endl;
	}
	
	int reverse_list(Node *&head)
	{
		if(head==NULL)
			return -1;
		Node *current=head,*prev=NULL,*nex=NULL;
		while(current!=NULL)
		{
			nex=current->next;
			current->next=prev;
			prev=current;
			current=nex;
		}
		head=prev;
		return 1;
	}	
};

int main(int argc,char *argv[])
{
	llist lin;
	Node * head = lin.create_list(argv[1]);
	cout<<"original: ";
	lin.display_nodes(head);
	lin.reverse_list(head);
	cout<<"reversed: ";
	lin.display_nodes(head);
}
