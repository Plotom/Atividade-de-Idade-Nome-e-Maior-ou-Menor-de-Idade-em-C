#include <stdio.h>
#include <locale.h>

int main() {
    char nome[100];
    int idade;

    setlocale(LC_ALL, "Portuguese");

    do {
        printf("\nDigite o nome: ");
        scanf(" %[^\n]", nome);

        printf("Digite a idade (0 para sair): ");
        scanf("%d", &idade);

        if (idade == 0) {
            printf("\nPrograma encerrado.\n");
            break;
        }

        printf("\nNome: %s\n", nome);
        printf("Idade: %d anos\n", idade);

        if (idade >= 18) {
            printf("Resultado: Maior de idade.\n");
        } else {
            printf("Resultado: Menor de idade.\n");
        }

    } while (idade != 0);

    return 0;
}

