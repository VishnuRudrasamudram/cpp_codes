#include<iostream>

using namespace std;

typedef struct pQ
{

	int data;
	pQ *next;
}pQ;

class Queue
{
	pQ *head;
	public:
	Queue()
	{
		head = NULL;
	}
	void get(int d)
	{
		pQ *newNode = new pQ;
		newNode->data = d;
		newNode->next = NULL;
	
		if(head == NULL)
		{
			head = newNode;
			return;
		}
		pQ * cur = head;
		while(cur)
		{
			if(cur->next == NULL)
			{
				cur->next = newNode;
				break;
			}
			cur = cur->next;
		}
	}
	int put()
	{
		if(head == NULL) return 0;
		pQ *tmp = head;
		int ret = tmp->data;
		head = head->next;
		delete tmp;
		return ret;
	}
	void show()
	{
		pQ *cur = head;
		
		while(cur)
		{
			if(cur->next!=NULL)
				cout<<cur->data<<"->";
			else 	cout<<cur->data<<endl;
			cur = cur->next;
		}
		cout<<endl;
	}
};

main()
{
	Queue q;
	q.get(10);
	q.get(20);
	q.get(30);
	q.get(40);
	q.show();
        int i =q.put();	
	q.show();
}
