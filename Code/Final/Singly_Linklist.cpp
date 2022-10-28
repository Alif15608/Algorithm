#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class linked_list
{
private:
    node *head,*tail;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
            cout<<"\nHead:"<<head;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
        cout<<"\nData:"<<tail->next<<"\nNext:"<<tail;
    }
};

int main()
{
    linked_list a;
    a.add_node(1);
    a.add_node(2);
    return 0;
}
