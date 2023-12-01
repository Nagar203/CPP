#include<iostream>
using namespace std;

int main(){
    // using while loop
    int n = 4;
    int i = 1;

    while (i<=n)
    {
        int j = 1;
        int space = i - 1;
        while (space)
        {
            cout<<" ";
            space--;
            j++;
        }
        
        while (j<=n)
        {
            cout<<j;
            j++;
        }               
        cout<<endl;
        i++;
    }  
    return 0;
}

