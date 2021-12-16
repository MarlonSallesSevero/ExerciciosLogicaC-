#include <stdio.h>


main() {
    int n, i,ok, vl_anterior1,vl_anterior2;

    printf("Digite um número: ");
    scanf("%i", &n);

    for(i = 0; i < n; i++){
        if(i == 0){
            printf("%i\n",i);
        }else if(i == 1){
            printf("%i\n",i);
        }else{
            vl_anterior1 = i - 1;
            vl_anterior2 = i - 2;
            ok = vl_anterior1 + vl_anterior2;
            printf("%i\n",ok);
        }
    }
}
