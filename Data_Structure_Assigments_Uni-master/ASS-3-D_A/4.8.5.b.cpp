#include<string>
#include<stdio.h>
#include <iostream>

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
class IntSLList
{
public:
    int sizee=0 ;
    int Front (void);
    IntSLList(void);
    ~IntSLList(void);
    int isEmpty();
    void Inqueue(int);
    int Dequeue();
    bool isInList(int);
    void printAll();
private:
    IntNode *head, *tail ;
};
IntSLList::IntSLList(void)
{
    head = tail = 0;
}

int IntSLList::isEmpty()
{
    return head == 0;
}


void IntSLList::Inqueue(int el)
{
    if (tail != 0)   // if list not empty;
    {
        tail->next = new IntNode(el);
        tail = tail->next;
    }
    else
    {
        head = tail = new IntNode(el);
    }
    sizee++ ;

}

int IntSLList::Dequeue()
{
    int el = head->info;
    IntNode *tmp = head;

    if (head == tail) // if only one node in the list;
        head = tail = 0;
    else head = head->next;
    delete tmp;
    sizee-- ;
    return el;

} // if only one node in the list;

bool IntSLList::isInList(int el)
{
    IntNode *tmp;
    IntNode *tmp2;
    for (tmp = head; tmp != 0 && !(tmp->info == el); tmp = tmp->next);
    return tmp != 0;
    tmp2=head;
    head=tmp;
    Dequeue();
    head=tmp2;
}

void IntSLList::printAll(void)
{
    IntNode *tmp;
    for (tmp = head; tmp != 0; tmp = tmp->next)
    {
        cout<< tmp->info <<endl;
    }

}

IntSLList::~IntSLList(void)
{
    for (IntNode *p; !isEmpty(); )
    {
        p = head->next;
        delete head;
        head = p;
    }
}
int IntSLList::Front (void)
{
    return head->info;
}
int  main()
{
    IntSLList hodz ;
    IntSLList zombie ;
    int maxx=0;
    int tmp=0;
    int tmp2=0;
    hodz.Inqueue(16);
    hodz.Inqueue(11);
    hodz.Inqueue(12);
    hodz.Inqueue(13);
    hodz.Inqueue(15);
    hodz.Inqueue(20);
    hodz.Inqueue(24);
    hodz.Inqueue(28);
    hodz.Inqueue(43);
    hodz.Inqueue(59);
    hodz.Inqueue(14);
    hodz.printAll();
    cout<<hodz.sizee<<"  size "<<endl;
    int s1= hodz.sizee;

    for(int i=0 ; i<s1 ; i++)
    {
        maxx=hodz.Dequeue();
        for(int c=i+1 ; c<s1; c++)
        {
            cout<<"\tinner LOOP"<<endl;
            tmp=hodz.Dequeue();
            if(maxx<tmp)
            {   hodz.Inqueue(maxx);
                maxx=tmp;

            }
            else hodz.Inqueue(tmp);


        }
        if(maxx!=0){
        zombie.Inqueue(maxx);}
        maxx=0;
        cout<<"outer LOOP"<<endl;
    }
    cout<<"this is the final"<<endl;
    zombie.printAll();
}
