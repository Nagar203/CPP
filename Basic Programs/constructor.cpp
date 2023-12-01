#include<iostream>
using namespace std;
class A{
	private:
	int a,b;
		
	public:
	void showValue(int x,int y){
		a=x;
		b=y;
		cout<<a+b;
	}
	
	A(int c,int d){
		a=c; b=d;
		cout<<a+b;
	}	
	
};
using namespace std;
int main(){
	A a1(3,4);
	a1.showValue(1,2);
	
return 0;
}
