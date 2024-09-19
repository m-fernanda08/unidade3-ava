#include <stdio.h>

int fat(int n){
    if(n == 0 || n == 1){
        return 1;
    }else{
        return n * fat(n-1);
    }
}

int fibo(int n){
    if(n <= 1){
        return n;
    }else{
        return fibo(n-1) + fibo(n-2);
    }
}

int mdc(int a, int b){
    if(b == 0){
        return a;
    }else{
        return mdc(b, a % b);
    }
}

int main(){
    int escolha, num, num1, num2;

    printf("escolha uma opção: \n");
    printf("1. Calcular fatorial.\n");
    printf("2. Calcular o N-ésimo termo da sequência de Fibonacci.\n");
    printf("3. Calcular o MDC de dois números.\n");
    printf("Digite sua escolha (1, 2 ou 3): ");
    scanf("%d", &escolha);

    switch(escolha){
            case 1:
            printf("insira um valor para calcular o fatorial: ");
            scanf("%d", &num);
            if(num < 0){
                printf("fatorial não definido para números negativos.\n");
            }else{
                printf("fatorial de %d é: %d\n", num, fat(num));
            }
            break;

        case 2:
            printf("insira um valor para N para calcular o N-ésimo termo da sequência de Fibonacci: ");
            scanf("%d", &num);
            if(num < 0){
                printf("a sequência não está definida para números negativos.\n");
            }else{
                printf("o %d-ésimo termo da sequência é: %d\n", num, fibo(num));
            }
            break;

        case 3:
            printf("insira o primeiro número: ");
            scanf("%d", &num1);
            printf("insira o segundo número: ");
            scanf("%d", &num2);
            if(num2 == 0 && num1 == 0){
                printf("o MDC não está definido.\n");
            }else{
                printf("o MDC de %d e %d é: %d\n", num1, num2, mdc(num1, num2));
            }
            break;

        default:
            printf("Opção inválida.\n");
            break;
    }
}