#include <termios.h>
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int mygetch()
{
	struct termios oldt, newt;
	int c;
	tcgetattr ( STDIN_FILENO , & oldt );
	newt = oldt;
	newt.c_lflag &= ~(ICANON | ECHO);
	tcsetattr(STDIN_FILENO, TCSANOW, &newt);
	c = getchar();
	tcsetattr (STDIN_FILENO, TCSANOW, &oldt) ;
	return c;
}
int main()
{
	int i;
	unsigned char c;
	for (;;)
	{
		c = mygetch();
		if (c == 27)
		{
			c = mygetch();
			if (c == 79)
			{
				c = mygetch();
			}
			else if (c == 91)
			{
				c = mygetch();
				if (c == 49)
				{
					c = mygetch();
					c = mygetch();
				}
				if (c == 53)
				{
					 c = mygetch();
					 if (c == 126)
					 		break;
				}
				if (c >= 48 && c <= 54)
				{
					c = mygetch();
					if (c >= 48 && c <= 52)
						c = mygetch();
				}
			}
		}
		else
		{
			if (isalpha(c))
			{
					printf("%c", c);
					i++;
			}
			else
				printf("%c", c);
		}
}
printf("   %d\n", i);
}
