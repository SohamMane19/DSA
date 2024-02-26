#include<iostream>
// #include<typeinfo>
#include<bits/stdc++.h>
using namespace std;
void display(string name="mate"){ cout<<"Hello "+name<<endl; }
int sum_integer(int a,int b)
{
	return a+b;		
}
double sum_double(double a,double b)
{
	return a+b;		
}
int main()
{
	// int arr[3];
	// for(int i=0;i<3;i++)
	// 	cin>>arr[i];
	// for(int i=0;i<3;i++)
	// 	cout<<arr[i]<<endl;
	// int age;
	// string name;
	// cin>>age>>name;
	// cout<<age<<endl<<name<<endl;
	// cout<<type_name<decltype(age)>()<<endl;
	// int choice=9;
	// switch(choice)
	// {	
	// 	case 1:
	// 		cout<<"One";
	// 		break;
	// 	case 2:
	// 		cout<<"Two";
	// 	default:
	// 		cout<<"out";
	// }
	// int fact;
	// cout<<"enter factorial:";
	// cin>>fact;
	// int i=1;
	// int res=1;
	// while(i<=fact)
	// {
	// 	res*=i;
	// 	i+=1;
	// }
	// cout<<"factorial of "<<fact<<endl<<"is:"<<res;
	// int i=0;
	// do
	// {
	// 	cout<<i<<endl;
	// 	i+=1;	
	// }while(i<5);
	// for(int i=0;i<10;i++)
	// 	cout<<i<<endl;
	// int arr[5]={12,2,3,45,98};
	// for(int item:xarr)
	// 	cout<<item<<endl;
	//arrays
	// string cars[]={"bmw","merc","lambo"};
	// for(string car:cars)
	// 	cout<<car<<endl;
	// cout<<sizeof(cars)/sizeof(cars[0])<<endl;
	// string letters[2][4] ={
	//   { "A", "B", "C", "D" },
	//   { "E", "F", "G", "H" }
	// };
	// cout<<letters[1][1]<<endl;//F
	// for(int i=0;i<2;i++)
	// 	for(int j=0;j<4;j++)
	// 		cout<<letters[i][j]<<endl;
	// struct 
	// {
	// 	int mynum;
	// 	string myString;
	// }mystruct;

	// mystruct.mynum=1;
	// mystruct.myString="Hello";
	// cout<<mystruct.mynum<<endl;
	// cout<<mystruct.myString<<endl;	

	// struct 
	// {
	// 	string brand;
	// 	string model;
	// }car1,car2;	

	// car1.model="A1";
	// car1.brand="bmw";
	// car2.model="A2";
	// car2.brand="merc";

	// cout<<car1.model<<endl;
	// cout<<car1.brand<<endl;
	// cout<<car2.model<<endl;
	// cout<<car2.brand<<endl;

	string food = "Pizza";  // food variable
	// string &meal = food;    // reference to food
	// cout<<food<<endl;
	// cout<<meal<<endl;
	// meal="burger";
	// cout<<food<<endl;
	// cout<<meal<<endl;
	
	string* ptr=&food;
	cout<<food<<endl;
	cout<<*(ptr)<<endl;

	*ptr="fries";
	cout<<food<<endl;
	cout<<*ptr<<endl;
	display();
	//With function overloading, multiple functions can have the same name with different parameters:
	cout<<sum_double(3.2,2.3)<<endl;
	cout<<sum_integer(2,4)<<endl;
	
	return 0;
}