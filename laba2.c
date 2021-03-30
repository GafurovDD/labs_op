#include <stdio.h>
#include <math.h>
int main ()
{
    double x, a;
    printf("Enter x ->");
    scanf("%f",&x);
    printf("Enter a ->");
    scanf("%f",&a);
    double y = (1/2)*(pow(a,x)+pow(a,-x));
    double z = sqrt (2+y-pow(y,2));
