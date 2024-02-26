#include<bits/stdc++.h>
using namespace std;
class myclass
{
	public:
		myclass();
		void display();
		int mynum;
		string mystring;
		void greet(string name)
		{
			cout<<"Hello "<<name<<endl;
		}	
};
myclass::myclass()
{
	cout<<"Constructor called"<<endl;
}
void myclass::display()
{
	cout<<"Function defined outside class."<<endl;
}
class Car
{
	public:
		string brand;
		Car(string B)
		{
			brand=B;
			cout<<"Constructor called"<<endl;
		}
};
int main()
{	
	myclass myobj1;
	myclass myobj2;
	myobj1.mynum=19;
	myobj1.mystring="hello";

	myobj2.mynum=20;
	myobj2.mystring="welcome";
	
	cout<<myobj1.mynum<<endl;
	cout<<myobj1.mystring<<endl;
	
	cout<<myobj2.mynum<<endl;
	cout<<myobj2.mystring<<endl;

	myobj1.greet("soham");
	myobj1.display();

	Car c1("bmw");
	cout<<"Car brand:"<<c1.brand<<endl;
	return 0;
}
