#include<stdio.h>
int main()
{
    int a[8]={6,5,3,1,8,7,2,4};
    int length=sizeof(a)/sizeof(a[0]);
    int n1=length/2;
    int n2=length-n1;
    int L[n1];
    int R[n2];
    for(int i=0;i<n1;i++)
    {
        L[i]=a[i];
    }
    for(int j=0;j<n2;j++)
    {
        R[j]=a[n2+j];
    }
    for(int i=0;i<n1;i++)
        printf("L[%d]:%d\tR[%d]:%d\n",i,L[i],i,R[i]);
}