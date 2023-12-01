#include <iostream>
using namespace std;

class functionOverrinding{
    public:
        void display(){
            cout<<"Parent Function.";
        }
};

class functionOverrinding2: public functionOverrinding{
    public:
        int x=5;
        void display(){
            cout<<"Child Function";
        }
};

int main(){
    functionOverrinding2 s1;
    s1.functionOverrinding::display();

    return 0;
}