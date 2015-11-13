#include<string>
#include<stdio.h>
#include <iostream>

using namespace std;
class stackARR
{
private:
    int info[100] ;
    int top=-1 ;

public:
    stackARR();
    void Push(int numb);
    int  Pull(void);
    bool isempty(void);
    int issize(void);
    void printall(void);
    int getTop(void) ;
};
stackARR::stackARR() {}
void stackARR::Push(int numb)
{

    if(issize()<101){
    top++;
    info[top]=numb;
    }
}
int stackARR::Pull(void)
{
    if(isempty()==false ){
    int outy ;
    outy=info[top];
    top--;
    return outy;
    }

}
bool stackARR::isempty(void)
{
    if(top!=-1)
    {
        return false;
    }
    else
    {
        return true ;

    }
}
int stackARR::issize(void)
{
    int temp=top;
    temp++ ;
    return temp ;
}
void stackARR::printall(void)
{
    int temp=top;
    for(int i=temp ; temp>-1 ; temp--)
    {
        cout<<info[temp]<<endl;
    }

}
int  stackARR::getTop(void){
    return info[top] ;
}
int main(){
stackARR hodz ;
hodz.Push(12);
hodz.Push(22);
hodz.Push(33);
hodz.Push(44);
hodz.Push(55);
hodz.Pull();
hodz.printall();


}

