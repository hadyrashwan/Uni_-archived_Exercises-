//
// Created by hady on 24/05/15.
//


#include <stdlib.h>
#include <iostream>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <mysql_connection.h>
#include <cppconn/driver.h>
#include <string>
#include <mysql_error.h>
#include <caca_conio.h>

using namespace std;

class optionChooser{


public:
     optionChooser(string Username){
        this->Username=Username;
       // welcomeMessage();
    }

 void startSystem(){
    welcomeMessage();
}
private:
    string Username; // user number
    void welcomeMessage(){ //display  genral Options and take user choice

        int welcomeOption ; // welcome mesg option
        cout<<"-----Please choose an option-----"<<endl;
        cout<<"1- Edit Info"<<endl;
        cout<<"2- Get Credit/Bill"<<endl;
        cout<<"3- Customer Care services"<<endl;
        cin>>welcomeOption;
        switch(welcomeOption){
            case 1:
                infoChoose();
                break ;
            case 2:
                getCB();
                break ;
            case 3:
                careOptionsMessage();
                break ;
            default:
                cout<<"WRONG";
                welcomeMessage();


        }
    }
    void getCB(){ // get user credit/bill

        //make connection part
        sql::Driver *driver;
        sql::Connection *con;
        sql::Statement *stmt;
        sql::ResultSet *res;
        string Credit;//Not used
        driver = get_driver_instance();
        con = driver->connect("tcp://127.0.0.1:3306", "root", "b0l");
        /* Connect to the MySQL test database */
        con->setSchema("InfoSystem");

        stmt = con->createStatement();

        res = stmt->executeQuery("select * from customerData where Username = "+Username+" ;");

        while (res->next()) {
            Credit=res->getString("Value");
            if(res->getString("Plan")=="PrePaid")
            cout<<"Your number is "<<Username<<"  And your Credit is "<<Credit<<" L.E"<<endl;
            else cout<<"Your number is "<<Username<<"  And your Bill is "<<Credit<<" L.E"<<endl;}

            }
    void careOptionsMessage(){ //customer care options display and get user choice
        int careOption; // option choosed in customer care services
        string careData;
        cout<<"-----Please choose an option-----"<<endl;
        cout<<"0- View Block list"<<endl;
        cout<<"1- Block"<<endl;
        cout<<"2- Ublock"<<endl;
        cout<<"3- Complain"<<endl;
        cout<<"4- Feedback"<<endl;
        cin>>careOption;
        if(careOption!=0){
        cout<<"start writting"<<endl;
        cin>>careData;}
        customerCareActions(careData,careOption);
    }
    void infoChoose(){ // user information and get the choice of the option to be edited
        string  customerData[7];      // 1st item is zero
        int editOption; // option choosen in info system
        //make connection part

        sql::Driver *driver;
        sql::Connection *con;
        sql::Statement *stmt;
        sql::ResultSet *res;

        driver = get_driver_instance();
        con = driver->connect("tcp://127.0.0.1:3306", "root", "b0l");
        con->setSchema("InfoSystem");

        stmt = con->createStatement();


        res = stmt->executeQuery("select * from customerData where Username = "+Username+" ;");
        while (res->next()) {
            cout  <<"MySQL replies: "<<endl;
            customerData[1]=res->getString("Firstname");
            customerData[2]=res->getString("Lastname");
            customerData[3]=res->getString("Address");
            customerData[4]=res->getString("Plan");
            customerData[5]=res->getString("Bundle");
            customerData[6]=res->getString("Tel");
            cout<<"-----Please choose an option to edit -----"<<endl;
            cout<<"1-Firstname    "<<customerData[1]<<endl;
            cout<<"2-Lastname     "<<customerData[2]<<endl;
            cout<<"3-Address      "<<customerData[3]<<endl;
            cout<<"4-Plan         "<<customerData[4]<<"(Can not be edited)"<<endl;
            cout<<"5-Bundle       "<<customerData[5]<<endl;
            cout<<"6-Tel          "<<customerData[6]<<endl;
        }
            cout<<"7-Go Back"<<endl;
            cin>>editOption;
            if(editOption!=7 && editOption!=5 && editOption!=4 ){
            cout<<"Write your data"<<endl;
            cin>>customerData[editOption];
            }

        editInfo(customerData,editOption);



    }

