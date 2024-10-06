#include <stdio.h>

int main() {

    int nota = 53;
    char disciplina[10] = "AEDS";

    if( nota >= 60 ) printf( "O aluno foi aprovado em %s\n", disciplina );
    else printf( "O aluno foi reprovado em %s", disciplina );

    return 0;
}