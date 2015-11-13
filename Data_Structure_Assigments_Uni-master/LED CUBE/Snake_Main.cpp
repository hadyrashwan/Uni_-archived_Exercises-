#include<string>
#include<stdio.h>
#include <iostream>
#include<cstdlib>
#include <time.h>
using namespace std;
class get_steps{
//
public :
int keyI ; //key int ;
char key ;
///
int upD = 25 ;// add value
int downD = -25 ;
int leftD = 1 ;
int rightD = -1 ;
int forwrdD = 5 ;
int backwrdD = -5 ;
///
int upI = 0 ; // intial value
int downI = 4 ;
int leftI = 0 ;
int rightI = 4 ;
int forwrdI = 0 ;
int backwrdI = 4 ;
//
int upB = -100 ;// vlalue added to break edges
int downB=  100 ;
int leftB =  -4 ;
int rightB = 4 ;
int forwrdB = -20 ;
int backwrdB = 20 ;
//count
int upC =upI;
int downC = downI ;
int leftC =leftI ;
int rightC =rightI ;
int forwrdC= forwrdI ;
int backwrdC=backwrdI ;
//
char keypad(int keyI) ;
int get_step(char key) ;
};
char get_steps::keypad(int keyI){
         // define keyboard
    if (keyI==1)
    key='U';
    if (keyI==3)
    key='D';
    if (keyI==2)
    key='F';
    if (keyI==4)
    key='L';
    if (keyI==6)
    key='R';
    if (keyI==8)
    key='B';
    return key ;
}


//
int get_steps::get_step(char key){
int step ;
if (key=='U'){
    upC++;
    downC--;
    if(upC==5){
    step=upB ; // add step BREAK
    downC=4 ;
    upC=0;
    }
    else step=upD ;// add steps NORMAL
}
else if (key=='D'){
    downC++;
    upC--;
    if(downC==5){
    step=downB ;
    upC=4;
    downC=0 ;
    }
    else step=downD ;
}
else if (key=='F'){
    forwrdC++;
    backwrdC--;
    if(forwrdC==5){
    step=forwrdB ;
    backwrdC=4;
    forwrdC=0;
    }
    else step=forwrdD ;
}
else if (key=='L'){
    leftC++;
    rightC--;
    if(leftC==5){
    step=leftB ;
    rightC=4;
    leftC=0;
    }
    else step=leftD ;
}
else if (key=='B'){
    backwrdC++;
    forwrdC--;
    if(backwrdC==5){
    step=backwrdB ;
    forwrdC=4 ;
    backwrdC=0;
    }
    else step=backwrdD ;
}
else if (key=='R'){
    rightC++;
    leftC--;
    if(rightC==5){
    step=rightB ;
    leftC=4;
    rightC=0;
    }
    else step=rightD ;
}
else step=0 ;
return step ;
}
class intNode
{
public:
	int info;
	intNode *next, *previous;
	intNode(int el, intNode *n=0, intNode *p=0);
	~intNode(void);
};
intNode::intNode(int el, intNode *n, intNode *p)
{
	info = el;
	next = n;
	previous = p;
}


intNode::~intNode(void)
{
}
class DoublyLinkedList
{
public:
    int G_Fruit(void);
    void SwapNodes(void) ;
    void movetofront(void);
	DoublyLinkedList(void);
	~DoublyLinkedList(void);
	int isEmpty(void);
	void addToHead(int);
	void addToTail(int);
	int deleteFromTail(void);
	int deleteFromHead();
	void deleteNode(int);
	bool isInList(int);
	void printAll();
private:
	intNode *head, *tail;
};
DoublyLinkedList::DoublyLinkedList(void)
{
	head = tail = 0;
}

int DoublyLinkedList::isEmpty(){
	return head == 0;
}

void DoublyLinkedList::addToHead(int el) {
	if (tail != 0){ //if list not empty;
		head -> previous = new intNode(el, head, 0);
		head = head->previous;
		//head -> next -> previous = head;
	}
	else head = tail = new intNode(el);
}

int DoublyLinkedList::deleteFromHead() {
	int el = head->info;
	if (head == tail){
		delete head;
		head = tail = 0;
	}
	else {
		head = head -> next;
		delete head -> previous;
		head -> previous = 0;
	}
	return el;
}

void DoublyLinkedList::addToTail(int el) {
	if (tail != 0) { // if list not empty;
		tail->next = new intNode(el, 0, tail);
		tail = tail -> next;
		//tail -> previous ->next = tail;
	}
	else head = tail = new intNode(el);
}

int DoublyLinkedList::deleteFromTail() {
	int el = tail -> info;
	if (head == tail){
		delete head;
		head = tail = 0;
	}
	else {
		tail = tail -> previous;
		delete tail -> next;
		tail -> next = 0;
	}
	return el;
}

