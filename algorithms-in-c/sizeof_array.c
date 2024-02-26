#include <stdio.h>

int main(void) {
	// your code goes here
	int *numbers={10,20,30,40,50,60};
	int length=sizeof(numbers)/sizeof(numbers[0]);
	printf("%d",length);
	return 0;
}


