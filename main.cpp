    #include<iostream>
    #include "Employee.h"
    #include <fstream>


    using namespace std;

    int main(int argc, char**  argv){

        // checks if a command line is provided
        if (argc<2)
        {
            cout<<"Please include a command line parameter"<<endl;
            exit(1); //exit the program if no parameter
        }
        
        ifstream ifs;
        //Open the file specified in the command line
        ifs.open(argv[1], ios::in);

        // error if file is not found
        if(!ifs){
            cout<<"File not found"<<endl;
            exit(1);
        }

        string tmp;

        //read the first line to determine the number of records
        getline(ifs, tmp);
        int n = stoi(tmp);//convert string to integer
        Employee** employees = new Employee*[n];//create an array of pointers to Employee objects
        
        //loop through the file and read the records
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