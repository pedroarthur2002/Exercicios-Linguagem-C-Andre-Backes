#include <stdio.h>
#include <math.h>

typedef struct ponto{
    int x;
    int y;
} ponto;

int main(){
    ponto p;
    int s, d;
    printf("(x,y): ");
    scanf("%d%d", &p.x, &p.y);
    
    s = (p.x*p.x + p.y*p.y);
    d = sqrt(s);

    printf("Distancia ate a origem: %d", d);
    return 0;
}