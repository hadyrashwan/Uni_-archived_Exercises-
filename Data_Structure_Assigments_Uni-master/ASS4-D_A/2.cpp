#include<string>
#include<stdio.h>
#include <iostream>
#include<fstream>

using namespace std;
bool open=true;
class stringNode
{
public:
    string info;
    stringNode *next, *previous;
    int Qun ;
    stringNode(string el,  int numb=0, stringNode *n=0, stringNode *p=0 );
    ~stringNode(void);
};
stringNode::stringNode(string el,int numb , stringNode *n, stringNode *p)
{
    info = el;
    Qun = numb ;
    next = n;
    previous = p;
}


stringNode::~stringNode(void)
{
}
class DoublyLinkedList
{
public:
    void prstringAllSave(void);
    int WelcomeS(void);//welocmme screen
    void prstringAllOver(int numb);//print items over certian value
    void AddQ(string el, int numb) ;//add to a in stock item
    void addToList(string el, int numb);//add new item
    DoublyLinkedList(void);
    ~DoublyLinkedList(void);
    int isEmpty(void);
    void addToHead(string,int numb);
    void addToTail(string,int numb);
    string deleteFromTail(void);
    string deleteFromHead();
    void deleteNode(string,int numb);
    bool  isInList(string);
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

void DoublyLinkedList::addToHead(string el,int numb)
{
    if(isInList(el)!=true)
    {
        if (tail != 0)  //if list not empty;
        {

            head -> previous = new stringNode(el, numb,head, 0);
            head = head->previous;
            //head -> next -> previous = head;
        }
        else head = tail = new stringNode(el,numb);
    }
    else
    {
        AddQ(el,numb) ;

    }
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

void DoublyLinkedList::addToTail(string el,int numb)
{
    if(isInList(el)!=true)
    {
        if (tail != 0)   // if list not empty;
        {
            tail->next = new stringNode(el,numb, 0, tail);
            tail = tail -> next;
            //tail -> previous ->next = tail;
        }
        else head = tail = new stringNode(el,numb);
    }
    else AddQ(el,numb) ;
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

void DoublyLinkedList::deleteNode(string el,int numb)
{
    if(head->Qun<numb) {}
    if (head != 0) // if non-empty list;
        // if only one node in the list
        if (head == tail && el == head->info)
        {
            if(head->Qun==0 || head->Qun==numb )
            {
                delete head;
                head = tail = 0;
            }
            else if(head->Qun<numb)
            {
                cout<<"the quantity requested to delete is bigger than the in stock"<<endl ;
                return ;
            }
            else head->Qun=head->Qun-numb ;
        }
    //if more than one node and el is the 1st on list
        else if (el == head->info)
        {
            if(head->Qun==0 || head->Qun==numb) //IF zero or equal quantity
            {
                deleteFromHead();
            }
            else if(head->Qun<numb)
            {
                cout<<"the quantity requested to delete is bigger than the in stock"<<endl ;
                return ;
            }
            else head->Qun=head->Qun-numb ;
        }
        else if (el == tail-> info)
        {
            if(tail->Qun==0 || tail->Qun==numb) //IF zero or equal quantity
            {
                deleteFromTail();
            }
            else if(tail->Qun<numb)
            {
                cout<<"the quantity requested to delete is bigger than the in stock"<<endl ;
                return ;
            }
            else tail->Qun=tail->Qun-numb ;
        }
        else
        {
            stringNode *tmp;
            for (tmp = head; tmp != 0 && !(tmp->info == el); tmp = tmp->next);
            if (tmp != 0)
            {
                if(tmp->Qun==0 || tmp->Qun==numb) //IF zero or equal quantity
                {
                    tmp -> previous -> next = tmp -> next;
                    tmp -> next -> previous = tmp -> previous;
                    delete tmp;
                }
                else if(head->Qun<numb)//handle of - quantity error
                {
                    cout<<"the quantity requested to delete is bigger than the in stock"<<endl ;
                    return ;
                }
                else tmp->Qun=tmp->Qun-numb ;
            }
        }
}

bool  DoublyLinkedList::isInList(string el)
{
    stringNode *tmp;
    for (tmp = head; tmp != 0 && tmp->info != el; tmp = tmp->next);
    return tmp != 0;
}
void  DoublyLinkedList::AddQ(string el, int numb)
{
    stringNode *tmp;
    for (tmp = head; tmp != 0 && tmp->info != el; tmp = tmp->next);
    tmp->Qun=tmp->Qun+numb ;
}
void DoublyLinkedList::prstringAllSave(void)
{std::ofstream v("listSHOP.txt");
    stringNode *tmp;
    for (tmp = head; tmp != 0; tmp = tmp->next)
    {

        v <<tmp->Qun<<" items of "<<tmp->info <<std::endl ;
    }
}
void DoublyLinkedList::prstringAll(void)
{
    stringNode *tmp;
    for (tmp = head; tmp != 0; tmp = tmp->next)
    {
        cout <<tmp->Qun<<" items of "<<tmp->info <<endl ;
    }
}
void DoublyLinkedList::prstringAllOver(int numb)
{
    stringNode *tmp;
    for (tmp = head; tmp != 0; tmp = tmp->next)
    {
        if(tmp->Qun>numb)
        {
            cout <<tmp->Qun<<" items of "<<tmp->info <<endl ;
        }
        else continue ;
    }
}

DoublyLinkedList::~DoublyLinkedList(void)
{
}
void DoublyLinkedList::addToList(string el, int numb)
{
    stringNode *tmp;
    if(head==0) // zero item
    {
        addToHead(el,numb);
    }
    else //many items
    {
        for ( tmp=head  ; tmp != 0 && tmp->info < el  ; tmp = tmp->next);
        if(tmp==head)
        {
            addToHead(el,numb) ;
        }
        else if(tmp==0)
        {
            addToTail(el,numb);
        }
        else
        {
            if(isInList(el)!=true)
            {
                tmp->previous->next = new stringNode(el ,numb, tmp , tmp->previous );
                tmp->previous= tmp->previous->next ;
            }
            else AddQ(el,numb);
        }

    }
}
int DoublyLinkedList::WelcomeS(void)
{
    string option ;
    int option2;
    string option3 ;
    cout<<"Choose one of the following :"<<endl<<endl<<endl ;
    cout<<"   1. Display all list items and quantities ordered by name"<<endl;
    cout<<"   2. Display all items above a specific quantity "<<endl;
    cout<<"   3. Add an item and quantity"<<endl;
    cout<<"   4. Delete an item from the list"<<endl;
    cout<<"   5. Exit the shopping list"<<endl;
    cin>>option;
    if(option=="1")
    {
        cout<<"here is the list of items "<<endl;
        prstringAll();


    }
    else if(option=="2")
    {
        cout<<"please enter the number"<<endl;
        cin>>option2;
        cout<<"here is the new list of items "<<endl;
        prstringAllOver(option2);

    }
    else if (option=="3")
    {
        cout<<"please enter the item name "<<endl;
        cin>>option3;
        cout<<"please enter the item quantiy "<<endl;
        cin>>option2;
        addToList(option3,option2);
        cout<<"here is the list of items  after add"<<endl;
        prstringAll();
    }
    else if(option=="4")
    {
        cout<<"please enter the item name you want to delete "<<endl;
        cin>>option3;
        cout<<"please enter the item quantiy "<<endl;
        cin>>option2;
        cout<<" here is the list of items after delete command "<<endl;
        deleteNode(option3,option2);
        prstringAll();

    }

    else if(option== "5")
    {

        open = false;
    }
        else if(option== "6")
    {
        prstringAllSave();
    }
    else
        cout<<"Wrong Input please stick to the instructions";
}

main()
{
    DoublyLinkedList hodz ;
    while(open)
    {
        hodz.WelcomeS();
        cout<<endl<<"--------------"<<"--------------------"<<endl;

    }
}

