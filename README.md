# Desafios de lógica de programação em C

Uma coleção de 30 exercícios introdutórios resolvidos em C. Cada desafio está
em um arquivo independente e pode ser compilado e executado separadamente. Os
programas praticam conceitos fundamentais de programação estruturada, desde
operações aritméticas e decisões até laços, validação de entrada e pequenos
jogos.

## Objetivos

- Praticar entrada e saída de dados com `printf` e `scanf`.
- Trabalhar com variáveis, operadores aritméticos e expressões.
- Usar estruturas condicionais (`if`/`else` e `switch`).
- Criar repetições com laços (`for`, `while` e `do while`).
- Resolver problemas pequenos, aumentando a complexidade gradualmente.

## Pré-requisitos

- Um compilador C, como o GCC.
- Um terminal para executar os comandos abaixo.

Os exemplos usam o padrão C17 e opções de compilação que ativam avisos úteis.
No Windows, é possível usar o GCC pelo terminal UCRT64 do MSYS2.

## Compilar e executar um desafio

Na raiz do repositório, compile o arquivo desejado:

```bash
gcc -std=c17 -Wall -Wextra -Wpedantic 01_antecessor_sucessor.c -o desafio01
```

Execute o programa:

```bash
./desafio01
```

No Windows, execute o arquivo gerado como `desafio01.exe`.
Para testar outro exercício, substitua o nome do arquivo `.c` e o nome do
executável.

## Compilar todos os desafios

O comando a seguir cria a pasta `build/` e compila cada arquivo nela, mantendo
os executáveis organizados e separados dos fontes:

```bash
mkdir -p build
for f in *.c; do
  gcc -std=c17 -Wall -Wextra -Wpedantic "$f" -o "build/${f%.c}" || exit 1
done
```

Por exemplo, para executar o primeiro desafio após a compilação:

```bash
./build/01_antecessor_sucessor
```

## Exercícios

### Operações, decisões e seleções

| # | Arquivo | Conceito praticado |
|---|---------|--------------------|
| 01 | [01_antecessor_sucessor.c](01_antecessor_sucessor.c) | Antecessor e sucessor de um inteiro |
| 02 | [02_dobro_triplo_metade.c](02_dobro_triplo_metade.c) | Operações aritméticas: dobro, triplo e metade |
| 03 | [03_conversor_temperatura.c](03_conversor_temperatura.c) | Conversão de Celsius para Fahrenheit |
| 04 | [04_media_tres_notas.c](04_media_tres_notas.c) | Cálculo da média de três notas |
| 05 | [05_positivo_negativo_zero.c](05_positivo_negativo_zero.c) | Classificação de um número |
| 06 | [06_par_ou_impar.c](06_par_ou_impar.c) | Resto da divisão e paridade |
| 07 | [07_maior_entre_dois.c](07_maior_entre_dois.c) | Comparação entre dois números |
| 08 | [08_maior_entre_tres.c](08_maior_entre_tres.c) | Comparação entre três números |
| 09 | [09_faixa_etaria.c](09_faixa_etaria.c) | Classificação por faixa etária |
| 10 | [10_calculadora_simples.c](10_calculadora_simples.c) | Operações aritméticas e validação de operador |
| 11 | [11_menu_operacoes.c](11_menu_operacoes.c) | Menu de operações com `switch` |
| 12 | [12_dia_da_semana.c](12_dia_da_semana.c) | Seleção do dia da semana com `switch` |

### Laços e contadores

| # | Arquivo | Conceito praticado |
|---|---------|--------------------|
| 13 | [13_contagem_crescente.c](13_contagem_crescente.c) | Contagem crescente |
| 14 | [14_contagem_regressiva.c](14_contagem_regressiva.c) | Contagem regressiva |
| 15 | [15_numeros_pares.c](15_numeros_pares.c) | Exibição de números pares |
| 16 | [16_numeros_impares.c](16_numeros_impares.c) | Exibição de números ímpares |
| 17 | [17_tabuada.c](17_tabuada.c) | Tabuada usando repetição |
| 18 | [18_soma_1_ate_n.c](18_soma_1_ate_n.c) | Soma dos inteiros de 1 até N |
| 19 | [19_somatorio_pares.c](19_somatorio_pares.c) | Somatório de números pares |
| 20 | [20_fatorial.c](20_fatorial.c) | Cálculo do fatorial |
| 21 | [21_positivos_negativos.c](21_positivos_negativos.c) | Contagem de valores positivos e negativos |
| 22 | [22_media_da_turma.c](22_media_da_turma.c) | Média de uma turma |
| 23 | [23_maior_numero_digitado.c](23_maior_numero_digitado.c) | Busca do maior valor informado |
| 24 | [24_maior_e_menor.c](24_maior_e_menor.c) | Busca do maior e do menor valor |

### Validação e problemas clássicos

| # | Arquivo | Conceito praticado |
|---|---------|--------------------|
| 25 | [25_validacao_entrada.c](25_validacao_entrada.c) | Validação de uma nota dentro de um intervalo |
| 26 | [26_senha_de_acesso.c](26_senha_de_acesso.c) | Verificação de senha |
| 27 | [27_numero_primo.c](27_numero_primo.c) | Verificação de número primo |
| 28 | [28_divisores.c](28_divisores.c) | Identificação dos divisores de um número |
| 29 | [29_fibonacci.c](29_fibonacci.c) | Sequência de Fibonacci |
| 30 | [30_jogo_adivinhacao.c](30_jogo_adivinhacao.c) | Jogo de adivinhação com tentativas |

## Observações

- Cada arquivo contém seu próprio `main`; compile um desafio por vez.
- Os programas recebem dados pelo terminal e exibem mensagens em português.
- Quando uma entrada não pode ser lida, os programas informam o erro e
  encerram a execução.
- Os executáveis e arquivos intermediários não fazem parte do repositório.
