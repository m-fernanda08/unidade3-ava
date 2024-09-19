#include <stdio.h>

int fat(int n){
    if(n == 0 || n == 1){
        return 1;
    }else{
        return n * fat(n-1);
    }
}

int main(){
    int num;

    printf("insira um valor inteiro: ");
    scanf("%d", &num);

    if(num < 0){
        printf("fatorial não definido para número negativos.\n");
    }else{
        printf("fatorial de %d é: %d\n", num, fat(num));
    }
    return 0;
}