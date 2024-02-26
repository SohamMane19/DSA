#include<stdio.h>
#include<conio.h>
int main()
{
        int temp;
        int j;
        int arr[9]={5,4,10,1,6,2};
        int length=sizeof(arr)/sizeof(arr[0]);
        clrscr();
        printf("Array before sorting:\n");
        for(int x=0;x<length;x++)
        {
                printf("%d\n",arr[x]);
        }
        for(int i=1;i<length;j++)
        {
          temp=arr[i];
          j=i-1;
          while(j>=0 && arr[j]>temp)
          {
                arr[j+1]=arr[j];
                j--;

          }
          arr[j+1]=temp;
        }
        printf("Array after sorting");
        for(int y=0;y<length;y++)
        {
                printf("%d\n",arr[y]);
        }
        getch();
        return 0;
}