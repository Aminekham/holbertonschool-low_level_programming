#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;
	int last;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	if (last > 5)
{
	printf ("Last digit of %d is %d and is greater than 5",n,last);
}
	else if (last < 6 && last =! 0)
{
	printf ("Last digit of %d is %d and is less than 6 ad=nd not 0");
}
	else
{
	printf("Last digit of %d is 0 and is 0");
} 
	return (0);
}
