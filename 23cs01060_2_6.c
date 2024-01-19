#include<stdio.h>
int main()
{   int num;
    printf("enter the number\n");
    scanf("%d",&num);
    (num%2==1 && 100<=num<=200)?printf("true"):printf("false");
    return 0;
}