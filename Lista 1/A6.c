/*. Escreva um programa que receba 2 pontos cartesianos (x, y) e calcule a distância Euclidiana
entre eles.
𝑑 = √(𝑥2 − 𝑥1) 2 + (𝑦2 − 𝑦1) 2 */

#include <stdio.h>
#include <math.h>

int main() {

    double x1, x2, y1, y2, d;

    printf( "Informe o x do primeiro ponto cartesiano:\n" );
    scanf( "%lf", &x1);
    printf( "Informe o y do primeiro ponto cartesiano\n" );
    scanf( "%lf", &y1 );

    printf( "Informe o x do segundo ponto cartesiano:\n" );
    scanf( "%lf", &x2 );
    printf( "Informe o y do segundo ponto cartesiano.\n" );
    scanf( "%lf", &y2 );

    d = sqrt( pow( x2 - x1, 2) + pow( y2 - y1, 2 ) );

    printf( "A distancia euclidiana entre os pontos indicados eh %.2f.", d );

    return 0;
}