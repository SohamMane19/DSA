#include<stdio.h>
int main()
{
	int arr[]={31,41,59,26,41,58};
	int j;
	int temp;
	int length=sizeof(arr)/sizeof(arr[0]);
	for(int i=1;i<length;i++)
	{	
		j=i-1;//last element of unsorted array
		temp=arr[i];
		while(arr[j]>arr[i] && j>=0)
		{
			arr[j+1]=
			j--;
		}
		
	}
}
