/*Crie uma estrutura representando os alunos de um determinado curso. A estrutura
deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda
prova e nota da terceira prova.
(b) Encontre o aluno com maior nota da primeira prova.


(c) Encontre o aluno com maior média geral.
(d) Encontre o aluno com menor média geral



(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6
para aprovação.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){

int maiorNt = 0,menorNt = 0;
char nmAl[10];

struct aluno{
    int matri;
    char nome[10];
    float nt01;
    float nt02;
    float nt03;
    float media;
    }al[2];


struct MelhorAluno{
    int matri;
    char nome[10];
    float nota;

    }MelhorAl[1];

struct PiorAl{
    int matri;
    char nome[10];
    float nota;
    }PiorAl;

for(int i = 0; i < 2; i++){
    printf("Informe o nome do %i aluno:",i+1);
        scanf("%s",&al[i].nome);
    printf("Informe a matricula do %s:",al[i].nome);
        scanf("%i",&al[i].matri);
    printf("*Informe a nota das 3 provas*\n");
    printf("Prova 01:");
        scanf("%f",&al[i].nt01);
    printf("Prova 02:");
        scanf("%f",&al[i].nt02);
    printf("Prova 03:");
        scanf("%f",&al[i].nt03);
    al[i].media = (al[i].nt01 + al[i].nt02 + al[i].nt03)/ 3;

    if(i == 0){
        maiorNt = al[i].media;
        menorNt = al[i].media;
        }else if(al.media > maiorNt){
            MelhorAl[0].nome = al[i].nome; // confirmar com a professora
            MelhorAl.matri = al[i].matri;
            MelhorAl.nota = al[i].media;
        }else if(al[i].media < menorNt){
            PiorAl.nome = al[i].nome;
            PiorAl.matri = al[i].matri;
            PiorAl.nota = al[i].media;
        }
    }
for(int j = 0; j < 2; j++){
    printf("O %s com numero de matricula %i esta:",al[j].nome,al[j].matri);
    if(al[j].media > 6){
        printf("APROVADO\n");
        }else{
        printf("REPROVADO\n");
        }
    }
}
