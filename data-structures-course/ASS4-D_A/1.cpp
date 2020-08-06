#include<string>
#include<stdio.h>
#include <iostream>

using namespace std;

class IntNode
{
public:
    int info;
    int Stime;
    IntNode *next;
    IntNode(int  el, IntNode *ptr = 0, int tv=0);
    ~IntNode(void);
};
IntNode::IntNode(int el, IntNode *ptr,int tv)
{
    Stime = tv;
    info = el;
    next = ptr;
}

IntNode::~IntNode(void)
{
}
class IntSLList
{
public:
    int topl(void);//TOP item used to get ID at Deque
    void Qwait(void);// QUE wait
    int get_size(void);// Size
    IntSLList(void);
    ~IntSLList(void);
    int isEmpty();// check  if empty
    void Inqueue(int,int);// take ID and Time
    int Dequeue();//Deque and return the time
    bool isInList(int);//inside the list
    void printAll();// print all the que
private:
    IntNode *head, *tail ;
    int sizel=0;
};
IntSLList::IntSLList(void)
{
    head = tail = 0;
}
void IntSLList::Qwait(void)
{
    IntNode *tmp;
    for (tmp = head; tmp != 0; tmp = tmp->next)
    {
        tmp->Stime=tmp->Stime+1;
    }

}
int IntSLList::isEmpty()
{
    if(head==0)
    {
        return  1;
    }
    else return 0 ;
}


void IntSLList::Inqueue(int el, int tv)
{
    if (tail != 0)   // if list not empty;
    {
        tail->next = new IntNode(el,0,tv);
        tail = tail->next;
    }
    else
    {
        head = tail = new IntNode(el,0,tv);
    }
    sizel++ ;

}

int IntSLList::Dequeue()
{
    int tv = head->Stime;
    IntNode *tmp = head;

    if (head == tail) // if only one node in the list;
        head = tail = 0;
    else head = head->next;
    delete tmp;
    sizel-- ;
    return tv;

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
        cout<< tmp->info<<"   "<<tmp->Stime<<endl;
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
int IntSLList::get_size(void)
{
    return sizel ;

}
int IntSLList::topl(void)
{
    if(head!=NULL)
    {
        return head->info ;
    }
}

int main()
{
    int temp;// temp topl
    int temp2;//temp Dequ
    int i=0;// Time counter
    int C1=0;// counter at T1
    int C2=0;// counter at T2
    IntSLList T1 ;
    IntSLList T2 ;
    IntSLList Customer ;
    int nums[]= {54, 27, 0, 0, 82, 0, 23, 0, 24, -99, 0, 0, 13, 0, 0, 0, 89, -99};
    while(nums[i]!=-99)// in -99
    {

       if(C1==4)
        {   temp = T1.topl();
            temp2= T1.Dequeue();
            cout<<"Customer ID: "<<temp<<"  will leave at "<<temp2+4<<endl;//left time is the arrive after 4 what it takes to end the transaction
            C1=0;//rest counter
        }
        if(C2==4)
        {
            temp = T2.topl();
            temp2=T2.Dequeue();
            cout<<"Customer ID: "<<temp<<" will leave at "<<temp2+4<<endl;//left time is the arrive after 4 what it takes to end the transaction
            C2=0;// rest counter
        }

        if(nums[i]!=0)
        {
            Customer.Inqueue(nums[i],i+1);// Array starts at 0
            cout<<"Customer ID :"<<nums[i]<<" arrived at "<<i+1<<endl;

            if(T1.isEmpty()==1)
            {
                temp = Customer.topl();
                temp2=Customer.Dequeue();
                cout<<"Customer ID: "<<temp<<" assinged to T1 at "<<temp2<<endl;
                T1.Inqueue(temp,temp2);
                C1=1 ;//start counter
            }
            else if(T2.isEmpty()==1)
            {
                temp = Customer.topl();
                temp2=Customer.Dequeue();
                cout<<"Customer ID: "<<temp<<" assigned to T1 at "<<temp2<<endl;
                T2.Inqueue(temp,temp2) ;
                C2=1;//start counter

            }

            else{
                Customer.Qwait();// add 1 second to all the customers in the Que
            }
        }
        i++ ;
        if(C1!=0)
        {
            C1++;//inc Counter T1
        }
        if(C2!=0)
        {
            C2++;//inc Counter T2
        }
    }
    cout<<"Remaining number of customers in the queue is: "<<Customer.get_size()+T1.get_size()+T2.get_size()<<endl;//Total of Customers in T1,2 and the Que
}

