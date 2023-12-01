#include <iostream>
using namespace std;

void fibo(int n){
    int a1=0;
    int a2=1;
    int sum=0;
    if(n==1)
        cout<<a1<<endl;
    else if(n==2)
        cout<<a2<<endl;
    else{
        cout<< a1<< " "<<a2 <<" ";
        for (int i = 3; i <=n; i++)
        {
            sum = a1 + a2;
            cout<<sum<<" ";
            a1= a2;
            a2 = sum;
        }   
    }
}

int main(){

    fibo(20);
    return 0;
}
