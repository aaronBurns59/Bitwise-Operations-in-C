#include <stdio.h>
#include <inttypes.h>

// prints each of the bits in s, one at a time
void printBits(uint64_t s){
	for(int i = 63; i >= 0; i--)
	// Terrnary operator
	// Shifting i position 1 to the left
	// "ULL" makes c treat the 1 as an unsigned long long type
	// Literal values have types
	printf("%d", ((1ULL << i) & s) ? 1 : 0);
}

int main(int argc, char*argv[]){
	
	uint64_t s = 65;// Guarenteed 64 bit integer
	
	printBits(s);
	// ll informs printf of the type
	printf("\t%llx\t%lld\n", s, s);
	return 0;
}

