#include<stdio.h>
int main()
{
	int temp;
	int j;
	int arr[9]={5,6,3,4,2,9,1,7,8};
	int length=sizeof(arr)/sizeof(arr[0]);

	printf("Array before sorting\n");

	for(int x=0;x<length;x++)
	{
		printf("%d\n",arr[x]);
	}

	for(int i=1;i<length;i++)
	{
	  temp=arr[i];//store temporary value of arr[i] i.e value to be compared with sorted array
	  j=i-1;//value to the left of a[i] i.e last index of sorted array
	  
	  while(j>=0 && arr[j]>temp)//check j>=0 i.e till first index or sorted array and if value of a[j] in sorted array is greater than temp value i.e a[i]
	  {
		arr[j+1]=arr[j];//if so, swap values
		j--;
		
	  }

	  arr[j+1]=temp;
	}

	printf("Array after sorting\n");
	
	for(int x=0;x<length;x++)
	{
		printf("%d\n",arr[x]);
	}

	return 0;
}
