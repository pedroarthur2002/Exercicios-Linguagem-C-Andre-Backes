#include <stdio.h>
#include <math.h>

typedef struct ponto{
    int x;
    int y;
} ponto;

int main(){
    ponto p1,p2;
    int d;
    printf("Ponto 1(x,y):");
    scanf("%d%d", &p1.x, &p1.y);

    printf("Ponto 2(x,y):");
    scanf("%d%d", &p2.x, &p2.y);
    
    d = sqrt(pow((p2.x-p1.x),2) + pow((p2.y-p1.y),2));
    printf("Distancia entre os dois pontos: %d", d);
    return 0;
}