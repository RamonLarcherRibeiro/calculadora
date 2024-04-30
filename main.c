#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operacao;

    do {
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);

        printf("Digite a operação (+, -, *, /, %%): ");
        scanf(" %c", &operacao); // Espaço antes do %c para evitar problemas com o buffer

        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        switch (operacao) {
            case '+':
                resultado = num1 + num2;
                break;
            case '-':
                resultado = num1 - num2;
                break;
            case '*':
                resultado = num1 * num2;
                break;
            case '/':
                resultado = num1 / num2;
                break;
            case '%':
                resultado = (int)num1 % (int)num2;
                break;
            default:
                printf("Operação inválida!\n");
        }

        printf("Resultado: %.2f\n", resultado);

    } while (num1 != 0 || operacao != '0' || num2 != 0);

    printf("Calculadora encerrada. Obrigado!\n");
    return 0;
}
