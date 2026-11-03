#include <stdio.h>

int main() {
    int opcao;
    int resultado_scanf;
    double num1, num2;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        do {
            printf("\n--- CALCULADORA ---\n");
            printf("1. Adicao\n");
            printf("2. Subtracao\n");
            printf("3. Multiplicacao\n");
            printf("4. Divisao\n");
            printf("5. Sair\n");
            printf("Escolha uma opcao (1 a 5): ");

            resultado_scanf = scanf("%d", &opcao);

            if (resultado_scanf != 1) {
                printf("Erro: Opcao invalida! Digite um numero inteiro entre 1 e 5.\n");
                while (getchar() != '\n');
            } else {
                char proximo = getchar();
                if (proximo != '\n') {
                    while (getchar() != '\n');
                    printf("Erro: Opcao invalida! Digite um numero inteiro entre 1 e 5.\n");
                    continue;
                }

                if (opcao < 1 || opcao > 5) {
                    printf("Erro: Opcao invalida! Digite um numero entre 1 e 5.\n");
                } else {
                    break;
                }
            }
        } while (1);

        if (opcao == 5) {
            printf("Encerrando o programa. Ate logo!\n");
            break;
        }

        printf("Digite o primeiro numero: ");
        while (scanf("%lf", &num1) != 1) {
            while (getchar() != '\n');
            printf("Erro: Entrada invalida! Digite um numero: ");
        }
        while (getchar() != '\n');

        printf("Digite o segundo numero: ");
        while (scanf("%lf", &num2) != 1) {
            while (getchar() != '\n');
            printf("Erro: Entrada invalida! Digite um numero: ");
        }
        while (getchar() != '\n');

        switch (opcao) {
            case 1:
                printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 == 0.0) {
                    printf("Erro: Divisao por zero nao e permitida!\n");
                } else {
                    printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                }
                break;
        }

        do {
            printf("Deseja continuar? (s/n): ");
            scanf(" %c", &continuar);
            while (getchar() != '\n');

            if (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                printf("Erro: Resposta invalida! Digite 's' para sim ou 'n' para nao.\n");
            }
        } while (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N');

        if (continuar == 'n' || continuar == 'N') {
            printf("Encerrando o programa. Ate logo!\n");
        }
    }

    return 0;
}


