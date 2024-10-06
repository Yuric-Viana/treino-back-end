/*Considere os algoritmos abaixo e responda:
Algoritmo 1                 Algoritmo 2    
int count = 0;              for (int i=1;i<=n;i*=2)
int i;                          if(i%2 == 0)
for (i=0; i<n; i++)                 printf( "Olá");
if (i%2 == 1)
count++;                                
                    
a) Algoritmo 1: Calcule o valor final da variável count considerando n = 7 
O valor final será 3.



b) Algoritmo 2: Calcule o número de vezes que o texto “Olá” será impresso considerando n = 12
Olá será impresso 3 vezes.


Para cada um dos algoritmos
c) Calcule o número de operações de:
- Declaração de Variáveis
Há 3 declaração de variável



- Atribuições
Atribuições acontecem quando i é incializado a 2, quando i é multiplicado por 2 em cada iteração do loop, quando cont recebe 0


d) Calcule o número de operações em função de n para cada um dos algoritmos:
- Comparação "menor que"
O número de comparações é aproximadamente log na base 2(n), já que i dobra a cada iteração.


- Comparação "igual a"
Não há comparações "igual a"


- Incremento no melhor caso
No melhor caso, o incremento ocorre sempre, ou seja, uma vez por iteração. Então é 
log na base 2(n)



- Incremento no pior caso 
o pior caso tambem ocorre log na base 2(n)
*/