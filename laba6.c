#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill(int n , int a[])
{
	int i;
	for (i = 0; i < n ; i ++)
	{
		a[i] = rand () % 101 - 50;
	}
}
void print(int n , int a[])
{
	int i;
	for (i = 0;i < n;i ++)
 	{
		printf ("%7d", a[i]);
	}
}
void max(int n , int a[])
{
	int i, max1, max2, max3, imax1, imax2, imax3;
	max1 = -50;
	max2 = -50;
	max3 = -50;
	for (i = 0; i < n ; i ++)
	{
		if(a[i] >= max1 || a[i] >= max2 || a[i]>=max3)
        {
        	if(max1 <= max2 && max1 <= max3)
			{
            	max1 = a[i];
				imax1 = i;
			}
            else
            	if(max2 <= max3)
				{
                	max2 = a[i];
					imax2 = i;
				}
                else
				{
                    max3 = a[i];
					imax3 = i;
				}
		}
	}
	a[(imax1 + imax2 +imax3) % n] = max1 * max2 * max3 - (max1 + max2 + max3);
	printf ("\nМаксимумы: %4d ,%4d ,%4d", max1, max2, max3);
	printf ("\nИх индексы: %4d ,%4d ,%4d\n", imax1, imax2, imax3);
}
int main()
{
	srand(time(NULL));
	int n;
	printf ("Введите количество элементов массива - > ");
	scanf ("%d", &n);
	int A[n];
	fill (n, A);
 	print(n, A);
	max(n, A);
	print(n, A);
 	return 0;
}
