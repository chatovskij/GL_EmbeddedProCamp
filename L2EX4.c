#include <stdio.h>

int main(void)
{
	unsigned int i = 6;

	printf("Program calculate the perimeter and area of a circle(r=6m) \n");
	printf("Perimeter is %.2f (m)\n", 2*3.14*(float)6);
	printf("Area is %.2f (sq.m)\n", 3.14*(float)(6*6));
	
	return 0;
}
