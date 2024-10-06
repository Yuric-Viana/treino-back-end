/*Implemente um programa que leia um número inteiro com três dígitos (no formato CDU -
centena, dezena e unidade) e mostre o número invertido (no formato UDC)*/

#include <stdio.h>

int main() {

    int centena, dezena, unidade, num;

    printf( "Informe um numero inteiro de 3 digitos:\n" );
    scanf( "%d", &num );

    centena = num / 100;
    dezena = ( num / 10 ) % 10;
    unidade = num % 10;

    printf( "O numero %d agora foi invertido e virou %d.", num, ( unidade * 100 + dezena * 10 + centena ) );


    return 0;
}