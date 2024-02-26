#include <stdio.h>
#include <string.h>
int main(void) {
	// your code goes here
    char x[]="Hello";
    char y[]="World";
    strcat(strcat(x," "),y);
    printf("%s",x);
	return 0;
}
