#include<string>
#include<stdio.h>
#include <iostream>

using namespace std;
class Student
{
public:
    float calclate_avrage()
{
    float grade ;
    grade=getG1()+getG2()+getG3() ;
    grade=grade/3 ;
    return grade ;

}
    Student(string nI , int g1, int g2 , int g3);
    Student();
    void student_grades( int g1, int g2 , int g3);
    void Student_name(string nI );
    void setname()
    {
    }
    string getname()
    {
        return name ;
    }
    void setG1()
    {
    }
    int getG1()
    {
        return G1 ;
    }
    void setG2()
    {
    }
    int getG2()
    {
        return G2 ;
    }
    void setG3()
    {
    }
    int getG3()
    {
        return G3 ;
    }
private:
    string name;
    int G1 ;
    int G2 ;
    int G3 ;
};


Student::Student(string nI , int g1, int g2 , int g3)
{
    name=nI;
    G1=g1 ;
    G2=g2 ;
    G3=g3 ;
}
void Student::Student_name(string nI )
{
    name=nI;
}
void  Student::student_grades( int g1, int g2 , int g3)
{
    G1=g1 ;
    G2=g2 ;
    G3=g3 ;
}
Student::Student()
{
    name="none";
    G1=100 ;
    G2=100 ;
    G3=100 ;
}
//void set_name(string name ){
//
//}
////void set_grades(int G1, int G2 , int G3){
////    Student(,G1,G2,G3)
//}

int main ()
{
    string name = "hady" ;
   int G1=90 ;
    int G2=80 ;
    int G3 = 70 ;
    Student hady ;
    hady.Student_name(name);
    hady.student_grades(G1,G2,G3);
    float grade = hady.calclate_avrage();
    cout<<grade;
    cout<<hady.getname()<<"  "<<hady.getG1()<<"  "<<hady.getG2()<<"  "<<hady.getG3()<<"  " ;
    Student Seif ;
    Student Wardy ;
    cout<<"enter the sutdent name" ;

    return 0;
}
