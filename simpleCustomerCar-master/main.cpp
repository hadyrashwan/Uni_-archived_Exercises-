#include <iostream>
#include <cppconn/driver.h>
#include "LoginControl.h"
#include "optionChooser.h"
using namespace std;

int main() {
    string u;
    string p ;
    cin>>u;
    cin>>p;
    bool exiter;
    LoginControl fahmy = LoginControl(u,p);
    cout<<endl;
    if(fahmy.Validate()==1){
        while(1<2){
    optionChooser wardy  = optionChooser(u);
            cout<<"exit";
            cin>>exiter;
            if(exiter) exit(exiter);
    wardy.startSystem();}}
    return 0;
}