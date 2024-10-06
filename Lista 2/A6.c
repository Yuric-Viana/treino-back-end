/*Desenvolva um algoritmo que imprima os n primeiros elementos da série de Fibonacci.
Ex.: Se n = 10, imprimir os 10 primeiros números da sequência de Fibonacci*/

#include <stdio.h>

int main() {

    int n = 10, proximo, n1 = 1, n2 = 1;

    for( int i = 1; i <= n; i++ ) {
        printf( "%d", n1 );
        proximo = n1 + n2;
        n1 = n2;
        n2 = proximo;
    }


    return 0;
}