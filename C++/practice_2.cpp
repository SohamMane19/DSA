#include<bits/stdc++.h>
using namespace std;
void swap(int &x,int &y)
{
	int z=x;
	x=y;
	y=z;
}
int main()
{
	int a,b;
	a=12,b=13;
	cout<<"before swapping:"<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<"after swapping:"<<a<<" "<<b<<endl;
	return 0;
}