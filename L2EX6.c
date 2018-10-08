#include <stdio.h>

int main(void)
{
	int i;
	int j = 0;

	for(i = 1; i < 501 ; i++)	
	{
		j = j + i;
	}
	printf ("Sum from 1 to 500 is: %d\n", j);
	printf("Divide the sum by a next number:\n");
	point1:
	scanf("%d", &i);
	if (i == 0)
	{
		printf("Incorrect divider\n");
		printf("Please enter a correct divider again: \n");
		goto point1;
	}
	
	if (i != 0)
	{
		printf("The result of [sum / divider] is: %d\n", j / i );
	}

	return 0;
}
