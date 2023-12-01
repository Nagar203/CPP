#include <iostream>
using namespace std;

int main(){

    int x=1383;

    switch(100){
        case 100:{
            cout<<"100/- : "<<x/100<<endl;
            x%=100; 
        }
        case 50:{
            cout<<"50/- : "<<x/50<<endl;
            x%=50; 
        }
        case 20:{
            cout<<"20/- : "<<x/20<<endl;
            x%=20; 
        }
        case 10:{
            cout<<"10/- : "<<x/10<<endl;
            x%=10; 
        }
        case 1:{
            cout<<"1/- : "<<x<<endl;
        }
    }

    return 0;
}