#include <stdio.h>
#include <time.h>

unsigned long fatorialIterativo(const unsigned long n);
unsigned long fatorialRecursivo(const unsigned long n);

int main(void) {
	double tempo;

	for(int i=0; i<=20; i++) {
		clock_t tIteIni = clock();
		printf("Iterativo: %d! = %ld ", i, fatorialIterativo(i));
		clock_t tIteFim = clock();
		tempo = (double)(tIteFim - tIteIni)/CLOCKS_PER_SEC;
		printf("(t=%f sec.)\n", tempo);

		clock_t tRecIni = clock();
		printf("Recursivo: %d! = %ld ", i, fatorialRecursivo(i));
		clock_t tRecFim = clock();
		tempo = (double)(tRecFim - tRecIni)/CLOCKS_PER_SEC;
		printf("(t=%f sec.)\n", tempo);
		printf("--\n");
	}

	return 0;
}

unsigned long fatorialIterativo(const unsigned long n) {
	unsigned long resultado = 1;
	for(unsigned long i=2; i<=n; i++) resultado *= i;
	return resultado;
}

unsigned long fatorialRecursivo(const unsigned long n) {
	if (n==0) return 1;
	return n * fatorialRecursivo(n-1);
}
