//
// Created by hady on 24/05/15.
//

#include <cppconn/driver.h>
#include <stdlib.h>
#include <iostream>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <mysql_connection.h>
#include <string>

using namespace std;


class LoginControl {
    sql::Driver *driver;
    sql::Connection *con;
    sql::Statement *stmt;
    sql::ResultSet *res;
    string Username ;
    string Password ;
    void getLoignInfo(){
        //Something Not used at the moment

    }

public:
    LoginControl(string Username, string Password) {

        this->Username=Username;
        this->Password=Password ;

    }

public:
    bool Validate(){
        /* Create a connection */
        driver = get_driver_instance();
        con = driver->connect("tcp://127.0.0.1:3306", "root", "b0l");
        /* Connect to the MySQL test database */
        con->setSchema("ValidationSystem");

        stmt = con->createStatement();
        cout<<Username;
        //
        res = stmt->executeQuery("select * from ValidationSystem.UserPassword where Username = '"+Username+"' ;");
        while (res->next()) {
            cout << "MySQL replies: " << endl;
            /* Access column data by alias or column name */

            if (Password == res->getString("Password")) {
                cout << "TRUE";
                cout << endl;

                return true;
            }
            else{
                cout << "WRONG PASSWORD " << endl;
                return false ;
            }
        }
            /* Access column fata by numeric offset, 1 is the first column */
        cout << "WRONG Username "<<endl;
        return false ;

        //no match for user name
}};