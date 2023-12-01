#include <iostream>
using namespace std;

class org{
    public:
        string name;
        virtual void display(){
            cout<<"My name is "<<name<<endl;
        }
};


class student: public org{
    public:
        int roll;
        void display() override{
            cout<<"My name is "<<name<<" and my roll no is "<<roll<<endl;
        }
};

class employee: public student{
    public:
        int salary;
        void display() override{
            cout<<"My name is "<<name<<" and my roll no is "<<roll<<" my salay is "<<salary<<endl;
        }  
};

void callFunction(org* emp){
    emp->display();
}

int main(){
    org obj;
    obj.name = "Kalu lal";
    callFunction(&obj);


    student s1;
    s1.name = "Rakesh Lal";
    s1.roll = 1001;
    // s1.display();
    callFunction(&s1);

    employee e1;
    e1.name = "Shyam Lal";
    e1.roll = 1002;
    e1.salary = 400000;
    // e1.display();
    callFunction(&e1);
    return 0;
}