#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno
{
    int matricula;
    char nome[50];
    float nota;
};

int main(){
    struct aluno *alunos;
    int n;
    //le quantidade de alunos
    scanf("%d", &n);
    // aloca uma unica struct
    alunos = (struct aluno *) malloc(n * sizeof(struct aluno));
    for(int i = 0; i < n; i++){
        getchar(); //descarta o \n do scanf
        alunos[i].matricula = i+1;
        fgets(alunos[i].nome, 50, stdin);
        scanf("%f", &alunos[i].nota);
    }
    return 0;
}