#include<stdio.h>
int main() {
    float a, b, c, tri, cir, trap, square, rectangle;
    scanf("%f %f %f", &a, &b, &c);

    tri = 0.5*a*c;
    cir = 3.14159*c*c;
    trap = ((a+b)/2)*c;
    square = b*b;
    rectangle = a*b;
    printf("TRIANGULO: %.3f\n", tri);
    printf("CIRCULO: %.3f\n",cir );
    printf("TRAPEZIO: %.3f\n", trap);
    printf("QUADRADO: %.3f\n", square);
    printf("RECTANGULO: %.3f\n", rectangle);

    return 0;
}
