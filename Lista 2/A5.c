/*Escreva um programa que leia a altura de 5 homens e 5 mulheres, e imprima a média de altura
masculina, feminina e geral*/

#include <stdio.h>

int main() {

    float soma_Masculina = 0, soma_Feminina = 0, homens, mulheres;

    printf( "Informe a altura de 5 homens:\n" );
    for( int i = 1; i <= 5; i++ ) {
        scanf( "%f", &homens );
        soma_Masculina += homens;
    }
    printf( "A media de altura masculina eh: %.2f", soma_Masculina / 5 );
    
    printf( "\nInforme a altura de 5 mulheres:\n" );
    for( int i = 1; i <= 5; i++ ) {
        scanf( "%f", &mulheres );
        soma_Feminina += mulheres;
    }
    printf( "A media de altura feminina eh: %.2f", soma_Feminina / 5 );
    
    printf( "\nA media geral eh: %.2f", ( soma_Masculina + soma_Feminina ) / 10 );

    return 0;
}