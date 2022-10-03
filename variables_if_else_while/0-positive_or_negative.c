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
	  printf("%d\n" n,"is positive");
}	  else if (n < 0){
	  printf("%d\n" n,"is negative");
}	  else{
	  printf("%d\n" n,"is zero");
}
	return (0);
}
