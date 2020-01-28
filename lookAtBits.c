#include <stdio.h>
#include <inttypes.h>

// prints each of the bits in s, one at a time
void printBits(uint8_t s){
	for(int i = (8-1); i >= 0; i--)
	// Terrnary operator
	// Shifting i position 1 to the left
	// "ULL" makes c treat the 1 as an unsigned long long type
	// Literal values have types
	printf("%d", ((1ULL << i) & s) ? 1 : 0);
}

int main(int argc, char*argv[]){
	// C should be made up of the bits that are matching bit 
	// positions in A and B
	int8_t a = 73;
	int8_t b = 99;
	int8_t c = (a & b);

	printf("Logical AND, '&' operator\n");
	printf("a = "); printBits(a); printf("\n");
	printf("b = "); printBits(b); printf("\n");
	printf("c = "); printBits(c); printf("\n");

	c = (a | b);

	printf("Logical OR, '|' operator\n");
	printf("a = "); printBits(a); printf("\n");
	printf("b = "); printBits(b); printf("\n");
	printf("c = "); printBits(c); printf("\n");

	c = (a ^ b);

	printf("Logical XOR, '^' operator\n");
	printf("a = "); printBits(a); printf("\n");
	printf("b = "); printBits(b); printf("\n");
	printf("c = "); printBits(c); printf("\n");
	
	printf("Logical NOT, '~' operator\n");
	printf("a = "); printBits(a); printf("\n");
	printf("~a = "); printBits(~a); printf("\n");

	printf("Bit Shifting Numbers\n");
	printf("1      = "); printBits(1); printf("\n");
	printf("1 << 3 = "); printBits((1 <<3)); printf("\n");

	return 0;
}

