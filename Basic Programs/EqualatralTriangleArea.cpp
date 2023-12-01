#include<iostream>
#include<conio.h>
using namespace std;
class Triangle{
	private:
		float length;
	public:
		void setValue(){
			cout<<"Enter length of Equalatral Triangle : ";
			cin>>length;
		}
		void showArea(){
			cout<<"Area Of Equalatarl Triangle : "<<(1.732*length*length)/4;
		}
};

int main(){
	Triangle Area;
	Area.setValue();
	Area.showArea();
	return 0;
}
