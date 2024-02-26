#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size=5;
	int arr[size]={1,34,3,2,76};
	bool flag=true;
	
	for(int i=0;i<size-1;i++)
		if(arr[i]>arr[i+1])
		{
			flag=false;
			break;
		}


	if(flag)
		cout<<"Sorted"<<endl;

	return 0;
}