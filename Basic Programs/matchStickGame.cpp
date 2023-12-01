#include <iostream>

using namespace std;
int main(){

    int stick = 21;
    int removeStick;
    int player=1;
    while(stick>0){
        cout<<"\nTurn Player "<<player<<endl;
        cout<<"Enter Number Of Stick you want to remove: ";
        cin>>removeStick;

        if(removeStick >=1 && removeStick <=4){
            stick -= removeStick;
        }
        else{
            cout<<"Enter number of sticks between 1 to 4.";
        }
        player = player==1 ? 2:1;

    }

    cout<<"\nWinner is Player "<<player<<endl;
    return 0;
}