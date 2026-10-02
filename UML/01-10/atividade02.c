#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
    struct Pessoa *proximo;
};

int main() {

    // Criando os ponteiros
    struct Pessoa *pessoa1;
    struct Pessoa *pessoa2;
    struct Pessoa *pessoa3;

    // Alocando memória
    pessoa1 = malloc(sizeof(struct Pessoa));
    pessoa2 = malloc(sizeof(struct Pessoa));
    pessoa3 = malloc(sizeof(struct Pessoa));

    // Pessoa 1
    strcpy(pessoa1->nome, "Lula Inacio");
    pessoa1->idade = 80;
    pessoa1->altura = 1.68;
    pessoa1->proximo = pessoa2;

    // Pessoa 2
    strcpy(pessoa2->nome, "Jair Bolsonaro");
    pessoa2->idade = 72;
    pessoa2->altura = 1.70;
    pessoa2->proximo = pessoa3;

    // Pessoa 3
    strcpy(pessoa3->nome, "Augusto Cury");
    pessoa3->idade = 71;
    pessoa3->altura = 1.70;
    pessoa3->proximo = NULL;

    // Exibindo as pessoas
    printf("Nome: %s\n", pessoa1->nome);
    printf("Idade: %d\n", pessoa1->idade);
    printf("Altura: %.2f\n\n", pessoa1->altura);

    printf("Nome: %s\n", pessoa2->nome);
    printf("Idade: %d\n", pessoa2->idade);
    printf("Altura: %.2f\n\n", pessoa2->altura);

    printf("Nome: %s\n", pessoa3->nome);
    printf("Idade: %d\n", pessoa3->idade);
    printf("Altura: %.2f\n", pessoa3->altura);

    // Liberando a memória
    free(pessoa1);
    free(pessoa2);
    free(pessoa3);

    return 0;
}
