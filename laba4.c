# include<stdio.h>
# include<math.h>
int main()
{
    double t, x, f, i, n, n2, xmin, h, d;
    int max = 2.0;
    printf("Введите шаг - > ");
    scanf("%lf", &t);
    while (d >= t)
    {
        n = 0.0;
        n2 = n;
        d = 0.0;
        h = 2.0 / max;
        for (int min = 0; i < max; i++)
        {
            xmin = min * h;
            x = xmin + h / 2.0;
            if (x >= 0 && x <= 1)
            {
                f = cos(x)*exp(pow(-x,2));
            }
            else
            {
                f = log(x + 1) - sqrt(4 - pow(x,2));
            }
            n = n + f;
        }
        n = h * n;
        max = max * 2;
        d = fabs(n - n2) / 2.0;
    }
    printf("\nI = %.8lf", n);
    printf("\nd = %.8lf", d);
    printf("\nmax = %.d\n", max);
    return 0;
}
