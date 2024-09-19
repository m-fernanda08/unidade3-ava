#include <stdio.h>

int fibo(int n){
    if(n <= 1){
        return n;
    }else{
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main(){
    int num;

    printf("insira o valor de N: ");
    scanf("%d", &num);

    if(num < 0){
        printf("sequência não definida para número negativos.\n");
    }else{
        printf("o %d-ésimo termo da sequência de Fibonacci é: %d\n", num, fibo(num));
    }
    return 0;
}