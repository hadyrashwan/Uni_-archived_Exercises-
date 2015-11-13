#include<string>
#include<stdio.h>
#include <iostream>

using namespace std;

template <class T>
class Node
{
public:
    T info;
    Node<T> *next;
    Node<T>(T el, Node<T> *ptr=0)
    {
        info = el;
        next = ptr;
    }

};

template <class T>
class SLList
{
public:
//    SLList(void);
//    ~SLList(void);
//    T isEmpty();
//    void addToHead(T);
//    void addToTail(T);
//    T deleteFromHead();
//    T deleteFromTail();
//    void deleteNode(T);
//    bool isInList(T);
//    void printAll();
SLList(void)
{
    head = tail = 0;
}

int isEmpty()
{
    return head == 0;
}

void addToHead(T el)
{
    head = new Node<T>(el,head);
    if (tail == 0)
        tail = head;
}

void addToTail(T el)
{
    if (tail != 0)   // if list not empty;
    {
        tail->next = new Node<T>(el);
        tail = tail->next;
    }
    else head = tail = new Node<T>(el);
}

T deleteFromHead()
{
    T el = head->info;
    Node<T> *tmp = head;

    if (head == tail) // if only one node in the list;
        head = tail = 0;
    else head = head->next;
    delete tmp;
    return el;
}

T deleteFromTail()
{
    int el = tail->info;
    if (head == tail)   // if only one node on the list;
    {
        delete head;
        head = tail = 0;
    }
    else   // if more than one node in the list,
    {
        Node<T> *tmp;
        // find the predecessor of tail;
        for (tmp = head; tmp->next != tail; tmp = tmp->next);
        delete tail;
        tail = tmp; // the predecessor of tail becomes tail;
        tail->next = 0;
    }
    return el;
}

void deleteNode(T el)
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
            Node<T> *tmp = head;
            head = head->next;
            delete tmp;
        }
        else
        {
            Node<T> *pred, *tmp;
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

bool isInList(T el)
{
    Node<T> *tmp;
    for (tmp = head; tmp != 0 && !(tmp->info == el); tmp = tmp->next);
    return tmp != 0;
}

void printAll(void)
{
    Node<T> *tmp;
    for (tmp = head; tmp != 0; tmp = tmp->next)
    {
        cout<< tmp->info;
    }

}

 ~SLList(void)
{
    for (Node<T> *p; !isEmpty(); )
    {
        p = head->next;
        delete head;
        head = p;
    }
}
private:
    Node<T> *head, *tail;
};
int main(){
SLList<int> l1;
SLList<float> l2 ;
SLList<char> l3 ;
    l1.addToHead(40);
    l1.addToHead(89);
    l1.addToHead(90);
    l1.addToHead(5);
    l2.addToTail(2.2);
    l2.addToTail(3.4);
    l3.addToTail('e');
    l3.addToTail('g');
    l3.addToTail('y');
    cout<<endl;
    l1.printAll();
    cout<<endl;
    l2.printAll();
    cout<<endl;
    l3.printAll();
    return 0 ;
}
