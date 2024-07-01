#include <stdio.h>

char nome[100];
char sexo;
int idade;
long long cpf;

int main()
{
    printf("Escreva seu nome: ");
    scanf(" %s", nome); 

    printf("Escreva o seu sexo: ");
    scanf(" %c", &sexo);

    printf("Escreva sua idade: ");
    scanf("%d", &idade);

    printf("Escreva seu cpf: ");
    scanf("%lld", &cpf); 

    return 0;
}
