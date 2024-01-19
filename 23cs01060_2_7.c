#include<stdio.h>
int main()
{
    float tip_p,tax_p,base_cost,total;
    printf("enter the base cost of the meal\n");
    scanf("%f",&base_cost);
    printf("\nenter tip percent");
    scanf("%f",&tip_p);
    printf("\nenter tax percent");
    scanf("%f",&tax_p);
    total = base_cost*(1 + tip_p/100 + tax_p/100);
    printf("The final cost of the meal is %.0f",total);
}