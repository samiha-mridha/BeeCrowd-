#include<stdio.h>
#include<math.h>
int main () {
    double distance, fuel, consumption;
     scanf("%lf %lf", &distance, &fuel);
      consumption = distance/fuel;

     printf("%.3lf km/l\n", consumption );
       
       return 0;

}