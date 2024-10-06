/*Implemente um programa que o usuário informa o valor a ser investido, uma taxa de juros
mensal a ser aplicada ao capital, e o número de meses que irá durar a aplicação. Ao final o
programa deverá mostrar:
• O valor total acumulado ao final período.
• O valor de juros rendidos*/

#include <stdio.h>
#include <math.h>

int main() {

    double valor_Investido, taxa_Juros, meses, juros_Rendido, valor_Recebido, montante;

    printf( "Informe o valor a ser investido durante a capitalizacao:\n" );
    scanf( "%lf", &valor_Investido );

    printf( "Informe a taxa de juros mensal em %%:\n" );
    printf( "%%" );
    scanf( "%lf", &taxa_Juros );

    printf( "Informe a quantidade de meses que ira durar a aplicacao:\n" );
    scanf( "%lf", &meses );

    montante = valor_Investido * pow( 1 + taxa_Juros/100, meses);
    juros_Rendido = montante - valor_Investido;

    printf( "O montante gerado ao final da aplicacao foi de R$%.2f\n", montante );
    printf( "Ao final da aplicacao obteve-se R$%.2f de juros rendido.", juros_Rendido );


    return 0;
}