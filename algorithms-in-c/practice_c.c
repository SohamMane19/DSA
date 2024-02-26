#include<stdio.h>
#include "calculations.h"
#include<stdlib.h>
#include<string.h>
//enums
enum days {MON=1,TUE,WED,THU,FRI,SAT};
int main()
{
	//constants
	// #define DAYS_IN_YEAR 365
	// // printf("%d\n",DAYS_IN_YEAR);
	// //enums
	// enum days day=MON;
	// // printf("%d\n",day);

	// //using custom header file
	// // printf("Addition:%d\n",add(5,2));
	// // printf("Subtraction:%d\n",sub(5,2));

	// //arrays
	// int arr[5]={1,2};//1,2,0,0,0
	// // for(int i=0;i<5;i++)
	// {
		// printf("%d\n",arr[i]);
	// }
	//sizeof()
	// int a=1;
	// printf("%ld\n",sizeof(int));	
	// size_t size=sizeof(++a);
	// printf("size of %d is %zu bytes\n",a,size);	
	// //arrays
	// int arr[]={1,2,3};
	// arr[1]=1;
	// printf("arr[1]=%d\n",arr[1]);
	// for(int i=0;i<3;i++)
	// 	printf("%d ",arr[i]);
	// printf("\n");

	// //strings
	// char str1[20]="Hello world!";

	// printf("%s\n",str1);
	// printf("%d\n",str1[2]);

	// int cha='a';
	// printf("%d\n",cha);
	// printf("%d\n",sizeof(cha));
	
	// //multidimensional arrays
	// int m_arr[2][2]={
	// 	{1,2},
	// 	{3,4}
	// };
	// printf("array element[0][1]:%d\n",m_arr[0][1]);

	// //modulos
	// printf("%d\n",(11%3));	
	// printf("%d\n",(-11%3));
	// printf("%d\n",(11%(-3)));

	// int result=10<1<2;
	// printf("result:%d\n",result);

	// //ternary
	// int z=(32>2)?32:2;
	// printf("ternary:%d\n",z);

	// int j=0;
	// int t=j++;
	// printf("j:%d\n",j);
	// printf("j++:%d\n",t);

	// //bitwise operators
	// printf("%d\n",(~60));	
	// printf("%d\n",(2&1));
	// printf("%d\n",(2|1));
	// printf("%d\n",(2^1));
	// printf("%d\n",(2<<1));
	// printf("%d\n",(2>>1));

	//while loop
	// int index=5;
	// while(index--)
	// {
	// 	printf("index:%d\n",index);
	// }
	// int i=5;
	// printf("%d\n",i--);
	// printf("%d\n",i);

	//switch
	// int value=13;
	// switch(value)
	// {
	// 	case 1:
	// 		printf("%d found\n",value);
	// 		break;
	// 	case 12:
	// 		printf("%d found\n",value);
	// 		break;
	// 	case 2:
	// 		printf("%d found\n",value);
	// 		break;
	// 	default:
	// 		fputs("error\n",stderr);
	// 		exit(-1);
	// 		break;	
	// }
	// bool disaster=false;
	// for(int i=0;i<5;++i)
	// {
	// 	if(i==3)
	// 	{
	// 		// disaster=true;	
	// 		goto error;
	// 	}
	// 	printf("%d\n",i);
	// }
	// error:
	// 	printf("Error occured at %d\n",i);
	// printf("%d\n",(unsigned char) 257);

	// //typecasting
	// printf("%f\n",(double)100);
	// printf("%c\n",(char)100);
	// //pointers
	// int x=0;
	// int *ptr;
	// ptr=&x;
	// printf("%p\n",ptr);//>0x7fffcd874fe0
	// printf("%p\n",&x);//>0x7fffcd874fe0
	// printf("%d\n",*ptr);//>0
	// printf("%zu\n",sizeof(ptr));
	// //incrementing value stored at pointer
	// (*ptr)++;
	// printf("%d\n",x);
	// printf("%d\n",*ptr);//>0

	// int arr[5]={1,2,3,4,5};
	// int *ptr2=arr;
	// printf("%d\n",*ptr2);

	// int arr2[10]={12,13,14};
	// int (*ptr_to_arr)[10]=&arr2;
	// printf("%p\n",ptr_to_arr);	
	// printf("%d\n",*ptr_to_arr[0]);//>12

	// printf("arr2[1]:%d\n",*(ptr_to_arr+1));
	// printf("arr2[1]:%d\n",arr2[1]);	

	// You can also dynamically allocate contiguous blocks of memory with the
  // standard library function malloc, which takes one argument of type size_t
  // representing the number of bytes to allocate (usually from the heap, although this	
// 	int *my_ptr=malloc(sizeof(*my_ptr)*20);
// 	// printf("%d\n",sizeof(*my_ptr));
// 	printf("Assigning\n");
// 	for (int i = 0; i < 20; ++i)
// 	{
// 		*(my_ptr+i)=20-i;//my_ptr[i]=20-i;
// 	}
// 	printf("Printing\n");
// 	for(int i=0;i<20;i++)
// 	{
// 		printf("%d\n",*(my_ptr+i));
// 	}
// 	//The difference in malloc and calloc is that malloc does not set the memory to zero where as calloc sets allocated memory to zero.
// 	size_t size=10;
// 	int *my_arr=calloc(size,sizeof(int));
// 	//resizing memory of my_arr
// 	size++;
// 	my_arr=realloc(my_arr,sizeof(int)*size);
// 	if(my_arr==NULL)
// 	{
// 		return 0;
// 	}
// 	my_arr[10]=5;
// 	// Dereferencing memory that you haven't allocated gives
  // // "unpredictable results" - the program is said to invoke "undefined behavior"
// 	printf("my_ptr[100]:%d\n",*(my_ptr+100));
// 	free(my_ptr);

// 	const char *my_str="This is my very own string literal";
// 	printf("%c\n",*my_str);
// 	printf("%c\n",*(my_str+1));

// 	char foo[]="foo";
// 	foo[0]="a";
// 	printf("%c\n",foo[0]);

	//function
	void str_reverse(char *str_in)
	{
		// printf("%s\n",str_in);
		char temp;
		size_t i=0;
		size_t length=strlen(str_in);	
		for(i=0;i<length/2;i++)
		{
			temp=str_in[i];
			str_in[i]=str_in[length-i-1];
			str_in[length-i-1]=temp;
		}

		// printf("Reversed string:%c",str_in);
	}
	char c[]="This is code";
	str_reverse(c);
	printf("%s\n",c);

	// void swap_numbers(int *a,int *b)
	// {
	// 	int temp=*a;
	// 	*a=*b;
	// 	*b=temp;
	// 	printf("A:%d\n",*a);
	// 	printf("B:%d\n",*b);
	// }
	// int f=2;
	// int s=5;
	// swap_numbers(&f,&s);
	// printf("f:%d\n",f);
	// printf("s:%d\n",s);

	// int return_multiple(int *array_of_3,int *a,int *b,int *c,int *d)
	// {
	// 	if(array_of_3==NULL)
	// 	{
	// 		return 0;
	// 	}
	// 	*a=*(array_of_3+0);
	// 	*b=*(array_of_3+1);
	// 	*c=*(array_of_3+2);
	// 	*d=*(array_of_3+3);
	// 	printf("%d\n",*a);
	// 	printf("%d\n",*b);
	// 	printf("%d\n",*c);
	// 	printf("%d\n",*d);
	// 	return 1;
	// }
	// int arr1[4]={12,2,34,90};
	// int result=return_multiple(arr1,&arr1[0],&arr1[1],&arr1[2],&arr1[3]);
	// printf("Result:%d\n",result);

	// void printArray(int *arr2,int n)
	// {
	// 	// int i=0;
	// 	// int length=
	(arr2[0])/sizeof(arr2);
	// 	for(int i=0;i<n;i++)
	// 	{
	// 		printf("%d\n",arr2[i]);
	// 	}
	// }	
	// int arr3[]={11,22,33,44};
	// int length=sizeof(arr3)/sizeof(arr3[0]);
	// printArray(arr3,length);

	//extern
	// int i=0;
	// void hello()
	// {
	// 	extern int i;
	// }

	// Typedefs can be used to create type aliases
	// typedef int dimensions;
	// dimensions side=12;

	// // Structs are just collections of data, the members are allocated sequentially,
	// // in the order they are written:
	// struct rectangle
	// {
	// 	int width;
	// 	int height;
	// };

	// void function_1()
	// {
	// 	struct rectangle my_rec={1,2};

	// 	my_rec.width=10;
	// 	my_rec.height=20;

	// 	struct rectangle *my_rec_ptr=&my_rec;

	// 	// Use dereferencing to set struct pointer members...
	// 	(*my_rec_ptr).width=30;
	// 	my_rec_ptr->height=10;
		
	// 	// You can apply a typedef to a struct for convenience
	// 	typedef struct rectangle rect;

	// 	int area(rect r)
	// 	{
	// 		return r.width * r.height;
	// 	}
	// 	// Typedefs can also be defined right during struct definition
	// 	typedef struct {
	// 		int width;
	// 		int height;
	// 	} rect;
	// 	rect r;

	// }

	//calling a function through pointers
	void str_reverse_through_pointer(char *str_in)
	{
		void (*f)(char *);
		f=&str_reverse;
		f(str_in);//calling the function
		// (*f)(str_in);
	}
	char string[]="Soham mane";
	str_reverse_through_pointer(string);
	printf("Reversed string:%s\n",string);
	print
}
