#include<string>
#include<stdio.h>
#include <iostream>

using namespace std;
class stringNode
{
public:
    string info;
    stringNode *next, *previous;
    stringNode(string el, stringNode *n=0, stringNode *p=0);
    ~stringNode(void);
};
stringNode::stringNode(string el, stringNode *n, stringNode *p)
{
    info = el;
    next = n;
    previous = p;
}


stringNode::~stringNode(void)
{
}
class DoublyLinkedList
{
public:
    bool isInFlight(string el);
    void DeleteFromFlight(string el);
    void addToFlight(string el);
    DoublyLinkedList(void);
    ~DoublyLinkedList(void);
    int isEmpty(void);
    void addToHead(string);
    void addToTail(string);
    string deleteFromTail(void);
    string deleteFromHead();
    void deleteNode(string);
    bool isInList(string);
    void prstringAll();
private:
    stringNode *head, *tail;
};
DoublyLinkedList::DoublyLinkedList(void)
{
    head = tail = 0;
}

int DoublyLinkedList::isEmpty()
{
    return head == 0;
}

void DoublyLinkedList::addToHead(string el)
{
    if (tail != 0)  //if list not empty;
    {
        head -> previous = new stringNode(el, head, 0);
        head = head->previous;
        //head -> next -> previous = head;
    }
    else head = tail = new stringNode(el);
}

string DoublyLinkedList::deleteFromHead()
{
    string el = head->info;
    if (head == tail)
    {
        delete head;
        head = tail = 0;
    }
    else
    {
        head = head -> next;
        delete head -> previous;
        head -> previous = 0;
    }
    return el;
}

void DoublyLinkedList::addToTail(string el)
{
    if (tail != 0)   // if list not empty;
    {
        tail->next = new stringNode(el, 0, tail);
        tail = tail -> next;
        //tail -> previous ->next = tail;
    }
    else head = tail = new stringNode(el);
}

string DoublyLinkedList::deleteFromTail()
{
    string el = tail -> info;
    if (head == tail)
    {
        delete head;
        head = tail = 0;
    }
    else
    {
        tail = tail -> previous;
        delete tail -> next;
        tail -> next = 0;
    }
    return el;
}

void DoublyLinkedList::deleteNode(string el)
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
            deleteFromHead();
        }
        else if (el == tail-> info)
        {
            deleteFromTail();
        }
        else
        {
            stringNode *tmp;
            for (tmp = head; tmp != 0 && !(tmp->info == el); tmp = tmp->next);
            if (tmp != 0)
            {
                tmp -> previous -> next = tmp -> next;
                tmp -> next -> previous = tmp -> previous;
                delete tmp;
            }
        }
}

bool DoublyLinkedList::isInList(string el)
{
    stringNode *tmp;
    for (tmp = head; tmp != 0 && tmp->info != el; tmp = tmp->next);
    return tmp != 0;
}

void DoublyLinkedList::prstringAll(void)
{
    stringNode *tmp;
    for (tmp = head; tmp != 0; tmp = tmp->next)
    {
        cout << tmp->info << endl ;
    }
}

DoublyLinkedList::~DoublyLinkedList(void)
{
}
void DoublyLinkedList::addToFlight(string el)
{
    stringNode *tmp;
    if(head==0) // zero item
    {
        addToHead(el);
    }
    else //many items
    {
        for ( tmp=head  ; tmp->info < el && tmp != 0 ; tmp = tmp->next);
        if(tmp==head)
        {
            addToHead(el) ;
        }
        else if(tmp==0)
        {
            addToTail(el);
        }
        else
        {
            tmp->previous->next = new stringNode(el , tmp , tmp->previous   );
            tmp->previous= tmp->previous->next ;
        }

    }
}
void DoublyLinkedList:: DeleteFromFlight(string el){
    deleteNode(el) ;


}
bool DoublyLinkedList::isInFlight(string el){
 return isInList(el);


}

main()
{
    DoublyLinkedList hodz ;
    hodz.addToHead("nameS");
    hodz.addToFlight("SDZ");
    hodz.addToFlight("AAB");
    hodz.addToFlight("AAB");
    hodz.addToFlight("AAB");
    hodz.addToFlight("AAB");
    hodz.addToFlight("AAB");
    hodz.addToFlight("AAA");
    hodz.addToFlight("Bah");
    hodz.addToFlight("CCAW");
    hodz.addToFlight("Z");
    hodz.addToFlight("BAA");
    hodz.prstringAll();
    cout<<"PART 2  del SDZ "<<endl;
    hodz.DeleteFromFlight("SDZ");
    hodz.prstringAll();
    cout<<"PART 3.1 find Z "<<endl;
    cout<< hodz.isInFlight("Z")<<endl;
    cout<<"PART 3.2 find AAA "<<endl;
    cout<< hodz.isInFlight("AAC")<<endl;
}
