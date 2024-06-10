#include<stdio.h>

int main(void)
{
    int n;

    puts("start of the program");
    printf("enter an integer");
    scanf("%d", &n);
    
    if(n>0)
    {
        puts("n is a positive");
    }
    else if(n<0)
    {
        puts("n is negative");
        
    }
    else
    {
        puts("n is zero");
    }

    puts("End of the program");
    return(0)
    
}