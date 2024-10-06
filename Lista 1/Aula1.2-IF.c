#include <stdio.h>

int main() {

    int num;

    printf( "Informe um numero:\n" );
    scanf( "%d", &num );

    if( num % 2 == 0 ) {
        printf( "O numero %d eh par.\n", num );
    
    } else printf( "O numero %d eh impar\n", num );

    if( num > 0) printf( "O numero %d eh positivo\n", num );
    else printf( "O numero %d eh negativo", num );

    return 0;
}