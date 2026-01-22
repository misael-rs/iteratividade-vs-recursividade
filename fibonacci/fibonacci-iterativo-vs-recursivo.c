#include <stdio.h>
#include <time.h>

int fibonacciIterativo(const int n);
int fibonacciRecursivo(const int n);

int main(void) {
	int enesimo = 46;
	double tempo;

	for(int i=1; i<=enesimo; i++) {
		clock_t tInicioIterativo = clock();
		printf("Iterativo: f(%d)=%d ", i, fibonacciIterativo(i));
		clock_t tFimIterativo = clock();
		tempo = (double)(tFimIterativo - tInicioIterativo)/CLOCKS_PER_SEC;
		printf("(t=%.3f seg.)\n", tempo);

		clock_t tInicioRecursivo = clock();
		printf("Recursivo: f(%d)=%d ", i, fibonacciRecursivo(i));
		clock_t tFimRecursivo = clock();
		tempo = (double)(tFimRecursivo - tInicioRecursivo)/CLOCKS_PER_SEC;
		printf("(t=%.3f seg.)\n", tempo);

		printf("---\n");
	}

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
