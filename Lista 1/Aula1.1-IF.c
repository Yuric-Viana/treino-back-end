#include <stdio.h>

int main() {

    int num1 = 10, num2 = 20, maior;

    maior = num1;

    if( num2 > maior ) {
        
        maior = num2;
        printf( "O maior numero eh de: %d", maior );

    }   else printf( "O maior numero eh de: %d", maior );


    return 0;
}