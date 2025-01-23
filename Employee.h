#pragma once
#include <string>

using namespace std;

class Employee
{
private:
    string name;
    int id;
    double salary;  
    string job;
    int year;
    int age;

public:
    Employee(string, int, int, string, int);
    void printInfo();
};