#include <stdio.h>

typedef struct pessoa{
    char nome[50];
    int idade;
    char endereco[50];    
} pessoa;

int main(){
    pessoa p;
    printf("Nome:");
    fgets(p.nome, 50, stdin);

    printf("Idade: ");
    scanf("%d", &p.idade);
    setbuf(stdin, NULL);

    printf("Endereco: ");
    fgets(p.endereco,50,stdin);
    printf("\n");

    printf("Nome: %sIdade: %d\nEndereco: %s", p.nome, p.idade, p.endereco);
}