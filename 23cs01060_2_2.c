#include<stdio.h>
int main()
{   int a,b,c;
    printf("enter the 3 numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    (a>b && a>c)?printf("max number is %d",a): printf("");
    (b>a && b>c)?printf("max number is %d",b): printf("");
    (c>b && c>a)?printf("max number is %d",c): printf("");
}