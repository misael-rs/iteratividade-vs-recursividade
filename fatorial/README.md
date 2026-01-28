# Cálculo de Fatorial - Iterativo vs Recursivo

O objetivo deste diretório é fazer um teste de velocidade no cálculo de fatoriais, comparando a função iterativa com a função recursiva.  

## Método
O programa utiliza a biblioteca <time.h> para fazer a contagem do tempo.  
Para cada um dos métodos, foi separada uma função unicamente para a sua execução.  
Para calcular fatoriais maiores, foram utilizadas variáveis do tipo usigned long, que são significativamente maiores que int.  
O uso de unsigned long permitiu o cálculo de fatoriais até 20!  
Para comparar o tempo de execução, foram calculados fatoriais de 0! a 20! para ambos os métodos, com o tempo utilizado por cada função.  
Resultados foram salvos em arquivo "resultados-fatorial.csv"  

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
Não houve diferença significativa entre os métodos iterativo e recursivo no cálculo de fatoriais de f(0) a f(20).  

## Pontos a se considerar
Há a possibilidade de ter visto f(n) muito pequenos para perceber diferenças significativas no experimento. A quantidade de f(n) testados foi limitada pelo tamanho da variável.  
Verificar se, com variáveis maiores, há diferença significativa entre os métodos testados.  
