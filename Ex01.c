#include <stdio.h>

int main(){
    char str[20];
    fgets(str, 20, stdin);
    printf(str);
    return 0;
}