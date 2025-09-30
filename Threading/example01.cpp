#include <iostream>
#include <thread>
#include <unistd.h>

using namespace std;

void threadA(){
    for (int i = 0; i < 5; i++)
    {
        sleep(1);
        cout<<"Thread A: "<<i<<endl;
        fflush(stdout);
    }
    return ;
    
}

void threadB(){
    for (int i = 0; i < 5; i++)
    {
        sleep(1);
        cout<<"Thread B: " << i<<endl;
        fflush(stdout);
    }
    return;
    
}

int main(){
    thread t1(threadA);
    thread t2(threadB);

    return 0;
}