#include <stdio.h>
#include <string.h>

int main(){
    char str[50];    
    char auxiliar;

    fgets(str, 50, stdin);
    for (int i = strlen(str); i >= 0; i--){
       auxiliar = str[i];
       str[i] = auxiliar;
    }

    printf("%s", str);

    return 0;
}