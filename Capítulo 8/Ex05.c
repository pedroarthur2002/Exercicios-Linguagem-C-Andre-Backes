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
    ponto p;

    printf("Digite o ponto superior esquerdo e o ponto inferior direito:");
    scanf("%d%d%d%d", &r.p1.x, &r.p1.y, &r.p2.x, &r.p2.y);

    printf("Digite as coodernadas de um ponto (x,y): ");
    scanf("%d%d", &p.x, &p.y);

    if(p.x < r.p1.x || p.x > r.p2.x)
    return 0;
}