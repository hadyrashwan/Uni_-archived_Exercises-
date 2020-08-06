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
    void movetofront(void);
   int cumulativeSum(int);
    int loopAll(int c) ;
    IntSLList(void);
    ~IntSLList(void);
    int isEmpty();
    void addToHead(int);
    void addToTail(int);
    int deleteFromHead();
    int deleteFromTail();
    void deleteNode(int);
    bool isInList(int);
    void printAll();
private:
    IntNode *head, *tail;
};
IntSLList::IntSLList(void)
{
    head = tail = 0;
}

int IntSLList::isEmpty()
{
    return head == 0;
}

void IntSLList::addToHead(int el)
{
    head = new IntNode(el,head);
    if (tail == 0)
        tail = head;
}

void IntSLList::addToTail(int el)
{
    if (tail != 0)   // if list not empty;
    {
        tail->next = new IntNode(el);
        tail = tail->next;
    }
    else head = tail = new IntNode(el);
}

int IntSLList::deleteFromHead()
{
    int el = head->info;
    IntNode *tmp = head;

    if (head == tail) // if only one node in the list;
        head = tail = 0;
    else head = head->next;
    delete tmp;
    return el;

    } // if only one node in the list;
}

int IntSLList::deleteFromTail()
{
    int el = tail->info;
    if (head == tail)   // if only one node on the list;
    {
        delete head;
        head = tail = 0;
    }
    else   // if more than one node in the list,
    {
        IntNode *tmp;
        // find the predecessor of tail;
        for (tmp = head; tmp->next != tail; tmp = tmp->next);
        delete tail;
        tail = tmp; // the predecessor of tail becomes tail;
        tail->next = 0;
    }
    return el;
}

void IntSLList::deleteNode(int el)
{
    if (head != 0) // if non-empty list;
        // if only one node in the list
        if (head == tail && el == head->info)
        {
            delete head;
            head = tail = 0;
        }
    //if more than one node and el is the 1st on list
        else if (el == head->info)
        {
            IntNode *tmp = head;
            head = head->next;
            delete tmp;
        }
        else
        {
            IntNode *pred, *tmp;
            for (pred = head, tmp = head->next; tmp != 0 && !(tmp->info == el);
                    pred = pred->next, tmp = tmp->next);
            if (tmp != 0)
            {
                pred->next = tmp->next;
                if (tmp == tail)
                    tail = pred;
                delete tmp;
            }
        }
}

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
        cout<< tmp->info;
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

 IntSLList::~IntSLList(void)
{
    for (IntNode *p; !isEmpty(); )
    {
        p = head->next;
        delete head;
        head = p;
    }
}
int IntSLList::cumulativeSum(int c){

    int sm ;
    IntNode *tmp;
    int cn=0 ;
    for (tmp = head; tmp != 0; tmp = tmp->next)
    {
        sm = sm + tmp->info;
        cn++ ;
        if (cn==c)
        {
           return sm ;
        }
    }
}
void IntSLList::movetofront(void){
    int t ;
    t=tail->info;
    deleteFromTail();
    addToHead(t);
}
