#include<iostream>
using namespace std;
class TriangleArea{
	private:
		float a,b,c;
		float pi=3.14;
	public:
		void setvalue(){
			cout<<"1st length value : ";
			cin>>a;
			cout<<"2nd length value : ";
			cin>>b;
			cout<<"Angal value : ";
			cin>>c;
		}
		void Area(){
			cout<<"Triangel Area : "<<(a*b*(pi*c)/180);
		}
};

int main(){
	TriangleArea Area1;
	Area1.setvalue();
	Area1.Area();
	return 0;
}
