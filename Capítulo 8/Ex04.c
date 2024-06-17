#include <stdio.h>
#include <math.h>

typedef struct ponto{
    int x;
    int y;
} ponto;

typedef struct retangulo{
    ponto p1;
    ponto p2;
} retangulo;

int main(){
    retangulo r;
    int altura, comprimento, area, diagonal, perimetro;
    printf("Ponto superior esquerdo e ponto inferior direito (x,y):");
    scanf("%d%d%d%d", &r.p1.x, &r.p1.y, &r.p2.x, &r.p2.y);

    altura = abs(r.p1.y-r.p2.y);
    comprimento = abs(r.p2.x-r.p1.x);
    area = altura*comprimento;

    diagonal = sqrt(pow(altura,2) + pow(comprimento,2));
    perimetro = 2*(altura + comprimento);

    printf("Area: %d\nDiagonal: %d\nPerimetro: %d", area, diagonal, perimetro);

    return 0;
}