#include <stdio.h>

int main(){
    char str1[50], str2[50];
    fgets(str1, 50, stdin);
    setbuf(stdin, NULL);

    fgets(str2, 50, stdin);
    if (str1[0] < str2[0]){
        printf("%s%s", str1, str2);
    } else{
        printf("%s%s", str2, str1);
    }

    return 0;
}