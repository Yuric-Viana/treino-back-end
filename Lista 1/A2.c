/*Implemente um algoritmo que solicita o valor de 3 notas (n1, n2 e n3) e depois mostra: a soma,
a média e o produto das notas.*/

#include <stdio.h>

int main () {

    int num1, num2, num3;

    printf( "Insira a primeira nota:\n " );
    scanf( "%d", &num1 );
    printf( "Insira segunda nota:\n" );
    scanf( "%d", &num2 );
    printf( "Informe a terceira nota:\n " );
    scanf( "%d", &num3 );

    printf( "A soma das 3 notas eh: %d\n", ( num1 + num2 + num3 ) );
    printf( "A media das notas eh: %d\n ", ( num1 + num2 + num3 )/3 );
    printf( "O produto das notas eh: %d\n", ( num1*num2*num3 ) );

    return 0;
}