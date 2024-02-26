#include<bits/stdc++.h>
using namespace std;
int main()
{
	try
	{
		int age;
		cin>>age;
		if(age>=18)
			cout<<"eligible"<<endl;
		else
			throw (age);
	}

	catch (int num)
	{
		cout<<"not eligible"<<endl<<"age is:"<<num<<endl;
	}
	/*
	catch(...)
	{
		catches any exception
	}
	*/
	return 0;
}