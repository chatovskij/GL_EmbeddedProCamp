char input_string[] = "654jhfg55d";
unsigned int array_size = (sizeof(input_string) - 1);
char output_string[];

void copy_array(char *a)
{
	int i;
	for(i=0; i < array_size; i++)
	{
		output_string[i] = input_string[i];
	}
	output_string[i+1] = '\0';
	printf("%s\n", output_string);
}



 

