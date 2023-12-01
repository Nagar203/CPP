#include<iostream>
using namespace std;

int main(){

    int n = 4;
    int i = 1;
    int k=0;

    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        { 
            char ch='A'+ k;           
            cout<<ch<<" ";
            j++;
            k++;
        }
        cout<<endl;
        i++;        
    }    


    return 0;
}

