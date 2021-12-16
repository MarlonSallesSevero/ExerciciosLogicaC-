#include <stdio.h>

int main(void){

int n;

n = 1;

while(n <= 50){
    if(n % 2 == 0){
        printf("%i\n",n);
    }
n = n + 1;
}
};
