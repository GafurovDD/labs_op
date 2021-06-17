#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main ()
{
  char str[256];
  int i, flag = 0;
  printf ("> ");
  scanf("%255[^\n]", str);
  for (i = 0; str[i]; ++i)
  {
    if (isspace(str[i]))
    {
      if(flag)
      {
        printf("%c",str[i - 1]);
        flag = 0;
      }
    }
    else
    {
    flag = 1;
    }
  }
  if (flag)
  printf("%c",str[i - 1]);
  printf("\n");
}