    void editInfo(string customerData[] ,int editOption ){ //Queries to be send based on user options in information scope

        //make connection part

        sql::Driver *driver;
        sql::Connection *con;
        //sql::Statement *stmt;
        //sql::ResultSet *res;
        sql::PreparedStatement *pstmt;

        driver = get_driver_instance();
        con = driver->connect("tcp://127.0.0.1:3306", "root", "b0l");
        con->setSchema("InfoSystem");

        //stmt = con->createStatement();

        switch(editOption){
            case 1:
                try {

                    pstmt = con->prepareStatement("UPDATE customerData SET  Firstname =  '" + customerData[editOption] + "' WHERE Username = '" + Username + "' ; ");
                    pstmt->executeUpdate();

                } catch(sql::SQLException &e)
                {
                    cout<<"Update is not made please contact the customercare on 808";
                }

                    break ;

            case 2:
                try {
                    pstmt = con->prepareStatement("UPDATE customerData SET  Lastname =  '" +customerData[editOption]+"' WHERE Username = '"+Username+"' ; ");
                    pstmt->executeUpdate();

                } catch(sql::SQLException &e)
                {
                    cout<<"Update is not made please contact the customercare on 808";
                }
                    break ;

            case 3:
                try {
                    pstmt = con->prepareStatement("UPDATE customerData SET  Address =  '" +customerData[editOption]+"' WHERE Username = '"+Username+"' ; ");
                    pstmt->executeUpdate();

                } catch(sql::SQLException &e)

                 {
            cout<<"Update is not made please contact the customercare on 808";
                  }

                break ;

            case 5:
                try{
                    if(customerData[4]=="PrePaid"){
                        cout<<"Plan 1"<<endl;
                        cout<<"Plan 2"<<endl;
                        cout<<"Plan 3"<<endl;
                        int planM=0;
                        cin>>planM;
                        switch(planM){
                            case 1:
                                customerData[4]="Plan1";
                                break;
                            case 2:
                                customerData[4]="Plan2";
                                break;
                            case 3:
                                customerData[4]="Plan3";
                                break;
                            default:
                                cout<<"WRONG INPUT";
                        }
                    }
                    if(customerData[4]=="PostPaid"){
                        cout<<"Plan 4"<<endl;
                        cout<<"Plan 5"<<endl;
                        cout<<"Plan 6"<<endl;
                        int planM=0;
                        cin>>planM;
                        switch(planM){
                            case 1:
                                customerData[4]="Plan4";
                                break;
                            case 2:
                                customerData[4]="Plan5";
                                break;
                            case 3:
                                customerData[4]="Plan6";
                                break;
                            default:
                                cout<<"WRONG INPUT";
                        }
                    }
                    pstmt = con->prepareStatement("UPDATE customerData SET  Bundle =  '" +customerData[4]+"' WHERE Username = '"+Username+"' ; ");
                    pstmt->executeUpdate();

                } catch(sql::SQLException &e)
                {
                    cout<<"Update is not made please contact the customercare on 808";
                }
                break ;

            case 6:
                try{
                    pstmt = con->prepareStatement("UPDATE customerData SET  Tel =  '" +customerData[editOption]+"' WHERE Username = '"+Username+"' ; ");
                    pstmt->executeUpdate();

                } catch(sql::SQLException &e)
                {
                    cout<<"Update is not made please contact the customercare on 808";
                }break ;
            case 7:
                welcomeMessage();
                break;
            default:
                cout<<"WRONG"<<endl;
                welcomeMessage();
        }
        cout<<endl<<"DONE"<<endl;

    }
    void customerCareActions(string careData, int careOption){ ////Queries to be send based on user options in customercare scope

        //make connection part
        sql::Driver *driver;
        sql::Connection *con;
        sql::Statement *stmt;
        sql::PreparedStatement *pstmt;

        driver = get_driver_instance();
        con = driver->connect("tcp://127.0.0.1:3306", "root", "b0l");
        con->setSchema("CareData");

        stmt = con->createStatement();


        switch(careOption){
            case 0:
                try {
                    sql::ResultSet *res;
                    res=stmt->executeQuery("select * from  BlockList WHERE Username = '"+Username+"' ;");
                    while (res->next()) {
                        cout<<res->getString("Blockednumber")<<endl;
                    }
                }
                catch(sql::SQLException &e)
                {

                    cout<<"No blocked numbers"<<endl;
                }
                break;
            case 1:
                try {
                    sql::ResultSet *res;
                    int flagString=0;
                    res=stmt->executeQuery("select * from  BlockList WHERE Username = '"+Username+"' ;");
                    while (res->next()) {

                        if(res->getString("Blockednumber")==careData){
                            cout<<"This number arleady blocked"<<endl;}}
                    for (int i = 0; i <careData.length() ; ++i) {
                        if(careData[i]<'9'){ break;
                        flagString=1;}

                    }
                    if(flagString==0){
                pstmt = con->prepareStatement("insert into BlockList (Username,Blockednumber)values ( '"+Username+"', '"+careData+"');");
                    pstmt->executeUpdate();}}

                catch(sql::SQLException &e)
                {

                    cout<<"WRONG INPUT"<<endl;
                }
                break ;

            case 2:
                try {
                    string blockedNumbers;
                    int flagBlock=0;
                    sql::ResultSet *res;
                    res=stmt->executeQuery("select * from  BlockList WHERE Username = '"+Username+"' ;");
                    while (res->next()) {
                        blockedNumbers=res->getString("blockednumber");
                        if(blockedNumbers==careData)flagBlock=1;}
                    if(flagBlock==1){
                    pstmt = con->prepareStatement("delete  from CareData.BlockList where Username = '" + Username + "' and Blockednumber = '" + careData + "' ;");
                    pstmt->executeUpdate();}
                        else cout<<"Number not blocked"<<endl;

                }
                catch(sql::SQLException &e)
                {
                    cout<<"WRONG INPUT"<<endl;
                }
                break ;

            case 3:
                for (int j = 0; j <careData.length() ; ++j) {
                    if(careData[j]==' ')careData[j]='.';
                }

                pstmt = con->prepareStatement( "insert into Complain (Complain,Number)values ('"+careData+"','"+Username+"');");
                pstmt->executeUpdate();
                break ;

            case 4:
                for (int j = 0; j <careData.length() ; ++j) {
                    if(careData[j]==' ')careData[j]='.';
                }
                pstmt = con->prepareStatement( "insert into Feedback (Feedback,Number)values ('"+careData+"','"+Username+"');");
                pstmt->executeUpdate();
                break ;
            default:
                cout<<"WRONG "<<endl;
                welcomeMessage();


    }
}};
