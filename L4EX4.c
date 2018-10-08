#include <stdio.h>

void function1(int a)
{
	;	
}

void (*function1_ptr)(int a);

int function2(void (*function_pointer)(int a))
{
	;	
}

int main(void)
{
	function1_ptr = &function1;
	function2(function1_ptr); 
	return 0;
}



 

