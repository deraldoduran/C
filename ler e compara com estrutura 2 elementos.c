#include <stdio.h>
#include<stdlib.h>
struct ALUNOS{
    int matricula;
    char nome[30],disciplina[10];
    float nota;
};

typedef struct ALUNOS ALUNOS;
ALUNOS ler(){
    ALUNOS aluno;
    scanf("%s",aluno.nome);
    scanf("%d",&aluno.matricula);
    scanf("%s",aluno.disciplina);
    scanf("%f",&aluno.nota);

    return aluno;
}
ALUNOS compara(ALUNOS aluno1,ALUNOS aluno2){
    ALUNOS aluno;
    if (aluno1.nota==aluno2.nota){
        printf("%s e %s , %.1f",aluno1.nome,aluno2.nome,aluno1.nota);
    }if (aluno1.nota>aluno2.nota){
        printf("%s , %.1f",aluno1.nome,aluno1.nota);
    }if (aluno1.nota<aluno2.nota){
        printf("%s , %.1f",aluno2.nome,aluno2.nota);
    }
}
int main(){
    ALUNOS aluno1,aluno2;
    aluno1=ler();
    aluno2=ler();
    compara(aluno1,aluno2);
    return 0;
}