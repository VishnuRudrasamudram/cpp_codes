#include<iostream>

using namespace std;

typedef struct Node
{
	int data;
	Node * next;
}Node;

class llist
{
	Node *head;
	public:
	llist()
	{
		head = NULL;
	}	

	Node * create_list(int d)
	{
		int i=0;
		while(i<d)
		{
			Node * temp = new Node;
			int d;
			cin>>d;
			temp->data = d;
			temp->next = NULL;
			
			if(head == NULL)
				head = temp;
			else
			{
				Node * cur = head;
				while(cur!=NULL)
				{
					if(cur->next==NULL)
					{
						cur->next = temp;
						break;
					}
					cur = cur->next;
				}
			}
			i++;
		}
		return head;
	}

	void display(Node* head)
	{
		Node *cur = head;
		while(cur!=NULL)
		{
			cout<<cur->data<<" ";
			cur=cur->next;
		}
		cout<<endl;
	}
};

class del_list
{
	Node * head;
	public:
	del_list()
	{
		llist lin;
		head = lin.create_list(3);
		lin.display(head);
	}

	~del_list()
	{
		Node * temp = new Node;
		Node * cur = head;
		while(cur)
		{
			temp = head;
			cout<<"Deleting node with data "<<temp->data<<endl;
			head = head->next;
			delete temp;
			cur=cur->next;
		}
		cout<<"Object destructed..."<<endl;
	}
};

main()
{
	del_list lis;
}
