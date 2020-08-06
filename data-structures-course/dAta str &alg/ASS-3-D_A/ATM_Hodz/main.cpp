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
    int topl(void);
    int get_size(void);
    IntSLList(void);
    ~IntSLList(void);
    int isEmpty();
    void Inqueue(int,int);
    int Dequeue();
    bool isInList(int);
    void printAll();
private:
    IntNode *head, *tail ;
    int sizel=0;
};
IntSLList::IntSLList(void)
{
    head = tail = 0;
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
    int temp;
    int i=0;
    int C1=0;
    int C2=0;
    IntSLList T1 ;
    IntSLList T2 ;
    IntSLList Customer ;
    int nums[]= {54, 27, 0, 0, 82, 0, 23, 0, 24, 1, 0, 0, 13, 0, 0, 0, 89, -99};
    while(nums[i]!=-99)
    {
        //cout<<C1<<"   C1 ";
       // cout<<C2<<"   C2"<<endl;
        if(C1==5)
        {   temp = T1.topl();
            cout<<"The customer with ID number : "<<temp<<" has just finshed the transaction from T1 who arrived at "<<T1.Dequeue()<<"  and left at "<<i<<endl;
            C1=0;
        }
        if(C2==5)
        {
            temp = T2.topl();
            cout<<"The customer with ID number : "<<temp<<" has just finshed the transaction from T2 after "<<T1.Dequeue()<<"  and left at "<<i<<endl;
            C2=0;
        }
        if(nums[i]!=0)
        {
            //cout<<Customer.topl()<<"cust TOPL"<<endl;
            //cout<<nums[i]<<"  IN LOOP 1"<<endl;
            Customer.Inqueue(nums[i],i+1);
           // cout<<"CUSTOMER NODES"<<endl;
          //  Customer.printAll();
            if(T1.isEmpty()==1)
            {
                 temp = Customer.topl();
                T1.Inqueue(temp,Customer.Dequeue());
                //cout<<"T1 NODES"<<endl;
              //  T1.printAll();
                C1=1 ;
            }
            else if(T2.isEmpty()==1)
            {
                temp = Customer.topl();
                T2.Inqueue(temp,Customer.Dequeue()) ;
                C2=1;

            }
        }

        i++ ;
        if(C1!=0)
        {
            C1++;
        }
        if(C2!=0)
        {
            C2++;
        }
    }
//    T1.Inqueue(12,1);
//    T2.Inqueue(13,5);
//    T1.Inqueue(14,7);
//    T2.Inqueue(15,9);
//    cout<<"T1 list"<<endl;
//    T1.printAll();
//    cout<<"SIZE IS ..."<<T1.get_size()<<endl;
//    cout<<"this is the dequeue"<<endl ;
//   // cout<<"T1 deq "<<T1.Dequeue()<<endl;
//    cout<<"T1 after deq"<<endl;
//    T1.printAll();
//    cout<<"T2 list"<<endl ;
//    T2.printAll();
//    cout<<"T2 Deq"<<endl;
//    cout<<"T2 deq "<<T2.Dequeue()<<endl;
//    T2.printAll();
//    cout<<"T1 list  "<<T1.topl()<<endl ;


}

