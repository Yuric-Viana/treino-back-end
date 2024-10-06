#include <stdio.h>

int main() {

    int lines;

    printf( "Informe a quantidade de linhas da arvore de natal:\n" );
    scanf( "%d", &lines );

    for( int i = 1; i <= lines; i++ ) {
        for( int j = 1; j <= lines - i; j++ ) {
            printf( " " );
        }
        printf( "#" );
        for( int k = 1; k <= 2 * i - 3; k++ ) {
            printf( "*" );
        }
        if( i != 1 ) {
            printf( "#" );
        }
        printf( "\n" );
    }



    return 0;
}