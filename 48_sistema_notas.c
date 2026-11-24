#include "entrada.h"

#define TOTAL_ALUNOS 5
#define NOTAS_POR_ALUNO 3

int main(void) {
    double notas[TOTAL_ALUNOS][NOTAS_POR_ALUNO];

    for (int aluno = 0; aluno < TOTAL_ALUNOS; aluno++) {
        for (int nota = 0; nota < NOTAS_POR_ALUNO; nota++) {
            printf("Aluno %d, nota %d (0 a 10): ", aluno + 1, nota + 1);
            if (!ler_real(&notas[aluno][nota])) {
                return 1;
            }
            if (notas[aluno][nota] < 0 || notas[aluno][nota] > 10) {
                puts("Nota invalida.");
                return 1;
            }
        }
    }

    double maior = notas[0][0];
    for (int aluno = 0; aluno < TOTAL_ALUNOS; aluno++) {
        double soma = 0;
        for (int nota = 0; nota < NOTAS_POR_ALUNO; nota++) {
            double valor = notas[aluno][nota];
            soma += valor;
            if (valor > maior) {
                maior = valor;
            }
        }

        double media = soma / NOTAS_POR_ALUNO;
        printf("Aluno %d - Media: %.2f - %s\n",
               aluno + 1, media, media >= 7 ? "Aprovado" : "Reprovado");
    }

    printf("Maior nota da turma: %.2f\n", maior);
    return 0;
}
