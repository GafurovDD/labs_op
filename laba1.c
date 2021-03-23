 #include <stdio.h>
#include <math.h>
int main ()
{
    int a, b, c, x;
    printf(" Enter a -> ");
    scanf("%d" , &a );
    printf(" Enter b -> ");
    scanf("%d" , &b );
    printf(" Enter c -> ");
    scanf("%d" , &c );
    printf(" Enter x -> ");
    scanf("%d" , &x );
    if (a <= x && a % 7 == 0 && a < b && a < c)
      {
          printf("%d",a);
      }
    if (b <= x && a % 7 == 0 && b < a && b < c)
      {
          printf("%d",b);
      }
    if (c <= x && a % 7 == 0 && c < b && c < a)
      {
          printf("%d",c);
      }
    if ((a<b && a<c && a % 7 != 0)||(a<b && a<c && a > x))
      {
          printf("%f ",(float)a/(b+c));
      }
    if ((b<a && b<c && b % 7 != 0)||(b<a && b<c && b > x))
      {
          printf("%f ",(float)b/(a+c));
      }
    if ((c<b && c<a && c % 7 != 0)||(c<b && c<a && c > x))
      {
          printf("%f ",(float)c/(a+b));
      }
return 0 ;
}
