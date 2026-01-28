#include <stdio.h>
#include <time.h>

int fibonacciIterativo(const int n);
int fibonacciRecursivo(const int n);

int main(void) {
	int enesimo = 46;
	double tempo;

	FILE *arquivo;
	arquivo = fopen("resultados-fibonacci.csv", "w");
	fprintf(arquivo, "n, Tempo Iterativo, Tempo Recursivo, f(n)\n");

	int iterativo, recursivo;
	for(int i=1; i<=enesimo; i++) {
		fprintf(arquivo, "%d, ", i);

		clock_t tInicioIterativo = clock();
		iterativo = fibonacciIterativo(i);
		clock_t tFimIterativo = clock();
		tempo = (double)(tFimIterativo - tInicioIterativo)/CLOCKS_PER_SEC;
		fprintf(arquivo, "%.3f, ", tempo);
		printf("Iterativo: f(%d)=%d (t=%.3f seg.)\n", i, iterativo, tempo);

		clock_t tInicioRecursivo = clock();
		recursivo = fibonacciRecursivo(i);
		clock_t tFimRecursivo = clock();
		tempo = (double)(tFimRecursivo - tInicioRecursivo)/CLOCKS_PER_SEC;
		fprintf(arquivo, "%.3f, %d\n", tempo, iterativo);
		printf("Recursivo: f(%d)=%d (t=%.3f seg.)\n", i, recursivo, tempo);

		printf("---\n");
	}
	fclose(arquivo);

	return 0;
}

int fibonacciIterativo(const int n) {
	int n1 = 1;
	int n2 = 1;
	int n3;

	if ((n==1) || (n==2)) return 1;

	for(int i=3; i<=n; i++) {
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	return n3;
}

int fibonacciRecursivo(const int n) {
	if (n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	} else {
		int fibo = fibonacciRecursivo(n-1) + fibonacciRecursivo(n-2);
		return fibo;
	}
}
