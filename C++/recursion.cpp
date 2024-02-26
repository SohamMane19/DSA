#include<bits/stdc++.h>
using namespace std;

int sum(int val)
{
		if(val>0)
		{
			return val+sum(val-1);
		}
		else
		{
			return 0;
		}
}
int main()
{
	int res=sum(5);
	cout<<res<<endl;
	return 0;
}