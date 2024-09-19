#include <stdio.h>

int mdc(int a, int b){
    if(b == 0){
        return a;
    }else{
        return mdc(b, a % b);
    }
}

int main(){
    int num1, num2;

    printf("insira o primeiro valor: ");
    scanf("%d", &num1);
    printf("insira o segundo valor: ");
    scanf("%d", &num2);

    if(num2 == 0 && num1 == 0){
        printf("o mdc não está definido.\n");
    }else{
        printf("o MDC de %d e %d é: %d\n", num1, num2, mdc(num1, num2));
    }
    return 0;
}