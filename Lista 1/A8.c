/*Escreva um programa em C para que converta uma quantidade específica de dias em anos
(considerar apenas 365 dias), semanas e dias.
Ex.: 500 dias = 1 ano, 133 semanas e 2 dias*/

#include <stdio.h>

int main() {

    int num, dias, semanas, anos, dias_Restantes;

    printf( "Informe alguma quantidade dias:\n" );
    scanf( "%d", &num );

    anos = num / 365;
    dias = num % 365;
    semanas = dias / 7;
    dias_Restantes = dias % 7;

    printf( "%d dias = %d ano(s), %d semana(s) e %d dia(s)", num, anos, semanas, dias_Restantes );

    return 0;
}