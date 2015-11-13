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
    int loopAll(int c) ;
    IntSLList(void);
    ~IntSLList(void);
    int isEmpty();
    void Push(int);
    int Pull();
    void printAll();
private:
    IntNode *head ;
};
IntSLList::IntSLList(void)
{
    head =  0;
}


void IntSLList::Push(int el)
{
    head = new IntNode(el,head);
}


int IntSLList::Pull()
{
    IntNode *tmp = head;

    if (head != 0){
        int el = head->info;
        head = head->next;
         delete tmp ;
         return el ;

    } // if only one node in the list;
}

void IntSLList::printAll(void)
{
    IntNode *tmp;
    for (tmp = head; tmp != 0; tmp = tmp->next)
    {
        cout<< tmp->info << endl;
    }

}
int IntSLList::loopAll(int c)
{
    IntNode *tmp;
    int cn=0 ;
    for (tmp = head; tmp != 0; tmp = tmp->next)
    {
        cn++ ;
        if (cn==c)
        {
            return tmp->info;
        }
    }

}
int IntSLList::isEmpty()
{
    return head == 0;
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
int main(){

IntSLList l1 ;
l1.Push(1);
l1.Push(2);
l1.Push(3);
l1.Push(4);
l1.Push(5);
l1.Push(6);
l1.Pull();
l1.printAll();

return 0 ;
}
