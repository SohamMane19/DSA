#include<stdio.h>
int main()
{	
	int a[6]={1,5,3,2,9,6};
	int j;
	int length=sizeof(a)/sizeof(a[0]);
	for(int i=1;i<length;i++)
	{
		j=i-1;
		int temp=a[i];

		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]
	}
	for(int x=0;x<length;x++)
	{
		printf("%d\n",a[x]);
	}
	return 0;
}
