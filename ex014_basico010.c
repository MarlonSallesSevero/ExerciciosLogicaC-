/*14.Faça um programa que gerencie o estoque de um mercado e:
 Crie e leia um vetor de 5 produtos, com os dados: código (inteiro), nome
(máximo 15 letras), preço e quantidade.
 Leia um pedido, composto por um código de produto e a quantidade. Localize
este código no vetor e, se houver quantidade suficiente para atender ao
pedido integralmente, atualize o estoque e informe o usuário. Repita este
processo até ler um código igual a zero.
Se por algum motivo não for possível atender ao pedido, mostre uma mensagem
informando qual erro ocorreu.*/


int main(){


int qtd = 0;
int codigo = 1;
struct produtos{

    int cod;
    char nome[15];
    float prec;
    int quantid;
    }pd[1];


    for(int i = 0; i < 1; i++){
        printf("Informe o cod do %i produto:", i + 1);
            scanf("%i",&pd[i].cod);
        printf("Informe o nome do %i produto:", i + 1);
            scanf("%s",&pd[i].nome);
        printf("Informe o preco do %i produto:", i + 1);
            scanf("%f",&pd[i].prec);
          printf("Informe a quantidade total de estoque do %i produto:", i + 1);
            scanf("%i",&pd[i].quantid);
        printf("*******\n");
    }

    while(codigo != 0){
        printf("Informe o codigo do item a ser add:");
            scanf("%i", &codigo);
        printf("*****\n");
        for(int j = 0; j < 1; j++){
            if(pd[j].cod == codigo){
                printf("Temos no estoque este item!!\n Quantos voce quer levar?");
                    scanf("%i", &qtd);
                if(pd[j].quantid >= qtd){
                    pd[j].quantid = pd[j].quantid - qtd;
                    printf("Otimo, ainda temos %i deste item\n",pd[j].quantid);
                }else{
                    printf("Estoque Insuficiente, temos somente %i deste item\n",pd[j].quantid);
                }
            }else if(codigo == 0){
                for(int j = 0; j < 1; j++){
                    printf("O produto %i:%s ficou com um estoque de %i apos essa compra!",pd[j].cod,pd[j].nome,pd[j].quantid);
                        break;
                }
            }
        }
    }
}
