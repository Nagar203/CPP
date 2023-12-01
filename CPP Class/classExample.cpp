#include <iostream>
using namespace std;

class student{
    public:
        string name;
        int rollNo;

        void display(){
            cout<<"Name: "<<this->name<<" RollNo : "<<this->rollNo<<endl;
        }
};


class employee: public student{
    public:

        int salary;

        void display(){
            cout<<"Name: "<<this->name<<" RollNo : "<<this->rollNo<<" Salary: "<<salary<<endl;
        }
    
};


int main(){
    student s1;
    s1.name = "Rakesh";
    s1.rollNo  =  1001;
    s1.display();

    employee e1;
    e1.name = "Bhanwar";
    e1.rollNo  =  1002;
    e1.salary  =  140000;
    e1.display();

    return 0;
}

