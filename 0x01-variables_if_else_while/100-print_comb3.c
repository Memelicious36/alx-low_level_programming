#include <stdio.h>

/**
 * main - prints all possible different combination of the two digit
 *
 * Return: Always 0 (success)
 *
 */

int main(void)

{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++
		{
                        if (!((ones == tens) || (tens > ones)))
			{
			         putchar(tens);
				 putchar(ones);
				 if (!(ones == '9' && tens == 'g'))
				 { 
                                         putchar(',');
					 putcher(' ');
				 }
			}
		
		}
        }
	
	putchar('\n');

	return (0);
}      	
	         
