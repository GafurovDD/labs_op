#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill(int I, int J, int a[][J])
{
    int i, j;
    for (i = 0; i < I; i++)
    {
        for (j = 0; j < J; j++)
            a[i][j] = rand() % 10;
    }
    int *A =(int *)malloc(I * J * sizeof(int));
    if (!A)
    {
      printf("Memory allocation error!\n");
      exit(EXIT_FAILURE);
    }
    int z, x;
    for (z = 0; z < I; z++)
    {
      for (x = 0; x < J; x++)
      {
        A[z * J + x] = z * J + x + 1;
      }
    }
    free (A);
}
void printmas(int I, int J, int a[][J])
{
    int i, j;
    for (i = 0; i < I; i++)
    {
        for (j = 0; j < J; j++)
            printf("%6d", a[i][j]);
        printf("\n");
    }
}
void sum(int I, int J, int massum[][J], int mas1[][J], int mas2[][J])
{
	int i, j;
	printf ("Сумма\n");
    for (i = 0; i < I; i++)
    {
        for (j = 0; j < J; j++)
		{
			massum[i][j] = mas1[i][j] + mas2[i][j];
			printf("%6d", massum[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	srand(time(NULL));
	int I, J;
	printf("Введите количество строчек двухмерных массивов - > ");
	scanf("%d", &I);
	printf("Введите количество столбцов двухмерных массивов - > ");
	scanf("%d", &J);
	int mas1[I][J], mas2[I][J], massum[I][J];
	fill(I, J, mas1);
	printf("Массив 1 \n");
  printmas(I, J, mas1);
	fill(I, J, mas2);
	printf("Массив 2 \n");
  printmas(I, J, mas2);
	sum(I, J, massum, mas1, mas2);
	return 0;
}
