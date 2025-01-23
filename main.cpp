    #include<iostream>
    #include "Employee.h"
    #include <fstream>


    using namespace std;

    int main(int argc, char**  argv){
        if (argc<2)
        {
            cout<<"Please include a command line parameter"<<endl;
            exit(1);
        }
        
        ifstream ifs;
        ifs.open(argv[1], ios::in);

        string tmp;
        getline(ifs, tmp);
        int n = stoi(tmp);
        Employee** employees = new Employee*[n];
        
        for(int i =0; i<n;i++){

            string name, job;
            int id, age, year;
            double salary;
            getline(ifs, name, '|');

            getline(ifs, tmp, '|');

            id = stoi(tmp);
            getline(ifs, tmp, '|'); 

            age = stoi(tmp);
            getline(ifs, job, '|');

            getline(ifs, tmp); 

            year = stoi(tmp);

            employees[i] = new Employee(name, id, age, job, year);
            employees[i]->printInfo();
        }
        return 0;
    }