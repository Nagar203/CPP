#include<iostream>
using namespace std;

int main(){

    int n = 4;
    int i = 1;
    

    while (i<=n)
    {
        int j = 0;
        while (j<n)
        {
            char ch='A' + (j+i-1);           
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;        
    }    


    return 0;
}

