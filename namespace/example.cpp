#include <iostream>
using namespace std;

namespace newSpace{
    int a;
    int b;
    int foo();
    class student{
        public:
            int x;
            int y;
            void fun();
    };
}



int newSpace::foo(){
    cout<<"\nThis is foo funciton";
    return 0;
}

void newSpace::student::fun(){
    cout<<"\nThis is the fun function.";
}

// using namespace newSpace;

int main(){
    newSpace::a=5;
    cout<<newSpace::a<<endl;
    newSpace::student s;
    s.fun();
    newSpace::foo();

    return 0;
}