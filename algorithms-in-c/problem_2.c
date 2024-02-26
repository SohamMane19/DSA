#include<stdio.h>
int main()
{
    int a[5]={1,9,2,4,3};
    int min;
    int n=sizeof(a)/sizeof(a[0]);
    min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d\n",min);
    return 0;
}