/*Escreva um programa que leia dois inteiros e imprima um retângulo com as dimensões
digitadas. Ex.: para os números 3 e 5, seria impresso:
*****
* *
*****
Enquanto que para os números 5 e 3 seria impresso:
***
* *
* *
* *
****/

#include <stdio.h>

int main() {
    
    int a, b;

    printf( "Informe dois numeros inteiros e positivos:\n" );
    scanf( "%d", &a );
    scanf( "%d", &b );

    for( int i = 1; i <= a; i++ ) {
        printf( "*" );
        if( i == 1 || i == a ) {
            for( int k = 1; k <= b - 1; k++ ) {
                printf( "*" );
            }
        }
        if( i > 1 && i < a ) {
            for( int k = 1; k <= b - 2; k++ ) {
                printf( " " );
            }
            printf( "*" );
        }
        printf( "\n" ); 
    }

    return 0;
}