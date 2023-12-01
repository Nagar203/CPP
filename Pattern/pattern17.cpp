#include<iostream>
using namespace std;

int main(){
    // using while loop
    int n = 4;
    int i = 1;
    int k=1;
    while (i<=n)
    {
        int j = 1;
        int space = n - i;
        while (space)
        {
            cout<<" ";
            space--;
        }
        
        while (j<=i)
        {
            cout<<k;
            j++;
            k++;
        }               
        cout<<endl;
        i++;
    }  
    return 0;
}