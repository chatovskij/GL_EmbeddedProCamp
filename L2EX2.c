unsigned short rgb; // must be global

unsigned short function_888to565(char red, char green, char blue)
{
	rgb = ((red & 0b11111000) << 8) | ((green & 0b11111100) << 3) | (blue >> 3);
	// red  0000 0000x xxxxxx x|
	// mask 1111 1000		   |
	// green      0000 0000xx x|
	// mask 	  1111 1100	   |
	// blue              0000 0|000
	// rgb  0000 00000 000000 0|
	return rgb;
}



