#include <stdio.h>

int main(void)
{
	unsigned int i, j=1;

	for(i = 1; i <= 10 ; i++){
		j = j*i;
		printf ("i is: %d, %d\n", i, j);
	}
	printf ("Factorial of 10 is: %d\n", j);

	return 0;
}

 

