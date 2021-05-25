#include <stdio.h>
#include <math.h>
double Integral(long int n)
{
	double f = 0.0f, x, h = 2.0 / n;
	for (int i = 0; i < n; i++)
	{
		x = i * h + h / 2.0f;
		if (x >= 0 && x <= 1)
        {
            f += cos(x) * exp(-x * x);
        }
        else
            f += log(x + 1) - sqrt(4 - (x * x));
	}
	return f * h;
}
int main()
{
	double In, I2n, e, answer = 0.33735f, del;
	long int n = 1;
	printf("Введите точность -> ");
	scanf("%lf", &e);
	In = I2n = Integral(n);
	do
	{
		In = I2n;
		n *= 2;
		I2n = Integral(n);
		del = fabs(In - I2n) / 3;
		printf("| n = %ld | I = %lf | D = %lf | \n\n", n, I2n, del);
	}
	while(del >= e);
	printf(" \n Ответ = %lf \n In = %lf \n ", answer, In);
}
