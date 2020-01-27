#include <stdio.h>
#include <stdint.h>

int main(int argc, char*argv[]){

  int i = 65;
	char c = 65;
	long int l = 65;
	long long int m = 65;	

	uint8_t u = 65;// Guarenteed 8 bit integer
	uint64_t e = 65;// Guarenteed 64 bit integer

	printf("%x\t%c\t%d\t%d\n", c, c, c, sizeof(c));
	printf("%x\t%c\t%d\t%d\n", i, i, i, sizeof(i));
	printf("%x\t%c\t%d\t%d\n", l, l, l, sizeof(l));	
	printf("%x\t%c\t%d\t%d\n", m, m, m, sizeof(m));	

	return 0;
}

