# Cálculo de Fatorial - Iterativo vs Recursivo

O objetivo deste diretório é fazer um teste de velocidade no cálculo de fatoriais, comparando a função iterativa com a função recursiva.  

## Método
O programa utiliza a biblioteca <time.h> para fazer a contagem do tempo.  
Para cada um dos métodos, foi separada uma função unicamente para a sua execução.  
Para calcular fatoriais maiores, foram utilizadas variáveis do tipo usigned long, que são significativamente maiores que int.  
O uso de unsigned long permitiu o cálculo de fatoriais até 20!  
Para comparar o tempo de execução, foram calculados fatoriais de 0! a 20! para ambos os métodos, com o tempo utilizado por cada função.

## Onde o experimento foi aplicado
Sistema Operacional: Zorin OS  
Linguagem do código: C  
Compilador: gcc  

## Como realizar o experimento
Para compilar o código, entre no terminal e digite:  
gcc fatorial-iterativo-vs-recursivo.c -o fatorial  

Isso irá gerar o arquivo "fatorial". Para executá-lo, digite:  
./fatorial  

## Resultados
Para o cálculo de 0! e 1!, a velocidade do método recursivo foi significativamente superior ao iterativo. Para f(0), a velocidade do método recursivo foi cerca de 18 vezes maior. Para f(1), a velocidade foi 7 vezes maior que o iterativo.  
Para os outros valores, porém, não houve diferença significativa no tempo de execução.

## Saída do código
Abaixo, está a saída do código, que fez o cálculo de f(0) a f(20):

Iterativo: 0! = 1 (t=0.000127 sec.)
Recursivo: 0! = 1 (t=0.000007 sec.)
--
Iterativo: 1! = 1 (t=0.000042 sec.)
Recursivo: 1! = 1 (t=0.000006 sec.)
--
Iterativo: 2! = 2 (t=0.000007 sec.)
Recursivo: 2! = 2 (t=0.000006 sec.)
--
Iterativo: 3! = 6 (t=0.000006 sec.)
Recursivo: 3! = 6 (t=0.000006 sec.)
--
Iterativo: 4! = 24 (t=0.000007 sec.)
Recursivo: 4! = 24 (t=0.000007 sec.)
--
Iterativo: 5! = 120 (t=0.000007 sec.)
Recursivo: 5! = 120 (t=0.000007 sec.)
--
Iterativo: 6! = 720 (t=0.000007 sec.)
Recursivo: 6! = 720 (t=0.000006 sec.)
--
Iterativo: 7! = 5040 (t=0.000007 sec.)
Recursivo: 7! = 5040 (t=0.000007 sec.)
--
Iterativo: 8! = 40320 (t=0.000007 sec.)
Recursivo: 8! = 40320 (t=0.000007 sec.)
--
Iterativo: 9! = 362880 (t=0.000006 sec.)
Recursivo: 9! = 362880 (t=0.000007 sec.)
--
Iterativo: 10! = 3628800 (t=0.000006 sec.)
Recursivo: 10! = 3628800 (t=0.000006 sec.)
--
Iterativo: 11! = 39916800 (t=0.000007 sec.)
Recursivo: 11! = 39916800 (t=0.000006 sec.)
--
Iterativo: 12! = 479001600 (t=0.000007 sec.)
Recursivo: 12! = 479001600 (t=0.000006 sec.)
--
Iterativo: 13! = 6227020800 (t=0.000007 sec.)
Recursivo: 13! = 6227020800 (t=0.000007 sec.)
--
Iterativo: 14! = 87178291200 (t=0.000007 sec.)
Recursivo: 14! = 87178291200 (t=0.000007 sec.)
--
Iterativo: 15! = 1307674368000 (t=0.000007 sec.)
Recursivo: 15! = 1307674368000 (t=0.000007 sec.)
--
Iterativo: 16! = 20922789888000 (t=0.000006 sec.)
Recursivo: 16! = 20922789888000 (t=0.000007 sec.)
--
Iterativo: 17! = 355687428096000 (t=0.000008 sec.)
Recursivo: 17! = 355687428096000 (t=0.000007 sec.)
--
Iterativo: 18! = 6402373705728000 (t=0.000007 sec.)
Recursivo: 18! = 6402373705728000 (t=0.000007 sec.)
--
Iterativo: 19! = 121645100408832000 (t=0.000007 sec.)
Recursivo: 19! = 121645100408832000 (t=0.000007 sec.)
--
Iterativo: 20! = 2432902008176640000 (t=0.000007 sec.)
Recursivo: 20! = 2432902008176640000 (t=0.000006 sec.)
--
