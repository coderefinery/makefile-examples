/*
 * Implementation of the trigonometric function sin(x) with a Maclaurin series,
 * https://en.wikipedia.org/wiki/Taylor_series#List_of_Maclaurin_series_of_some_common_functions
 */

double sin(double x){
   double temp = x - x*x*x/(2*3) + x*x*x*x*x/(2*3*4*5);
   return x;
}
