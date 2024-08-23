#include <mysql.h>
#include <mysqld_error.h>
#include <iostream>
#include <windows.h>
#include <limits>

const char* HOST = "localhost";
const char* USER = "root";
const char* PASSWORD = "1234";
const char* DB = "test_db";

void clearInputBuffer() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    std::cout  << "Program Started" <<std::endl;
    MYSQL* conn;
    conn = mysql_init(NULL);

    if(!mysql_real_connect(conn,HOST,USER,PASSWORD,DB,3306,NULL,0)) {
        std::cout << mysql_error(conn);
    }
    else {
        std::cout << "Logged in..." <<std::endl;
    }
    bool exit = false;
    while(!exit) {
        system("cls");
        int option;
        std::cout << "1. Insert Data: " <<std::endl;
        std::cout << "2. Delete Data: " <<std::endl;
        std::cout << "3. Update Data: " <<std::endl;
        std::cout << "4. Exit: " <<std::endl;
        std::cin >> option;

        clearInputBuffer();

        if(option == 1) {
            std::string name;
            std::string age;
            std::cout << "Enter the name of the person: ";
            std::getline(std::cin, name);
            std::cout << "Enter the age of the person: ";
            std::cin >> age;

            std::string query ="INSERT INTO test_table (name,age) VALUES('"+name+"','"+age+"')";
            if(mysql_query(conn,query.c_str())) {
                std::cout<<mysql_error(conn) <<std::endl;
            }else {
                std::cout << "Data Inserted" <<std::endl;
                Sleep(2000);
            }
        }
        else if (option == 2) {
            std::string id;
            std::cout  << "Enter the id: " <<std::endl;
            std::cin>>id;
            clearInputBuffer();

            std::string query =  "DELETE FROM test_table WHERE id = '"+id+"'";
            if(mysql_query(conn,query.c_str())) {
                std::cout<<mysql_error(conn) <<std::endl;
            }else {
                std::cout<< "Data Deleted" <<std::endl;
                Sleep(2000);
            }
        }
        else if(option ==3) {
            std::string id;
            std::cout  << "Enter the id: " <<std::endl;
            std::cin>>id;
            clearInputBuffer();

            std::string name,age;
            std::cout << "Enter the new name: ";
            std::getline(std::cin,name);
            std::cout << "Enter the age: ";
            std::cin>>age;

            std::string query =  "UPDATE test_table SET name = '"+name+"', age = '"+age+"' WHERE id = '"+id+"'";
            if(mysql_query(conn,query.c_str())) {
                std::cout<<mysql_error(conn) <<std::endl;
            }else {
                std::cout<< "Data Updated" <<std::endl;
                Sleep(2000);
            }
        }
        else if (option ==4) {
            exit = true;
        }

    }

    mysql_close(conn);
    std::cout << "Program Ended" <<std::endl;
    return 0;
}
