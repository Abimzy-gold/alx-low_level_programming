#include <stdio.h>
/**
  *main - prints all single digits
  *Return: 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)

	{
	if (num != '5' && num != '7')
	putchar(num);
	}

	putchar('\n');
	return (0);
}

