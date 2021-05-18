# include<stdio.h>
# include<math.h>
int main()
{
  double del, h, f, sum, sum2, e, x, n2;
  int n = 2;
  printf("Введите точность - > ");
  scanf("%lf", &e);
  del = 0;
  do
  {
      n2 = n * 2;
      for(int i = 0;i < n;i++)
      {
          h = 2.0 / n;
          x = (i * h - (h / 2.0));
          if (x >= 0 && x <= 1)
          {
              f = cos(x)*exp(pow(-x,2));
          }
          else
          {
              f = log(x + 1) - sqrt(4 - pow(x,2));
          }
          sum += h * f;
          h = 2.0 / n2;
          x = (i * h - (h / 2.0));
          if (x >= 0 && x <= 1)
          {
              f = cos(x)*exp(pow(-x,2));
          }
          else
          {
              f = log(x + 1) - sqrt(4 - pow(x,2));
          }
          sum2 += h * f;
          i++;
      }
      del = fabs(sum2 - sum) / 3;
  }
  while (e > del);
  printf("\tx%.3lf f(x)%.3lf\n", x, f);
  return 0;
}
