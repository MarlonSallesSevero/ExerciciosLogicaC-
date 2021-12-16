#include <stdio.h>

int main(){

float pes_terra,pes_inter;
int num_planeta;
printf("Informe seu Peso no planeta terra: ");
scanf("%f",&pes_terra);

printf("1 - Mercurio\n");
printf("2 - Venus\n");
printf("3 - Marte\n");
printf("4 - Jupiter\n");
printf("5 - Suturno\n");
printf("6 - Urano\n");
printf("Informe o planeta que quer ver seu peso:");
scanf("%i",&num_planeta);

switch (num_planeta){
       case 1:
       pes_inter = (pes_terra/10)*0.37;
       printf("Seu peso em mercurio eh:%.2f",pes_inter);
        break;
       case 2:
       pes_inter = (pes_terra/10)*0.88;
       printf("Seu peso em Venus eh:%.2f",pes_inter);
         break;
       case 3:
       pes_inter = (pes_terra/10)*0.38;
       printf("Seu peso em Marte eh:%.2f",pes_inter);
        break;
       case 4:
       pes_inter = (pes_terra/10)*2.64;
       printf("Seu peso em Jupiter eh:%.2f",pes_inter);
        break;
       case 5:
       pes_inter = (pes_terra/10)*1.15;
       printf("Seu peso em Suturno eh:%.2f",pes_inter);
        break;
       case 6:
       pes_inter = (pes_terra/10)*1.17;
       printf("Seu peso em Urano eh:%.2f",pes_inter);
        break;
    }
}







/*

escolha num_planeta
       caso "1"
       pes_inter:= (pes_terra/10)*0.37
       escreval("Seu peso em mercurio eh:",pes_inter)

       caso "2"
       pes_inter:= (pes_terra/10)*0.88
       escreval("Seu peso em Venus eh:",pes_inter)

       caso "3"
       pes_inter:= (pes_terra/10)*0.38
       escreval("Seu peso em Marte eh:",pes_inter)

       caso "4"
       pes_inter:= (pes_terra/10)*2.64
       escreval("Seu peso em Jupiter eh:",pes_inter)

       caso "5"
       pes_inter:= (pes_terra/10)*1.15
       escreval("Seu peso em Suturno eh:",pes_inter)

       caso "6"
       pes_inter:= (pes_terra/10)*1.17
       escreval("Seu peso em Urano eh:",pes_inter)
                     outrocaso
                              escreval("Planeta Invalido")

fimescolha


Fimalgoritmo*/
