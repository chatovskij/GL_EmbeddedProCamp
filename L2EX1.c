uint16_t word = 0x1122;
uint32_t dword = 0x11223344;
uint64_t qword = 0x1122334455667788;

uint16_t swap16(uint16_t a)
{
	word = (word << 8) | (word >> 8);	
	return word;
}

uint32_t swap32(uint32_t a)
{
	dword = (dword << 24) | (dword & 0x0000FF00) << 8 | (dword & 0x00FF0000) >> 8 | (dword >> 24);	
	return dword;
}

uint64_t swap64(uint64_t a)
{
	qword = (qword << 56) | (qword & 0x0000000000FF00) << 40 | (qword & 0x00000000FF0000) << 24  \
	| (qword & 0x000000FF000000) << 8 | (qword & 0x0000FF00000000) >> 8 | \
	(qword & 0x00FF0000000000) >> 24 | (qword & 0xFF000000000000) >> 40  | (qword >> 56);	
	return qword;
}

