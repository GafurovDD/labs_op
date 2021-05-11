#include <stdio.h>
#include  <math.h>
int  main()
{
    double f, t, x, max;
    int min = 0;
    printf("Введите шаг - > ");
    scanf("%lf", &t);
    printf("\tx\t    f(x)\n");
    printf("______________________________________\n");
    max = 2.0 / t;
    while (min <= max)
    {
        x = min * t;
        if (x >= 0 && x <= 1)
        {
            f = cos(x)*exp(pow(-x,2));
        }
        else
            f = log(x + 1) - sqrt(4 - pow(x,2));
        printf("\t%.8lf    %.8lf\n", x, f);
        min++;
    }
    return 0;
}
