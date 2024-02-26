#include<stdio.h>
int main()
{
    int a[5]={1,9,2,4,3};
    int min;
    min=a[0];
    for(int i=1;i<sizeof(a)/sizeof(a[0]);i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        } 
    }
    printf("%d\n",min);
}