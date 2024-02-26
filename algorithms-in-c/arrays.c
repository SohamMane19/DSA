#include<stdio.h>
int main()
{
	int a[]={1,2,3,4};
	a[1]=a[0];
	for(int i=0;i<4;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
