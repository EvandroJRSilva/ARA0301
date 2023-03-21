#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main()
{
    float NB; // nota do aluno
    char NA[50]; // nome do aluno
    char NMAT[11]; // número da matrícula, considerando 10 dígitos
    char SX;

    printf("Digite o nome do(a) aluno(a): ");
    fgets(NA, sizeof(NA), stdin);
    NA[strcspn(NA, "\n")] = 0;

    printf("Digite o número da matrícula (10 dígitos): ");
    fgets(NMAT, sizeof(NMAT), stdin);
    getchar();

    printf("Digite o sexo do aluno (M ou F): ");
    SX = getchar();

    printf("Digite a nota do aluno: ");
    scanf("%f", &NB);

    getchar();

    printf("\n");

    printf("Nome: %s;\n", NA);
    printf("Matrícula: %s;\n", NMAT);
    printf("Nota: %.1f;\n", NB);
    printf("Sexo: %c.", SX);
    //putchar(SX);
}