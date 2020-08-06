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
    IntSLList(void);
    ~IntSLList(void);
    int isEmpty();
    void Inqueue(int);
    int Dequeue();
    bool isInList(int);
    void printAll();
private:
    IntNode *head, *tail , *size;
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
    else {head = tail = new IntNode(el);}
    size++ ;

}

int IntSLList::Dequeue()
{
    int el = head->info;
    IntNode *tmp = head;

    if (head == tail) // if only one node in the list;
        head = tail = 0;
    else head = head->next;
    delete tmp;
    size-- ;
    return el;

    } // if only one node in the list;

bool IntSLList::isInList(int el)
{
    IntNode *tmp;
    for (tmp = head; tmp != 0 && !(tmp->info == el); tmp = tmp->next);
    return tmp != 0;
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

int main(){
IntSLList hodz ;
hodz.Inqueue(12);
hodz.Inqueue(13);
hodz.Inqueue(14);
hodz.Inqueue(15);
hodz.printAll();
cout<<"this is the dequeue"<<endl ;
hodz.Dequeue();
hodz.Dequeue();
hodz.printAll();
cout<<"this is the dequeue"<<endl ;
hodz.Dequeue();
hodz.Dequeue();
hodz.printAll();

}
