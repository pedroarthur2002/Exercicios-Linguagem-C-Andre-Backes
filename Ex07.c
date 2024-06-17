#include <stdio.h>
#include <string.h>

int main(){
    char str[50], inv_str[50];
    fgets(str, 50, stdin);
    for (int i = strlen(str); i >= 0; i--){
        printf("%c", str[i]);
    }

    if (strcmp(str, inv_str) == 0){
        printf("PALINDROMO");
    } else{
        printf("NAO E PALINDROMO");
    }

    return 0;
}