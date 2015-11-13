#include<string>
#include<stdio.h>
#include <iostream>

using namespace std;

class EMPLOYEE
{
    public:

    void  setname(string nme){
        name=nme ;
    }
    string getname(){
    return name ;
    }
   void  setsalary(float slary){
    salary=slary ;
    }
    float getsalary(){
    return salary ;
    }
    private:
    string name ;
    float salary ;

};
//float suma(int n){
//    float sum=0 ;
//    for(int i=0 ; i<n ; i++){
//    sum=sum+employees[i];
//
//
//    }
//    sum=sum/n ;
//    return sum ;
//    }
//    float sum(int n){
//    float sum=0 ;
//    for(int i=0 ; i<n ; n++){
//    sum=sum+employee[i];
//
//
//    }
//    return sum ;
//    }
int main(){
    int n=2 ;
    cout<<"how many employees ur company have ??";
    cin>>n;
    cout<<"eshta da5lie asmehom ya5oya "<<endl;
    string nn="hady";
    float ss=12 ;
    EMPLOYEE *employees = new EMPLOYEE[n];
    for(int c=0 ; c<n ; c++){
    cin>>nn>>ss ;
    employees[c].setname(nn);
    employees[c].setsalary(ss);
    }
    for(int c=0 ; c<n ; c++){
    cout<<employees[c].getname()<<endl;
    cout<<employees[c].getsalary()<<endl;
    }
    cout<<"this is the sum"<<endl;
    float sum=0 ;
    for(int i=0 ; i<n ; i++){
    sum=sum+employees[i].getsalary();


    }
    cout<< sum<<endl ;
    cout<<"this is the suma"<<endl;
    sum=0;
    for(int i=0 ; i<n ; i++){
    sum=sum+employees[i].getsalary();


    }
    sum=sum/n ;
    cout<< sum<<endl ;

return 0;
}
