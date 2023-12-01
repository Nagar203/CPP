#include<iostream>
using namespace std;

int main(){
    // using while loop
    int n = 5;
    int i = 1;
    
    while (i<=n)
    {
        int j = 1;
        
        while (j<=(n-i+1)){
            cout<<j;
            j++;
        }

        int p1 = i - 1;
        while (p1){
            cout<<"*";
            p1--;
        }

        int p2 = i - 1;
        while (p2){
            cout<<"*";
            p2--;
        }

        int k = n - i +1;
        while (k){
            cout<<k;
            k--;
        }

        cout<<endl;
        i++;
    }  
    return 0;
}