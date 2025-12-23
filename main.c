#include <stdio.h>
double n1 = 0;
double n2 = 0;
int controle = 0;

void confir(){
    char c;
    printf("Deseja realizar outra operacao? (s/n): ");
    scanf(" %c", &c);
    if(c == 'S' || c == 's'){
        controle = 0;
    }
    else if(c == 'N' || c == 'n'){
        controle = 1;
        printf("Obrigado por usar nossa calculadora! Ate a proxima!");
    }
    else{
        printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.\n");
        confir();
    }
}

void opcoes(){
    int op;
    scanf(" %d", &op);
    switch(op){
    case 1:
        printf("Digite o primeiro numero: ");
        scanf("%lf", &n1);
        printf("Digite o segundo numero: ");
        scanf("%lf", &n2);

        printf("Resultado: %.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
        confir();
        break;

    case 2:
        printf("Digite o primeiro numero: ");
        scanf("%lf", &n1);
        printf("Digite o segundo numero: ");
        scanf("%lf", &n2);

        printf("Resultado: %.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
        confir();
        break;

    case 3:
        printf("Digite o primeiro numero: ");
        scanf("%lf", &n1);
        printf("Digite o segundo numero: ");
        scanf("%lf", &n2);

        printf("Resultado: %.2f * %.2f = %.2f\n", n1, n2, n1 * n2);
        confir();
        break;
        
    case 4:
        printf("Digite o primeiro numero: ");
        scanf("%lf", &n1);
        printf("Digite o segundo numero: ");
        scanf("%lf", &n2);
        if(n2 == 0){
            printf("Erro: Divisao por zero nao eh permitida.\n");
            confir();
        }
        else{
            printf("Resultado: %.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
            confir();
        }
        break; 
        
    case 5:
        printf("Obrigado por usar a calculadora! Ate a proxima.");
        controle = 1;
        break;

    default:
        printf("numero invalido! Digite um numero de 1 a 5 por favor.\n");
        opcoes();
        break;
    }
}

void menu(){
    n1 = 0, n2 = 0;

    printf("===============================\n");
    printf("   Calculadora Simples\n");
    printf("===============================\n");
    printf("Selecione uma operacao:\n");
    printf("1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Sair\n");
    printf("Opcao:\n");
    opcoes();
}

int main(){
    while(controle == 0){
        menu();
    }
}
