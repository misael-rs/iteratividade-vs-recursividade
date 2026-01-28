#include <stdio.h>
#include <time.h>

unsigned long fatorialIterativo(const unsigned long n);
unsigned long fatorialRecursivo(const unsigned long n);

int main(void) {
	double tempo;

	FILE *arquivo;
	arquivo = fopen("resultados-fatorial.csv", "w");
	fprintf(arquivo, "n, Tempo Iterativo, Tempo Recursivo, n!\n");

	unsigned long iterativo, recursivo;
	for(int i=0; i<=20; i++) {
		fprintf(arquivo, "%d, ", i);

		clock_t tIteIni = clock();
		iterativo = fatorialIterativo(i);
		clock_t tIteFim = clock();
		tempo = (double)(tIteFim - tIteIni)/CLOCKS_PER_SEC;
		fprintf(arquivo, "%f, ", tempo);
		printf("Iterativo: %d! = %ld (t=%f sec.)\n", i, iterativo, tempo);

		clock_t tRecIni = clock();
		recursivo = fatorialRecursivo(i);
		clock_t tRecFim = clock();
		tempo = (double)(tRecFim - tRecIni)/CLOCKS_PER_SEC;
		fprintf(arquivo, "%f, %ld\n", tempo, iterativo);
		printf("Recursivo: %d! = %ld (t=%f sec.)\n", i, recursivo, tempo);
		printf("--\n");
	}
	fclose(arquivo);
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
