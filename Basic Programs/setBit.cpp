#include <iostream>

using namespace std;

int bitCount(int n){
    int cnt=0;
    while (n) {
        if(n&1)
            cnt++;
        n>>=1;
    }    
    return cnt;
}

int main(){

    int a=15,b=7,num=0;
    num = bitCount(a);
    num = num + bitCount(b);
    cout<<num;

    return 0;
}