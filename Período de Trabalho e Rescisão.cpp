#include <stdio.h>

int main()
{
    char inicio[20];
    char final[20];
    char rescisao[100]; 

    printf("Escreva a data da admissão: ");
    scanf("%19s", inicio); 

    printf("Escreva a data da demissão: ");
    scanf("%19s", final); 

    printf("Escreva o motivo da rescisão: ");
    scanf(" %[^\n]s", rescisao); 

    printf("Data de admissão: %s\n", inicio);
    printf("Data de demissão: %s\n", final);
    printf("Motivo da rescisão: %s\n", rescisao);

    return 0;
}

