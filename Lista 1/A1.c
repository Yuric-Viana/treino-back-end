/*mplemente um algoritmo que solicite ao usuário um número inteiro n (digitado) e
posteriormente o sistema mostra o sucessor de n (ex. se o usuário digitou 15, o sistema deverá
imprimir 16)*/


#include <stdio.h>

int main() {

    int number;

    printf( "Informe um numero inteiro: \n" );
    scanf( "%d", &number );

    printf( "O sucessor de %d eh: %d", number, number + 1 );

    return 0;
}