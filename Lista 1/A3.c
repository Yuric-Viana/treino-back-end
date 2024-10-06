/* Implemente um programa que leia dois números reais e armazene-os em duas variáveis (ex.:
A e B). Em seguida, troque dos valores das variáveis de forma que a primeira variável passe a ter
o valor da segunda, e vice-versa. Ao final, imprima os valores finais das variáveis.*/

#include <stdio.h>

int main() {

    float a = 10.5, b = 28.39, aux;

    printf( "A nota A ficou com valor %.2f e a nota B fiou com o valor %.2f.\n", a, b );

    aux = a;
    a = b;
    b = aux;

    printf( "Agora a nota A passa a ser %.2f e a nota B passa a ser %.2f", a, b);

    return 0;
}