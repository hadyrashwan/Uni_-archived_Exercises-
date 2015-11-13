#include<string>
#include<stdio.h>
#include <iostream>
#include <assert.h>

using namespace std;
const maxStackSize ;

class ArrayStack{

private ;
 int stackArray(maxStackSize) ;
 int top=-1 ;
 int item ;
 public ;

 void setStack(int);
 int getStack(void);
 ArrayStack(void);
 ~ArrayStack(void);
 void push(int item);
    int pop();
    int top();
    bool isEmpty();
    bool isfull();

}

