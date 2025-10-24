#include<iostream>
using namespace std;

int main(){

    // using if else
    // int n = 4;
    // int i = 1;

    // while (i<=n)
    // {
    //     int j = 0;
    //     while (j<n)
    //     { 
    //         if(j > n -i){
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;        
    // }  

    // using while loop
    int n = 4;
    int i = 1;

    while (i<=n)
    {
        
        int j = 1;
        while (j<=(n-i+1))
        {
            cout<<"*";
            j++;
        }

        int space = i - 1 ;
        while (space)
        {
            cout<<" ";
            space--;
        }        
        cout<<endl;
        i++;
    }  




    return 0;
}

