float totalPagar(float total){

float avist, aprazo2x,aprazo3x,juros,totalJuros;
int formSe,qtdvez,i;

juros = 0.03;
avist = total - (total * 0.1);
aprazo2x = total;
printf("Informe a forma de Pagamento!\n1-A VISTA\n2-A PRAZO 2X\n3-A PRAZO 3x a 10x\n >>>");
    scanf("%i",&formSe);

if(formSe < 1 || formSe > 3){
    return printf("Forma de Pagamento Invalida!");
}else if(formSe == 1){
    return printf("Valor total a Pagar igual a: %.2f",avist);
    }else if(formSe == 2){
        return printf("Valor total a Pagar igual a: %.2f",aprazo2x);
    }else if(formSe == 3){
        printf("Informe em quantas Vezes de 3x a 10x:");
            scanf("%i",&qtdvez);
            if(qtdvez < 3 || qtdvez > 10){
                return printf("Numero Invalido");
            }else if (total > 100){
                for(i = 0; i <= qtdvez; i++){
                    total = total + (juros * total);
                }
                return printf("O valor total em %ix ficou igual a: %.2f",qtdvez,total);
        }else{
            printf("Ficou um valor de %.2f em %ix",total/qtdvez,qtdvez);
        }
    }
}

int main(){

float total;
printf("Informe o valor total da venda:");
    scanf("%f",&total);
totalPagar(total);
}
