#include<stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0
 */
int main(void)
{
	times_table();
	int i, j, res;
	for (i=0; i<=9; i++)
	{for (j = 0;j <= 9; j++)
		res = (i * j;);
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
		if (res >= 10)
		{
			_putchar((res / 10) + '0');
			_putchar((res % 10) + '0');
		}
		else
			_putchar((res % 10) + '0');
	}
	_putchar('\n');
}
return (0);
}
