#include <stdio.h>

int main(void)
{
	unsigned int i;
	unsigned int j;
	printf("Enter a height of the rectangle(cm):\n");
	scanf("%d", &i);
	printf("Enter a weight of the rectangle(cm):\n");
	scanf("%d", &j);
	
	printf("Perimeter is %0.2f (inches)\n", (float)(i+i+j+j)*2.54);
	printf("Area is %0.2f (sq. inches)\n", (float)(i*j)*2.54);
	
	return 0;
}
