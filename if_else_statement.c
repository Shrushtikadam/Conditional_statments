#include<stdio.h>
#include<stdlib.h>

int main(void)
{ 
    int n;
    int c=0;

    puts("Start of program");
    printf("Enter an integer:");
    scanf("%d", &n);
    
    if(n>0)
    {
        c=100;
        printf("n is the positive, c=%d\n",c);
    }
    else
    {
        c=200;
        printf("n is zero or negative, c=%d\n",c);
        
    }

    puts("end of the program");
    return(0);

}