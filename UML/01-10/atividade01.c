#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Pessoa{
    char nome[50];
    int idade;
    float altura;

};

int main(){


        struct Pessoa pessoa1;
        strcpy(pessoa1.nome,"Lula Inacio");
        pessoa1.idade = 80;
        pessoa1.altura = 1.68;

        struct Pessoa pessoa2 = {"Jair bolsonaro", 71, 1.85};
        struct Pessoa pessoa3 = {"Augusto kury", 67, 1.73};


        printf("---pessoa 01---\n");

        printf("Nome: %s\n",pessoa1.nome);
        printf("idade: %d\n",pessoa1.idade);
        printf("altura: %.2f\n",pessoa1.altura);

        printf("---pessoa 02---\n");

        printf("Nome: %s\n",pessoa2.nome);
        printf("idade: %d\n",pessoa2.idade);
        printf("altura: %.2f\n",pessoa2.altura);

        printf("---pessoa 03---\n");

        printf("Nome: %s\n",pessoa3.nome);
        printf("idade: %d\n",pessoa3.idade);
        printf("altura: %.2f\n",pessoa3.altura);

        return 0;


}
