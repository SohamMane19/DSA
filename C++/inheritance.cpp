#include<bits/stdc++.h>
using namespace std;
class Vehicle
{
	public:
		string brand="ford";
		void honk()
		{
			cout<<"Peep!!!"<<endl;
		}
};
class Car:public Vehicle
{
	public:
		string model="mustang";
};
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Derived class (child)
class MyChild: public MyClass {
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
};
int main()
{
	Car obj;
	obj.honk();
	MyGrandChild obj2;
	obj2.myFunction();
	return 0;
}
