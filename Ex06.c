#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    int contador = 0;
    char caractere;
    fgets(str, 50, stdin);

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            contador += 1;
        }
    }

    printf("Digite uma vogal ou consoante: ");
    scanf("%c", &caractere);

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            str[i] = caractere;
        }        
    }

    printf("String modificada: %s", str);
    printf("Quantidade de vogais: %d", contador);

    return 0;
}