char input_string[] = "654jhfg55d";
unsigned int array_size = (sizeof(input_string) - 1);
char output_string[];

void numbers_from_array(char *a)
{
	int i,j=0;
	for(i=0; i < array_size; i++)
	{
		if ((input_string[i] >= 0x30) && (input_string[i] <= 0x39)){
			output_string[j] = input_string[i];
			j++;
		}
		output_string[j+1] = '\0';
	}
}




 

