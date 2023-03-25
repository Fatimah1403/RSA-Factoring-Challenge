#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 on success
 */
int main(void)
{
	long long int n = 239809320265259;
	long int p = 2;
	long int q;

	while (n % p)
	{
		if (p <= n)
		{
			p++;
		}
		else
		{
			return (-1);
		}
	}

	q = n / p;
	print("%lld =  %ld * %ld\n", n, p, q);
	return (0);
}
