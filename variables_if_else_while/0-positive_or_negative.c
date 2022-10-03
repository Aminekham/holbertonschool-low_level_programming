#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/* main is the functin of my program*/

/*Return will contain a zero */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0){
	  printf("%d\n","is positive",n);
}	  else if (n < 0){
	  printf("%d\n","is negative",n);
}	  else{
	  printf("%d\n","is zero",n);
}
	return (0);
}
