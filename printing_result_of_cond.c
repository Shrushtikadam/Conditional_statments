#include<stdio.h>

int main(void)
{
    int n;
    int result;

    printf("Enter an integer:");
    scanf("%d", &n);

    result =(n>0);
    printf("result= %d\n",result);

    return(0);
}