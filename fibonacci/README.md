# Sequência de Fibonacci

### Algoritmo para a comparação entre métodos iterativo e recursivo do cálculo da sequência de Fibonacci.

## Sobre o algoritmo:
O algoritmo criado executa duas funções: uma iterativa e uma recursiva, ambas para o cálculo dos mesmos números.  
Utilizei a biblioteca <time.h> para calcular o tempo de execução de cada função, com arredondamento para 3 casas decimais.  
O algoritmo executa o teste para os primeiros 46 números da sequência de Fibonacci.  
Resultados são registrados em um arquivo chamado "resultados-fibonacci.csv"  

-----
Linguagem: C  
SO utilizado no experimento: Zorin OS.  
Compilador: gcc

### Como compilar:
Entrando na pasta "fibonacci", utilize o comando abaixo:  
gcc fibonacci-iterativo-vs-recursivo.c -o fibonacci

O comando irá gerar o arquivo "fibonacci". Para executá-lo, digite:  
./fibonacci

-----

## Resultados:
A função iterativa mantém velocidade constante de execução, tão rápido que não demorou mais do que 1 milionésimo de segundo.  
A função recursiva, por outro lado, cresceu exponencialmente conforme a função f(n) aumentava.

## Pontos a se considerar:
Em meus testes, ambas as funções geram números diferentes da sequência de Fibonacci em f(n) quando n>=47. Acredito que o motivo tenha sido a falta de tamanho nas variáveis (escolhi int para elas).  
Como os resultados até n=46 cumpriram o objetivo de comparação entre os métodos, não me esforcei para corrigir esse problema.
