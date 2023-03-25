#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 on success
 */
int main(void)
{
	long long int num = 239809320265259;
	long int factor1 = 2;
	long int factor2;

	while (num % factors1)
	{
		if (factor1 <= num)
		{
			factor1++;
		}
		else
		{
			return (-1);
		}
	}

	factor2 = num / factor1;
	printf("%lld =  %ld * %ld\n", num, factor1, factor2);
	return (0);
}
