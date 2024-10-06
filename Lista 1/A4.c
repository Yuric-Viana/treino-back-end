/* Implemente um programa que leia a quantidade de eleitores de um município, o número de
votos brancos, nulos e válidos. Calcule e imprima o percentual de cada um dos tipos de votos
(brancos, nulos e válidos).*/

#include <stdio.h>

int main() {

    double eleitores, votos_Brancos, votos_Nulos, votos_Validos;

    printf( "Informe a quantidade de eleitores do seu municipio:\n" );
    scanf( "%lf", &eleitores );

    printf( "Informe o numero de votos brancos:\n" );
    scanf( "%lf", &votos_Brancos );

    printf( "Informe o numero de votos nulos:\n" );
    scanf( "%lf", &votos_Nulos );

    votos_Validos = eleitores - ( votos_Brancos + votos_Nulos );

    printf( "O numero de votos validos foi de: %.2f\n", votos_Validos );
    printf( "O percentual de votos brancos eh de: %.2f%%\n", ( ( eleitores/votos_Brancos ) * 100 ) );
    printf( "O percental de votos nulos eh de: %.2f%%\n", ( ( votos_Nulos/eleitores ) * 100 ) );
    printf( "O percentual de votos validos eh de: %.2f%% \n", ( votos_Validos/eleitores ) * 100 );

    return 0;
}