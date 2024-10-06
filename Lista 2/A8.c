/*Escreva um programa que verifique se um número é palíndromo.
Um número é palíndromo se continua o mesmo caso seus dígitos sejam invertidos.
Exemplos: 454 ou 10501*/

#include <stdio.h>

int main() {

    int num, num_Invertido, aux, temp, loop;

    printf( "Informe um numero qualquer:\n" );
   
    do{

        num_Invertido = 0;
        aux = 0; 
        loop = 0;

        scanf( "%d", &num );

        temp = num;

        while ( num > 0 ) {    

            aux = num % 10;
            num_Invertido = num_Invertido * 10 + aux;
            num /= 10;
        }

        if( num_Invertido == temp ) {
            loop = 1;
            printf( "O numero %d eh um palindromo.", temp );
        } else printf( "O numero nao eh um palindromo.Tente outro numero:\n" );
    
    } while ( loop != 1 );

    return 0;
}