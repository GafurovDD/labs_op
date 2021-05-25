#include <stdio.h>
#include <math.h>
int fc(int n, int i, int b)
{;
	for ( ; i < n; i++)
		if ((n % i) == 0)
			b++;
	return b;
}
int fr(int n, int i, int b)
{
		if (i < n)
		{
					return fr(n, ++i, b + !(n % i));		
		}
		return b;
}
int main()
{
	int n, i = 2, b = 0;
	printf("Введите число - > ");
	scanf("%d", &n);
	if (fc(n, i, b) == 0)
			printf("Цикл: Число простое\n");
	else
			printf("Цикл: Число не простое\n");
	if (fr(n, i, b) == 0)
			printf("Рекурсия: Число простое\n");
	else
			printf("Рекурсия: Число не простое\n");
	return 0;
}
