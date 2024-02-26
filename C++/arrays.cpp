#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
		cin>>arr[i];
	for(int i=0;i<size;i++)
		cout<<arr[i]<<endl;
	int max=arr[0];
	for(int i=0;i<size;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	cout<<"largest:"<<max<<endl;
	return 0;
}