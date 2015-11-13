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
    l1.Push(1);
    l1.Push(2);
    l1.Push(3);
    l1.Push(4);
    l1.Push(5);
    l1.Push(6);
    l1.Pull();
    l1.printAll();
    cout<<"testing"<<endl;
    IntStack S2;
    IntStack S3;
    while(l1.isEmpty()==false)
    {
        S2.Push(l1.Pull());

    }
    while(S2.isEmpty()==false)
    {

        S3.Push(S2.Pull());
    }
    S3.printAll();
count<<"part 2 "<<endl:
         IntStack S4 ;
    int tm ;
    for(int i=S3.getSize(); i>0 ; i--)
    {
        for(int j=0 ; j<i ; j++)
        {
            if(j==0)
            {
                tm=S3.Pull();
            }
            else{
                S4.Push(S3.Pull());
            }
        }

    }

    return 0 ;
}

