#include <stdio.h>

int main(){
    char str[5];
    int contador = 0;
    fgets(str, 5, stdin);
    for (int i = 0; str[i] != '\0'; i++){
        contador += 1;
    }
    printf("Tamanho da string: %d", contador);
    return 0;
}