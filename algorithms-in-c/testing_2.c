
#include <stdio.h>

int main(void) {
	// your code goes here
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>c)
    {
        printf("Bravo!\n");
    }
    else
    {
        printf("Try again\n");
    }
    scanf("%d %d %d",&a,&b,&c);
    if(a>c)
    {
        printf("Bravo!");
    }
    else
    {
        printf("Try again");
    } 

}
