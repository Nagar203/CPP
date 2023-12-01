#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n=26;
    vector<int> v;
    while(n){
        int r = n%16;
        v.push_back(r);
        n/=16;
    }

    for (int i = v.size()-1; i >=0; i--)
    {
        if(v[i]>=10){
            char ch = v[i]-10 + 'A';
            cout<<ch;
        }
        else{
            cout<<v[i];
        }
    }
    

    return 0;
}