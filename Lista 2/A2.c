/* Escreva um programa que recebe um ano do usuário e imprime na tela todos os anos bissextos
do ano 1 até o ano digitado. Utilize a estrutura de repetição while*/

#include <stdio.h>

int main() {

    int ano_Bissexto = 1, ano;

    printf( "Informe um ano qualquer:\n" );
    scanf( "%d", &ano );

    printf( "Sao bissexto os anos: \n" );
    while( ano_Bissexto < ano ) {
        if( ano_Bissexto % 4 == 0 ) {
            printf( "%d\n", ano_Bissexto );
        }
        
        ano_Bissexto++;
    }

    return 0;
}