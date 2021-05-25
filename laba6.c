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
void max(int A[a], max )
{
	for (i = 0; i < 5; ++i)
        {
            if (A[a] > max)
            {
                max = A[a];
            }
        }
}
int main()
{
	srand(time(NULL));
	int a;
	printf ("Введите количество элементов массива - > ");
	scanf ("%d", &a);
	int A[a];
	fill (a, A);
	int i;
 	for (i = 0;i < a;i ++)
 	{
		printf ("%4d", A[i]);
	}
 	return 0;


}
