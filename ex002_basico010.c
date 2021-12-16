/*Faça um programa que armazene em um registro de dados (estrutura composta) os
dados de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F),
CPF, Data de Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa
(string de até 30 caracteres) e Salário. Os dados devem ser digitados pelo usuário,
armazenados na estrutura e exibidos na tela*/

/*struct biblioteca{
char nome[50];
int ano;
char autor[20];
}livro;*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

struct funcionario{
    char nome[15];
    int id;
    char sex[1];
    char cpf[11];
    int dtAnDia;
    int dtAnMes;
    int dtAnAno;
    int cod;
    char carg[30];
    float sal;
}fun;

printf("Informe o nome do funcionario:");
    scanf("%s",&fun.nome);
printf("Informe a idade do funcionario:");
    scanf("%i",&fun.id);
printf("Informe o sexo do funcionario (M/F):");
    scanf("%s",&fun.sex);
printf("Informe o cpf do funcionario:");
    scanf("%s",&fun.cpf);
printf("**Informe o dia, mes e ano do aniversario do funcionario**\n");
printf("Dia:\n");
    scanf("%i",&fun.dtAnDia);
printf("Mes:\n");
    scanf("%i",&fun.dtAnMes);
printf("Ano:\n");
    scanf("%i",&fun.dtAnAno);
printf("Informe o cod do funcionario de 0 - 99:");
    scanf("%i",&fun.cod);
printf("Informe o cargo do funcionario:");
    scanf("%s",&fun.carg);
printf("Informe o salario do funcionario:");
    scanf("%f",&fun.sal);


printf("O novo colaborador se chama %s e tem a idade de %i eh do sexo: %s\nCom o cpf : %s nasceu no dia %i/%i/%i ficou com o cod: %i\nTrabalhar como %s com salario no valor de %.2f",fun.nome,fun.id,fun.sex,fun.cpf,fun.dtAnDia,fun.dtAnMes,fun.dtAnAno,fun.cod,fun.carg,fun.sal);
}
