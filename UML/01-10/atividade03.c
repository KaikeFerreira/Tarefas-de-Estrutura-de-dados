#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto {
    char nome[50];
    int quantidade;
    float preco;
    struct Produto *proximo;
};

int main() {

    // Criando os ponteiros
    struct Produto *produto1;
    struct Produto *produto2;
    struct Produto *produto3;

    // Alocando memória
    produto1 = malloc(sizeof(struct Produto));
    produto2 = malloc(sizeof(struct Produto));
    produto3 = malloc(sizeof(struct Produto));

    // Verificando se a memória foi alocada
    if (produto1 == NULL || produto2 == NULL || produto3 == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    // Ligando os produtos
    produto1->proximo = produto2;
    produto2->proximo = produto3;
    produto3->proximo = NULL;

    // Ponteiro auxiliar para cadastro
    struct Produto *atual = produto1;

    // Cadastro dos 3 produtos
    for (int i = 1; i <= 3; i++) {

        printf("\n---- Produto %d ----\n", i);

        printf("Digite o nome do produto: ");
        scanf(" %49[^\n]", atual->nome);

        printf("Digite a quantidade: ");
        scanf("%d", &atual->quantidade);

        printf("Digite o preco do item: ");
        scanf("%f", &atual->preco);

        atual = atual->proximo;
    }

    // Percorrendo a lista
    printf("\n\n===== PRODUTOS CADASTRADOS =====\n");

    atual = produto1;

    while (atual != NULL) {

        printf("\n-------------------------\n");
        printf("Nome: %s\n", atual->nome);
        printf("Quantidade: %d\n", atual->quantidade);
        printf("Preco: R$ %.2f\n", atual->preco);

        atual = atual->proximo;
    }

    // Liberando a memória
    free(produto1);
    free(produto2);
    free(produto3);

    return 0;
}
