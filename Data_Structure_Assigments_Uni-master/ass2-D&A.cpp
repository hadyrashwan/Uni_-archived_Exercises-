#include<string>
#include<stdio.h>
#include <iostream>

using namespace std;
class Person {
public:
    Person(string nI , int aI);
    Person();
     void setname(string n){
    }
    string getname(){
    return name ;
    }
    void setage(){
    }
    int getage(){
    return age ;
    }
    private:
    string name;
    int age ;
};


Person::Person(string nI , int aI){
name=nI;
age=aI ;
}
Person::Person(){
name="none";
age=0 ;
}
int main () {
    string a50="which is younger than 50 ";
    int arI[6]={20, 5 , -10 , 25, 99,51};
    string arS[6]={"hady" , "wardy" , "seif" , "moshrafa" , "hadir", "mones"  } ;
    Person hady ;
    //number 1
    cout<<"this is the 1st question \n" ;
    cout<<"my name is "<<hady.getname()<<" "<<" and my age is  "<<hady.getage()<<" \n" ;
    //number 2 and 4
    cout <<"this is the 2nd question"<<"\n";
    int a50C=0 ;
    for(int i=0 ; i<6 ; i++){
    Person Students(arS[i],arI[i]);
    if(Students.getage()>50){
    a50C++ ;
    a50="which student is older than 50 ";
    }
    cout<<"this is student number "<<i+1<<" the student named : "<<Students.getname()<<" and he/she has "<<Students.getage()<<" years  "<<a50<<"\n" ;
    a50="this student is younger than 50 ";
    }
    cout<<"their is "<<a50C<<" students older than 50 \n";
    //number 3
    cout<<"this is the 3rd question \n" ;
    cout<<"please enter 6 names then their ages \n" ;
    string nII ;
    int aII ;
    for(int x=0 ; x<6 ; x++ ){
        cout<<"enter student number"<<x+1<<" name \n " ;
        cin>>nII;
        arS[x]=nII;
        cout<<"enter student age" <<x+1<<"\n " ;
        cin>>aII;
        arI[x]=aII;
    }
    a50C=0 ;
    for(int z=0 ; z<6 ; z++){
    Person Students(arS[z],arI[z]);
    if(Students.getage()>50){
    a50C++ ;
    a50="this student is older than 50 ";
    }
    cout<<"the student named :"<<Students.getname()<<" and he/she has "<<Students.getage()<<" years  "<<"student number"<<z<<" "<<a50<<"\n" ;
    a50="this student is younger than 50 ";
    }
    cout<<"their is "<<a50C<<" students older than 50";

  return 0;
}
