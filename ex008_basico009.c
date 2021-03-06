#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
/*Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos são da
forma: A[i][j] = 2i + 7j - 2 se i < j;
A[i][j] = 3i2 - 1 se i = j;
A[i][j] = 4i3- 5j2+ 1 se i > j:*/
int arr[10][10];

for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
        if(i < j){
            arr[i][j] = (((2 * i) + 7) * j) - 2;
            }else if(i == j){
                arr[i][j] = (3 * (i * 2)) - 1;
            }else{
                arr[i][j] = (4 * i) * 3 - ((5 * j) * 2) + 1;
            }
        }
    }
for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
        printf("[%i][%i] = %i\n",i,j,arr[i][j]);
        }
    }
}
