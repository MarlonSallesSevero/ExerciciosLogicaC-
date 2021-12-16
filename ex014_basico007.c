/*Faça um programa que padronize uma senha da seguinte forma:
a. Conter no mínimo 8 caracteres;
b. Conter letras;
c. Conter números;*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

char senha[9],letras,vlLetras;
int i, qtdCarc,qtdNum;


printf("Informe uma senha:");
    for(i = 0; i < strlen(senha);i++){
        scanf("%c",&senha[i]);
    }
}
