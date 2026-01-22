# Sequência de Fibonacci

### Algoritmo para a comparação entre métodos iterativo e recursivo do cálculo da sequência de Fibonacci.

## Sobre o algoritmo:
O algoritmo criado executa duas funções: uma iterativa e uma recursiva, ambas para o cálculo dos mesmos números.  
Utilizei a biblioteca <time.h> para calcular o tempo de execução de cada função, arredondada para 3 casas decimais.  
O algoritmo executa o teste para os primeiros 46 números da sequência de Fibonacci.

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

### Abaixo, está a saída do código em execução:

Iterativo: f(1)=1 (t=0.000 seg.)
Recursivo: f(1)=1 (t=0.000 seg.)
---
Iterativo: f(2)=1 (t=0.000 seg.)
Recursivo: f(2)=1 (t=0.000 seg.)
---
Iterativo: f(3)=2 (t=0.000 seg.)
Recursivo: f(3)=2 (t=0.000 seg.)
---
Iterativo: f(4)=3 (t=0.000 seg.)
Recursivo: f(4)=3 (t=0.000 seg.)
---
Iterativo: f(5)=5 (t=0.000 seg.)
Recursivo: f(5)=5 (t=0.000 seg.)
---
Iterativo: f(6)=8 (t=0.000 seg.)
Recursivo: f(6)=8 (t=0.000 seg.)
---
Iterativo: f(7)=13 (t=0.000 seg.)
Recursivo: f(7)=13 (t=0.000 seg.)
---
Iterativo: f(8)=21 (t=0.000 seg.)
Recursivo: f(8)=21 (t=0.000 seg.)
---
Iterativo: f(9)=34 (t=0.000 seg.)
Recursivo: f(9)=34 (t=0.000 seg.)
---
Iterativo: f(10)=55 (t=0.000 seg.)
Recursivo: f(10)=55 (t=0.000 seg.)
---
Iterativo: f(11)=89 (t=0.000 seg.)
Recursivo: f(11)=89 (t=0.000 seg.)
---
Iterativo: f(12)=144 (t=0.000 seg.)
Recursivo: f(12)=144 (t=0.000 seg.)
---
Iterativo: f(13)=233 (t=0.000 seg.)
Recursivo: f(13)=233 (t=0.000 seg.)
---
Iterativo: f(14)=377 (t=0.000 seg.)
Recursivo: f(14)=377 (t=0.000 seg.)
---
Iterativo: f(15)=610 (t=0.000 seg.)
Recursivo: f(15)=610 (t=0.000 seg.)
---
Iterativo: f(16)=987 (t=0.000 seg.)
Recursivo: f(16)=987 (t=0.000 seg.)
---
Iterativo: f(17)=1597 (t=0.000 seg.)
Recursivo: f(17)=1597 (t=0.000 seg.)
---
Iterativo: f(18)=2584 (t=0.000 seg.)
Recursivo: f(18)=2584 (t=0.000 seg.)
---
Iterativo: f(19)=4181 (t=0.000 seg.)
Recursivo: f(19)=4181 (t=0.000 seg.)
---
Iterativo: f(20)=6765 (t=0.000 seg.)
Recursivo: f(20)=6765 (t=0.000 seg.)
---
Iterativo: f(21)=10946 (t=0.000 seg.)
Recursivo: f(21)=10946 (t=0.001 seg.)
---
Iterativo: f(22)=17711 (t=0.000 seg.)
Recursivo: f(22)=17711 (t=0.001 seg.)
---
Iterativo: f(23)=28657 (t=0.000 seg.)
Recursivo: f(23)=28657 (t=0.002 seg.)
---
Iterativo: f(24)=46368 (t=0.000 seg.)
Recursivo: f(24)=46368 (t=0.003 seg.)
---
Iterativo: f(25)=75025 (t=0.000 seg.)
Recursivo: f(25)=75025 (t=0.004 seg.)
---
Iterativo: f(26)=121393 (t=0.000 seg.)
Recursivo: f(26)=121393 (t=0.007 seg.)
---
Iterativo: f(27)=196418 (t=0.000 seg.)
Recursivo: f(27)=196418 (t=0.010 seg.)
---
Iterativo: f(28)=317811 (t=0.000 seg.)
Recursivo: f(28)=317811 (t=0.014 seg.)
---
Iterativo: f(29)=514229 (t=0.000 seg.)
Recursivo: f(29)=514229 (t=0.022 seg.)
---
Iterativo: f(30)=832040 (t=0.000 seg.)
Recursivo: f(30)=832040 (t=0.035 seg.)
---
Iterativo: f(31)=1346269 (t=0.000 seg.)
Recursivo: f(31)=1346269 (t=0.057 seg.)
---
Iterativo: f(32)=2178309 (t=0.000 seg.)
Recursivo: f(32)=2178309 (t=0.092 seg.)
---
Iterativo: f(33)=3524578 (t=0.000 seg.)
Recursivo: f(33)=3524578 (t=0.149 seg.)
---
Iterativo: f(34)=5702887 (t=0.000 seg.)
Recursivo: f(34)=5702887 (t=0.241 seg.)
---
Iterativo: f(35)=9227465 (t=0.000 seg.)
Recursivo: f(35)=9227465 (t=0.392 seg.)
---
Iterativo: f(36)=14930352 (t=0.000 seg.)
Recursivo: f(36)=14930352 (t=0.631 seg.)
---
Iterativo: f(37)=24157817 (t=0.000 seg.)
Recursivo: f(37)=24157817 (t=1.031 seg.)
---
Iterativo: f(38)=39088169 (t=0.000 seg.)
Recursivo: f(38)=39088169 (t=1.671 seg.)
---
Iterativo: f(39)=63245986 (t=0.000 seg.)
Recursivo: f(39)=63245986 (t=2.692 seg.)
---
Iterativo: f(40)=102334155 (t=0.000 seg.)
Recursivo: f(40)=102334155 (t=4.327 seg.)
---
Iterativo: f(41)=165580141 (t=0.000 seg.)
Recursivo: f(41)=165580141 (t=7.004 seg.)
---
Iterativo: f(42)=267914296 (t=0.000 seg.)
Recursivo: f(42)=267914296 (t=11.321 seg.)
---
Iterativo: f(43)=433494437 (t=0.000 seg.)
Recursivo: f(43)=433494437 (t=18.315 seg.)
---
Iterativo: f(44)=701408733 (t=0.000 seg.)
Recursivo: f(44)=701408733 (t=29.617 seg.)
---
Iterativo: f(45)=1134903170 (t=0.000 seg.)
Recursivo: f(45)=1134903170 (t=47.920 seg.)
---
Iterativo: f(46)=1836311903 (t=0.000 seg.)
Recursivo: f(46)=1836311903 (t=77.535 seg.)
---
