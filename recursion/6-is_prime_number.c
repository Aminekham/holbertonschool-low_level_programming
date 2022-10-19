#include "main.h"
/**
 *verf - to verify if the number is prime
 *
 * @c: - integer to verify with
 * 
 * @t: - where to put n
 *
 */
int verf(int c, int t)
{
    if(t == c)
        return (1);
    if(t%c == 0)
	{
        return (0);
	}
	if (c > t)
	{
		return (0);
	}
	if (t == 1)
	{
		return(0);
	}
    else
	{
        return verf(c + 1, t);
    }
}
/**
 *is_prime_number - to verify if the number is prime
 *
 * @n: - integer to verify with
 *
 */
int is_prime_number(int n)
{
	return (verf(2 ,n));
}
