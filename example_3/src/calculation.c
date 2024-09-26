/*
 * This is our calculation
 */
#include "example_math.h"
#include <stdio.h>

int main(){
   double d = OUR_PI/2;
   printf("Our trigonometric calculations:\n");
   printf("sin(%f) = %f\n", d, sin(d));
   printf("cos(%f) = %f\n", d, cos(d));
   return 0;
}
