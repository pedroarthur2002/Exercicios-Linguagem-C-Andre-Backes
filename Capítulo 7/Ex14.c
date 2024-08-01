#include <stdio.h>

int main(){
    char str[50];
    fgets(str, 50, stdin);

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == ' ' || str[i] == '\n'){
            continue;
        } else{
            str[i] += 3;
        }
    }

    printf("%s", str);

    return 0;
}