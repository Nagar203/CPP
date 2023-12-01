#include<iostream>
using namespace std;

int main(){

    char ch;
    cout<<"Enter character: "<<endl;
    cin>>ch;

    if(ch >= 'a' && ch<'z'){
        cout<<"It is smallcase"<<endl;
    }
    else if(ch >='A' && ch <='Z'){
        cout<<"It is capital case"<<endl;
    }
    else if(ch >='0' && ch <='9'){
        cout<<"It is a number"<<endl;
    }

    return 0;

}
