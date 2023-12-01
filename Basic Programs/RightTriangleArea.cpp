#include<iostream>
using namespace std;
class Triangle{
	private:
		float hypotenuse,base,height;
	public:
		void getValue(){
			cout<<"Enter Hypotenuse : ";
			cin>>hypotenuse;
			cout<<"Enter Base : ";
			cin>>base;
			cout<<"Enter Height :";
			cin>>height;
		}
		void showArea(){
			if(hypotenuse>base && hypotenuse>height ){
				cout<<"Area Of Right Triangle : "<<(base*height)*1/2;
			}
			else{
				cout<<"Enter Valid Dimention!";
			}
	}
};
int main(){
	Triangle Area;
	Area.getValue();
	Area.showArea();
	return 0;
}
