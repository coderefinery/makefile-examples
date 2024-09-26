/*
 * Implementation of the trigonometric function cos(x) with a Maclaurin series,
 * https://en.wikipedia.org/wiki/Taylor_series#List_of_Maclaurin_series_of_some_common_functions
 */

double cos(double x){
   double temp = 1 - x * x/2 + x * x * x * x/(1 * 2 * 3 * 4);
   return temp;
}

