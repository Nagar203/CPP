#include<stdio.h>
#include<iostream>
using namespace std;
class Circle{
	private:
	float radius;
	public :
		void setRadius(){
		cout<<"Enter Radius : ";
		cin>>radius;
		}
		void showArea(){
		cout<<"Area Of Circle : "<<3.24*radius*radius<<endl;
		}
		void showCircumfrance(){
			cout<<"Circle Circumfrance : "<<2*3.14*radius;
		}
};
int main(){
	Circle Circle1;
	Circle1.setRadius();
	Circle1.showArea();
	Circle1.showCircumfrance();
	return(0);
}
