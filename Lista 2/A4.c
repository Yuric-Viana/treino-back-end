/*Desenvolva um algoritmo que leia um valor n entre 0 e 9 e escreva na tela a tabuada
correspondente do número. Para o número 4 por exemplo, seria printado:
4 x 0 = 0
4 x 1 = 4
4 x 2 = 8
...
Utilize a estrutura e repetição for.*/

#include <stdio.h>

int main() {

    int num;

    printf( "Informe um numero entre 0 e 9:\n" );

    do {
        scanf( "%d", &num );

        if( num < 0 || num > 9 ) {
            printf( "Voce digitou um numero invalido. Digite um numero entre 1 e 9:\n" );
        }
    } while ( num < 0 || num  > 9 );

    for( int i = 0; i <= 10; i++ ) {
        printf( "%d x %d = %d\n", num, i, num * i );
    }


    return 0;
}