#include <iostream>
#include <string>
using namespace std;


class IntNode
{
public:
    int info;
    IntNode *next;
    IntNode(int, IntNode *ptr = 0);
    ~IntNode(void);
};
IntNode::IntNode(int el, IntNode *ptr)
{
    info = el;
    next = ptr;
}

IntNode::~IntNode(void)
{
}
class IntStack
{
public:
    IntStack(void);
    ~IntStack(void);
    int isEmpty();
    void Push(int);
    int Pull();
    int Top();
    int getSize();

    void printAll();
private:
    IntNode *head ;
    int sizee=0;
};
IntStack::IntStack(void)
{
    head =  0;
}


void IntStack::Push(int el)
{
    head = new IntNode(el,head);
    sizee++;
}
int IntStack::Top()
{
    IntNode *temp=head;
    return temp->info;
}

int IntStack::Pull()
{
    IntNode *tmp = head;

    if (head != 0)
    {
        int el = head->info;
        head = head->next;
        delete tmp ;
        sizee--;
        return el ;

    } // if only one node in the list;
}
int IntStack::getSize()
{
    return sizee;
}
void IntStack::printAll(void)
{
    IntNode *tmp;
    for (tmp = head; tmp != 0; tmp = tmp->next)
    {
        cout<< tmp->info << endl;
    }

}

int IntStack::isEmpty()
{
    return head == 0;
}

IntStack::~IntStack(void)
{
    for (IntNode *p; !isEmpty(); )
    {
        p = head->next;
        delete head;
        head = p;
    }
}
int main()
{

    IntStack l1 ;
    IntStack l2 ;
    l1.Push(5);
    l1.Push(2);
    l1.Push(1);
    l1.Push(4);
    l1.Push(3);
    l1.Push(6);
    l1.printAll();

    for(int i=l1.getSize(); i>0 ; i--)
    {
        int mn=1000000000;
        for(int j=0; j<i ; j++)
        {
            if(l1.Top()<mn)
            {
                if(j!=0)
                    l2.Push(mn);
                mn=l1.Pull();

            }
            else
            {
                l2.Push(l1.Pull());
            }
        }
        l1.Push(mn);
        cerr<<"Min "<<mn<<endl<<l2.getSize()<<endl;
        while(l2.isEmpty()!=true)
        {
            l1.Push(l2.Pull());
            cerr<<l1.Top()<<" Error\n";
        }
    }

    cout<<"Sorted"<<endl;
    l1.printAll();
    return 0 ;
}
