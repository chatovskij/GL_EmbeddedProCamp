int array[] = {54, 55, 100, -99, 275};
unsigned int array_size = sizeof(array) / sizeof(int);

void max_element(int *a, int size)
{
	int i, max = 0;
	for(i = 0; i < size; i++){
 	   	if(array[i] > max){
   	     		max = array[i];
			}
	}
	printf("Maximum element in this array is = %d\n", max);
}



 

