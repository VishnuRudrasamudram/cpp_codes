#include<iostream>
#include<fstream>
#include<string>
using namespace std;

typedef struct Node
{	public:
	int data;
	Node *next;
}Node;

class list
{	
   	Node *cur;
    	public:
	Node * head, *tail;
	list()
	{	head=NULL;
		tail=NULL;
		cur = NULL;
	}

	void add(int a)
    	{
        	Node *temp=new Node;
        	temp->data=a;
        	if(head==NULL)
        	{
        	    temp->next=NULL;
        	    head=temp;
        	    tail=temp;
        	}
        	else
        	{	
        		if(head->next==NULL && head->data<=a)
                    	{
                    	       temp->next=head;
                    	       head=temp;
                    	}
                    	else if(head->next==NULL && head->data>=a)
                    	{
                    	        temp->next=NULL;
                    		head->next=temp;
                           	tail=temp;
                    	}
            		else
            		{
                		cur=head;
                		while(cur!=NULL)
                		{
                    			if(cur==head && head->data<=a)
                            		{
                                   		temp->next=head;
                                   		head=temp;
                        			break;
                            		}	
                            		else if(cur->next==NULL && cur->data>=a)
                    			{
                        			temp->next=NULL;
                        			cur->next=temp;
                        			tail=temp;
                        			break;
                    			}
                    			else if(cur->data>=a && cur->next->data<=a)
                    			{
                        			temp->next=cur->next;
                        			cur->next=temp;
                        			break;
                    			}
                    			cur=cur->next;
                		}
            		}
        	}

    	}
	
	void display()
    	{
        	for(cur=head;cur!=NULL;cur=cur->next)
        	{
            		cout<<cur->data<<' ';
        	}
        	cout<<endl;
    	}
	
	void create_list(ifstream &in)
    	{	
        	char line;
            	int b;
            	while(in)
            	{
                    in>>b;
                    add(b);
                    in.get(line);
                    if(line=='\n')
                    {       break;}

            }
    	}
	
    	~list()
	{
		cur=head;
		while(cur!=NULL)
		{
			Node * temp=cur;
			cur=cur->next;
			delete temp;
		}
	}
};

Node * merge(Node *p,Node *q)
{
	list mlist;
	while(p!=NULL)
	{
		mlist.add(p->data);
		p=p->next;
	}
	while(q!=NULL)
        {
                mlist.add(q->data);
                q=q->next;
        }

	mlist.display();
}

int main(int argc,char *argv[])
{
	ifstream in(argv[1]);


	list list1,list2;
	list1.create_list(in);
	list2.create_list(in);
	Node *p_head_list1=list1.head;
	Node *p_head_list2=list2.head;
	cout<<"list-1: ";
	list1.display();
	cout<<"list-2: ";
	list2.display();
	cout<<"list-3: ";
	merge(p_head_list1,p_head_list2);
}



