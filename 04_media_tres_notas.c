#include <stdio.h>

int main(void) {
    double n1, n2, n3, media;
    printf("Digite as tres notas: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / 3.0;
    printf("Media: %.2f\n", media);
    if (media >= 7.0)
        printf("Aluno APROVADO\n");
    else
        printf("Aluno REPROVADO\n");
    return 0;
}
