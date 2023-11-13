#include <stdio.h>
#include<math.h>
int main () 

{
    double a,b,c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == b+c || b == a+c || c == a+b) {
        printf("Area = %.1lf\n", ((a+b)/2)*c);
    }
    else{ 
        printf ("Perimetro = %.1lf\n", a+b+c);
    }
    return 0;
}
