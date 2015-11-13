#include<iostream>

using namespace std;

struct node
{
    int info;
    struct node *next;
    struct node *prev;
}*start;


class double_llist

{

    public:
        void create_list(int value)
        {
            struct node *s, *temp;
            temp = new(struct node); 
            temp->info = value;
            temp->next = NULL;
            if (start == NULL)
            {
                temp->prev = NULL;
                start = temp;
            }
            else
            {
                s = start;
                while (s->next != NULL)
                    s = s->next;
                s->next = temp;
                temp->prev = s;
            }   
        }
    
        void add_after(int value, int pos)
        {
            if (start == NULL)
            {
                cout<<"First Create the list."<<endl;
                return;
            }

            struct node *tmp, *q;
            int i;

            q = start;
            for (i = 0;i < pos - 1;i++)
            {
                q = q->next;
                if (q == NULL)
                {
                    cout<<"There are less than ";
                    cout<<pos<<" elements."<<endl;
                    return;
                }
            }

            tmp = new(struct node);
            tmp->info = value;
            if (q->next == NULL)
            {
                q->next = tmp;
                tmp->next = NULL;
                tmp->prev = q;      
            }
            else
            {
                tmp->next = q->next;
                tmp->next->prev = tmp;
                q->next = tmp;
                tmp->prev = q;
            }
   
        }
    
        void delete_element(int value)
        {
            struct node *tmp, *q;
            
            if (start->info == value)
            {
                tmp = start;
                start = start->next;  
                start->prev = NULL;
                cout<<"Element Deleted"<<endl;
                delete tmp;
                return;
            }
            q = start;
            while (q->next->next != NULL)
            {   
                
                if (q->next->info == value)  
                {
                    tmp = q->next;
                    q->next = tmp->next;
                    tmp->next->prev = q;
                    cout<<"Element Deleted"<<endl;
                    delete tmp;
                    return;
                }
                q = q->next;
            }

             

            if (q->next->info == value)    
            { 	
                tmp = q->next;
                delete tmp;
                q->next = NULL;
                return;
            }
            cout<<"Element "<<value<<" not found"<<endl;
        }
    
        void search_element(int value)
	{
            struct node *q;
            if (start == NULL)
            {
                cout<<"List empty"<<endl; return;
            }
            q = start;
            while (q != NULL)
            {
		if(q->info == value)
		{
			cout<<"Found"<<endl;
			return;
		}
                q = q->next;
            }
            cout<<"Not found"<<endl;
        }

        void display_dlist()       
        {
            struct node *q;
            if (start == NULL)
            {
                cout<<"List empty"<<endl;
                return;
            }
            q = start;
            cout<<"The Doubly Link List is :"<<endl;
            while (q != NULL)
            {
                cout<<q->info<<" <-> ";
                q = q->next;
            }
            cout<<"NULL"<<endl;
        }
        double_llist()

        {

            start = NULL;  

        }

};

 
int main()
{
    int choice, element, position;
    double_llist dl;
    int run=1;
    while (run)
    {
        cout<<endl<<"----------------------------"<<endl;
        cout<<endl<<"Operations on Doubly linked list"<<endl;
        cout<<endl<<"----------------------------"<<endl;         
        cout<<"1.Create Node"<<endl;
        cout<<"2.Add after position"<<endl;
        cout<<"3.Delete"<<endl;
	cout<<"4.Search"<<endl;
        cout<<"5.Display"<<endl;
        cout<<"6.Quit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch ( choice )
        {

        case 1:
            cout<<"Enter the element: ";
            cin>>element;
            dl.create_list(element);
            cout<<endl;
            break;

        case 2:
            cout<<"Enter the element: ";
            cin>>element;
            cout<<"Insert Element after postion: ";
            cin>>position;
            dl.add_after(element, position);
            cout<<endl;
            break;

        case 3:
            if (start == NULL)
            {                      
                cout<<"List empty,nothing to delete"<<endl;   
                break;
            }
            cout<<"Enter the element for deletion: ";
            cin>>element;
            dl.delete_element(element);
            cout<<endl;
            break;

	case 4:
	    if (start ==  NULL)
	    {
		cout<<"List is empty"<<endl;
		break;
	    }
	    cout<<"Enter the element: ";
	    cin>>element;
	    dl.search_element(element);	    
	    break;
        case 5:
            dl.display_dlist();
            cout<<endl;
            break;

        case 6:
            run=0;

        default:
            cout<<"Wrong choice"<<endl;
        }

    }

    return 0;
}
