# Desafios de Lógica de Programação em C

Resolução dos 30 desafios de Introdução à Programação Estruturada em C.
Cada desafio está em um arquivo `.c` independente.

## Como compilar e executar

```bash
gcc 01_antecessor_sucessor.c -o desafio01
./desafio01
```

Para compilar todos de uma vez:

```bash
for f in *.c; do gcc "$f" -o "${f%.c}"; done
```

No Windows com MSYS2, use o terminal UCRT64 e os mesmos comandos. Os
executáveis gerados ficam fora do controle de versão por causa do `.gitignore`.

Todos os 30 desafios foram verificados com GCC usando C17 e as opções
`-Wall -Wextra -Wpedantic`.

## Desafios

| # | Arquivo | Descrição |
|---|---------|-----------|
| 01 | 01_antecessor_sucessor.c | Antecessor e sucessor |
| 02 | 02_dobro_triplo_metade.c | Dobro, triplo e metade |
| 03 | 03_conversor_temperatura.c | Celsius para Fahrenheit |
| 04 | 04_media_tres_notas.c | Média de três notas |
| 05 | 05_positivo_negativo_zero.c | Positivo, negativo ou zero |
| 06 | 06_par_ou_impar.c | Par ou ímpar |
| 07 | 07_maior_entre_dois.c | Maior entre dois números |
| 08 | 08_maior_entre_tres.c | Maior entre três números |
| 09 | 09_faixa_etaria.c | Faixa etária |
| 10 | 10_calculadora_simples.c | Calculadora simples |
| 11 | 11_menu_operacoes.c | Menu de operações com switch |
| 12 | 12_dia_da_semana.c | Dia da semana com switch |
| 13 | 13_contagem_crescente.c | Contagem crescente |
| 14 | 14_contagem_regressiva.c | Contagem regressiva |
| 15 | 15_numeros_pares.c | Números pares |
| 16 | 16_numeros_impares.c | Números ímpares |
| 17 | 17_tabuada.c | Tabuada |
| 18 | 18_soma_1_ate_n.c | Soma de 1 até N |
| 19 | 19_somatorio_pares.c | Somatório de pares |
| 20 | 20_fatorial.c | Fatorial |
| 21 | 21_positivos_negativos.c | Quantidade de positivos e negativos |
| 22 | 22_media_da_turma.c | Média da turma |
| 23 | 23_maior_numero_digitado.c | Maior número digitado |
| 24 | 24_maior_e_menor.c | Maior e menor número |
| 25 | 25_validacao_entrada.c | Validação de entrada |
| 26 | 26_senha_de_acesso.c | Senha de acesso |
| 27 | 27_numero_primo.c | Número primo |
| 28 | 28_divisores.c | Divisores de um número |
| 29 | 29_fibonacci.c | Sequência de Fibonacci |
| 30 | 30_jogo_adivinhacao.c | Jogo de adivinhação |
