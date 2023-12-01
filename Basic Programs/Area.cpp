#include<iostream>
using namespace std;
class Area{
	private:
		float Length,Width,Radius,SLength;
	public:
		void setValue(){
			cout<<"Enter the Circle Radius : ";
			cin>>Radius;
			cout<<"Enter Width Of Ractangle :";
			cin>>Width;
			cout<<"Enter Length Of Ractangle :";
			cin>>Length;
			cout<<"Enter Length Of Square :";
			cin>>SLength;
		}
		void showArea(){
			cout<<"Circle Area : "<<(3.14*Radius*Radius)<<endl;
			cout<<"Ractangle Area : "<<(Width*Length)<<endl;
			cout<<"Squre Area : "<<(SLength*SLength);
		}
};
int main(){
	Area A;
	A.setValue();
	A.showArea();
	return 0;
}
