#include <stdio.h>

int main() {

    int lines;

    printf( "Informe a quantidade de linhas da arvore de natal (maior que 0):\n" );
    scanf( "%d", &lines );

    for( int i = 1; i <= lines; i++ ) {
        for( int k = 1; k <= lines - i; k++ ) {
            printf( "a" );
        }
       
        // for (int j = 1; j <= 2 * i - 1; j++) {
        //     printf( "*" );
        // }
        printf("\n");
    }
    

    return 0;
}