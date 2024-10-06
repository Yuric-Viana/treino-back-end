/*Escreva um algoritmo que declare um número entre 1 e 20 e peça para o usuário adivinhar qual
é. A cada palpite o programa diz se o número foi mais alto ou mais baixo que o número correto.
Utilize a estrutura e repetição do-while.*/

#include <stdio.h>


int main() {

    int num = 13, num_Adivinha;

    printf( "\nExiste um numero oculto entre 1 e 20 atras desse simbolo do jogo da velha #. Tente adivinha-lo.\n" );

    do {
        scanf( "%d", &num_Adivinha );

        if( num_Adivinha == num )       printf( "Voce acertou! O numero oculto era %d.", num );
        else if( num_Adivinha > num )   printf( "Voce digitou um numero maior que o numero oculto.Tente novamente.\n" );
        else if( num_Adivinha < num )   printf( "Voce digitou um numero menor que o numero oculto.Tente novamente.\n" ); 

    } while( num_Adivinha != num );

    return 0;
}