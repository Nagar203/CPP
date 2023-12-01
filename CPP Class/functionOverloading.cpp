#include <iostream>
using namespace std;

int area(int x){
    return x*x;
}

int area(int x, int y){
    return x*y;
}

int main(){
    int r1 = 10;
    int r2 = 20;
    
    int result = area(r1,r2);
    cout<<result<<endl;

    return 0;
}