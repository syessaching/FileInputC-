#include<iostream>

#include "Employee.h"

//constructor to initialize the employee fields
Employee::Employee(string n, int i, int a,string j, int y){
    name=n;
    id=i;
    age=a;
    job=j;
    year=y;
}

//function to print the details of the employee
void Employee::printInfo(){
    cout << "Name:          "<< name << endl;
    cout << "ID:            "<< id   << endl;
    cout << "Age:           "<< age  << endl;
    cout << "Job:           "<< job  << endl;
    cout << "Hire year:     "<< year << endl;
    cout << "****************************" << endl;
    
}