void DoublyLinkedList::deleteNode(int el) {
	if (head != 0) // if non-empty list;
	// if only one node in the list
		if (head == tail && el == head->info) {
		delete head;
		head = tail = 0;
		}
	//if more than one node and el is the 1st on list
		else if (el == head->info) {
			deleteFromHead();
		}
		else if (el == tail-> info) {
			deleteFromTail();
		}
		else {
			intNode *tmp;
			for (tmp = head; tmp != 0 && !(tmp->info == el);tmp = tmp->next);
			if (tmp != 0) {
				tmp -> previous -> next = tmp -> next;
				tmp -> next -> previous = tmp -> previous;
				delete tmp;
			}
		}
}

bool DoublyLinkedList::isInList(int el){
	intNode *tmp;
	for (tmp = head; tmp != 0 && tmp->info != el; tmp = tmp->next);
	return tmp != 0;
}

void DoublyLinkedList::printAll(void){
	intNode *tmp;
	for (tmp = head; tmp != 0; tmp = tmp->next){
		cout << tmp->info;
	}
}
void DoublyLinkedList::movetofront(void){
    int t ;
    t=tail->info;
    deleteFromTail();
    addToHead(t);

}

DoublyLinkedList::~DoublyLinkedList(void)
{
}

int DoublyLinkedList::G_Fruit(){
   //int Fruit=random(126);
   // int Fruit=srand (time(NULL));
    int Fruit=rand()%10 ;
//cout<<Fruit;
while(isInList(Fruit)==true){
   // Fruit=random(126);
   // int Fruit=rsrand (time(NULL));
    Fruit=rand()%10 ;
}
return Fruit ;

}
int main(){
int total=1;
int Fruit=124 ;
while(1){
DoublyLinkedList l1 ;
get_steps snakeA ;
//l1.addToHead(1);
//LDS(1,"O");
//l1.addToHead(2);
//LDS(1,"O");
//l1.addToHead(3);
//LDS(1,"O");
cout<<"            2  "<<endl;
cout<<endl;
cout<<"          4   6"<<endl;
cout<<endl;
cout<<"            8  "<<endl;
cout<<endl;
cout<<"          ^ 1 ^"<<endl;
cout<<endl;
cout<<"          Y 3 Y"<<endl;
cout<<endl<<endl<<endl;
//l1.printAll();
cout<<endl<<endl<<endl;
cout<<"the fruit is " <<Fruit<<endl;
cin>>snakeA.keyI ;
char tmp = snakeA.keypad(snakeA.keyI);
int tmp1= snakeA.get_step(tmp);
total=total+tmp1;
if(l1.isInList(total)==true){

    //LEVELS();
    //LEVELS();
    //LEVELS();
    //LEVELS();
    //LEVELS();
    //LEVELS();
    //LEVELS();
    return  0 ;
}
if(total==Fruit){
    cout<<"FRUIT CAPUTRED"<<endl;
   //LDS(total,"O");
   l1.addToHead(total);
   tmp = snakeA.keypad(snakeA.keyI);
   tmp1= snakeA.get_step(tmp);
   total=total+tmp1;
   Fruit=l1.G_Fruit();
   cout<<endl<<l1.isInList(Fruit)<<endl;
   cout<<"THE STEP IS "<<tmp1<<"  TOTAL STEPS "<<total<<endl ;
//cout<<"THE LOCATION IS NOW "<<LEDS_A[total]<<endl;
cout<<"press enter to add a move "<<endl ;
cout<<"F "<<snakeA.forwrdC<<" B "<<snakeA.backwrdC<<" R "<<snakeA.rightC<<" L "<<snakeA.leftC<<" U "<<snakeA.upC<<" D "<<snakeA.downC<<endl ;
   while(l1.isInList(Fruit)==true){
        cout<<"is in list output  "<<l1.isInList(Fruit)<<endl;
   }
    cout<<Fruit;

}
   //LDS(total,"O");
l1.addToHead(total);
l1.deleteFromTail();

cout<<"THE SNAKE LENGTH "<<endl;
l1.printAll();
cout<<endl;
cout<<"THE STEP IS "<<tmp1<<"  TOTAL STEPS "<<total<<endl ;
//cout<<"THE LOCATION IS NOW "<<LEDS_A[total]<<endl;
cout<<"press enter to add a move "<<endl ;
cout<<"F "<<snakeA.forwrdC<<" B "<<snakeA.backwrdC<<" R "<<snakeA.rightC<<" L "<<snakeA.leftC<<" U "<<snakeA.upC<<" D "<<snakeA.downC<<endl ;
};
return 0 ;
}
