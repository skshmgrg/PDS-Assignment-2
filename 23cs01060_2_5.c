//Determine if a number is odd or even using bitwise and(&) operator.
#include<stdio.h>
int main()
{  int num;
   printf("enter the number\n");
   scanf("%d",&num);
   if( num&1 != 0)
   printf("odd");
   else 
   printf("even");
}