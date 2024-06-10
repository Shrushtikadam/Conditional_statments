/* 
@Goal: This program asks end user to enter a positive integer. 
(validation check is performed). Let this integer be called as N. 

The program asks end user to enter another integer value, say i. 

0 <= i <= N-1 
This is a desired range for i. 

The program should output whether i is in desired range or not. 
*/

#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
    int N; 
    int i; 

    printf("Enter a positive integer:"); 
    scanf("%d", &N); 

    if(N <= 0)
    {
        puts("Kindly enter a positive integer"); 
        exit(-1);
    }

    printf("Enter another integer between:0 to %d:", N-1); 
    scanf("%d", &i); 

    if(0 <= i && i <= N-1)
    {
        puts("i is in the range"); 
    }    
    else 
    {
        puts("i is not in the range"); 
    }

    return (0); 
}