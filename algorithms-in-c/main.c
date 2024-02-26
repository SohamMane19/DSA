#include<stdio.h>
int main(int argc,char** argv)
{
	void add(int a,int b)
	{
		int c=a+b;
		printf("Sum:%d",c);
	}
	add(2,3);
	return 0;
}