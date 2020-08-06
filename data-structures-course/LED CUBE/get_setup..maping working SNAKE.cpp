#include<string>
#include<stdio.h>
#include <iostream>

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
int main(void){
get_steps snakeA ;
int zxz ;
int total=1 ;
while(1){
cout<<"            2  "<<endl;
cout<<"          4   6"<<endl;
cout<<"            8  "<<endl;
cout<<"          ^ 1 ^"<<endl;
cout<<"          Y  3 Y"<<endl;
cin>>snakeA.keyI ;
char tmp = snakeA.keypad(snakeA.keyI);
int tmp1= snakeA.get_step(tmp);
total=total+tmp1;
cout<<"THE STEP IS "<<tmp1<<"  TOTAL STEPS "<<total<<endl ;
//cout<<"THE LOCATION IS NOW "<<LEDS_A[total]<<endl;
cout<<"press enter to add a move "<<endl ;
cout<<"F "<<snakeA.forwrdC<<" B "<<snakeA.backwrdC<<" R "<<snakeA.rightC<<" L "<<snakeA.leftC<<" U "<<snakeA.upC<<" D "<<snakeA.downC<<endl ;
cin>>zxz;

}
}
