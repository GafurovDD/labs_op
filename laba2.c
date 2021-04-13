#include <stdio.h>
#include <math.h>
int main()
{
		const double a = 2.0;
		double x, z, y;
		printf(" Enter x {-1.89997 < x < 1.89997} -> ");
	  scanf("%lf", &x);
		if (x < 1.89997 && x > -1.89997)
		{
			  y = 0.5 * (pow(a, x) + pow(a, -x));
	  		z = sqrt(2.0 + y - y * y);
				printf("y(x) = %lf\nz(y) = %lf\n", y, z);
		}
		else
	  {
				printf("x value is incorrect !\n");
		}
	  return 0;
}
