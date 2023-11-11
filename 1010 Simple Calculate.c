#include<stdio.h>
#include<math.h>
int main () 
{
    double code1, unit1, price1,code2, unit2, price2, total;
    scanf("%lf %lf %lf %lf %lf %lf", &code1, &unit1, &price1,&code2, &unit2, &price2);
    total = (unit1*price1) + (unit2*price2);
    printf("VALOR A PAGAR: R$ %.2lf", total);
    
    return 0;
}