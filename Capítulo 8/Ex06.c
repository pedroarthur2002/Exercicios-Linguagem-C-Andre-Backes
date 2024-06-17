#include <stdio.h>

typedef struct aluno{
    int matricula;
    char nome[50];
    float notas[3];
} aluno;

int main(){
    float media[5];
    aluno aluno[5];
    float soma, maior;
    int indice_aluno;
    for (int i = 0; i < 5; i++){
        printf("Digite a matricula do aluno %d:", i+1);
        scanf("%d", &aluno[i].matricula);
        setbuf(stdin, NULL);
    
        printf("Digite o nome do aluno %d:", i+1);
        fgets(aluno[i].nome, 50, stdin);     

        printf("Digite as tres notas do aluno %d:", i+1);
        scanf("%f%f%f", &aluno[i].notas[0], &aluno[i].notas[1], &aluno[i].notas[2]);
        setbuf(stdin, NULL);
    }

    for (int i = 0; i < 5; i++){
        soma += aluno[i].notas[0] + aluno[i].notas[1] + aluno[i].notas[2];
        media[i] = soma / 3;
        soma = 0;
    }

    maior = media[0];
    for (int j = 1; j < 5; j++){
        if (media[j] > maior){
            maior = media[j];
            indice_aluno = j;
        }
    }

    printf("O aluno: %s", aluno[indice_aluno].nome);
    printf("Nota 1: %f\nNota 2: %f\nNota 3: %f", aluno[indice_aluno].notas[0], aluno[indice_aluno].notas[1], aluno[indice_aluno].notas[2]);
    return 0;
}