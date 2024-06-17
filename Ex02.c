#include <stdio.h>

int main(){
    char str[50];
    fgets(str, 50, stdin);
    for (int i = 0; i < 4; i++){
        printf("%c", str[i]);
    }
    
    return 0;
}