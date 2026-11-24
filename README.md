# Desafios de lógica de programação em C

Uma coleção de 50 exercícios introdutórios resolvidos em C. Cada desafio está
em um arquivo próprio ou, nos dois exercícios de modularização, em uma pasta
própria. Os programas praticam programação estruturada, com operações
aritméticas, decisões, laços, funções, vetores e matrizes.

## Objetivos

- Praticar entrada e saída de dados pelo terminal.
- Trabalhar com variáveis, operadores aritméticos e expressões.
- Usar estruturas condicionais (`if`/`else` e `switch`).
- Criar repetições com laços (`for`, `while` e `do while`).
- Separar responsabilidades em funções e módulos e organizar dados em vetores e matrizes.
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

Os desafios 40 e 45 usam funções de `math.h`. Coloque `-lm` depois do nome do
arquivo ao compilar com GCC:

```bash
gcc -std=c17 -Wall -Wextra -Wpedantic 40_calculadora_cientifica.c -lm -o desafio40
```

Para os desafios 43 e 44, compile os dois arquivos `.c` da pasta juntos:

```bash
gcc -std=c17 -Wall -Wextra -Wpedantic 43_sistema_pagamento/*.c -o desafio43
gcc -std=c17 -Wall -Wextra -Wpedantic 44_calculadora_modular/*.c -o desafio44
```

## Compilar todos os desafios

O comando a seguir cria a pasta `build/` e compila cada arquivo nela, mantendo
os executáveis organizados e separados dos fontes:

```bash
mkdir -p build
for f in *.c; do
  gcc -std=c17 -Wall -Wextra -Wpedantic "$f" -lm -o "build/${f%.c}" || exit 1
done
for d in 43_sistema_pagamento 44_calculadora_modular; do
  gcc -std=c17 -Wall -Wextra -Wpedantic "$d"/*.c -o "build/$d" || exit 1
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

### Tipos de dados, operadores e condicionais

| # | Arquivo ou pasta | Conceito praticado |
|---|------------------|--------------------|
| 31 | [31_salario_liquido.c](31_salario_liquido.c) | Dois descontos percentuais sobre o salário bruto |
| 32 | [32_conversor_armazenamento.c](32_conversor_armazenamento.c) | Conversão de GB para MB e KB |
| 33 | [33_status_estoque.c](33_status_estoque.c) | Verificação de estoque com `if/else` e ternário |
| 34 | [34_analise_pedido.c](34_analise_pedido.c) | Cálculo de frete e total do pedido |
| 35 | [35_terminal_atendimento.c](35_terminal_atendimento.c) | Encaminhamento por setor com `switch` |

### Laços e controle de entrada

| # | Arquivo ou pasta | Conceito praticado |
|---|------------------|--------------------|
| 36 | [36_login_tentativas.c](36_login_tentativas.c) | Senha numérica com no máximo três tentativas |
| 37 | [37_carrinho_compras.c](37_carrinho_compras.c) | Contagem de produtos e soma de preços |
| 38 | [38_monitoramento_servidor.c](38_monitoramento_servidor.c) | Classificação de percentuais inteiros de uso da CPU |
| 39 | [39_processamento_vendas.c](39_processamento_vendas.c) | Faturamento e ticket médio com valor sentinela |

### Funções, bibliotecas e módulos

| # | Arquivo ou pasta | Conceito praticado |
|---|------------------|--------------------|
| 40 | [40_calculadora_cientifica.c](40_calculadora_cientifica.c) | Raiz quadrada, quadrado e arredondamentos |
| 41 | [41_adivinhacao_aleatoria.c](41_adivinhacao_aleatoria.c) | Sorteio de 1 a 100 e dicas a cada palpite incorreto |
| 42 | [42_validador_opcao.c](42_validador_opcao.c) | Validação de S/N com `toupper` e `do while` |
| 43 | [43_sistema_pagamento](43_sistema_pagamento) | Módulo de pagamento com desconto via PIX |
| 44 | [44_calculadora_modular](44_calculadora_modular) | Módulo de operações aritméticas com validação de divisão |

### Vetores e matrizes

| # | Arquivo ou pasta | Conceito praticado |
|---|------------------|--------------------|
| 45 | [45_analise_temperaturas.c](45_analise_temperaturas.c) | Média, extremos e contagem de temperaturas acima da média |
| 46 | [46_controle_vendas.c](46_controle_vendas.c) | Funções de análise de um vetor de vendas |
| 47 | [47_busca_codigo.c](47_busca_codigo.c) | Busca sequencial do primeiro índice de um código |
| 48 | [48_sistema_notas.c](48_sistema_notas.c) | Matriz de notas e situação de cada aluno |
| 49 | [49_mapa_assentos.c](49_mapa_assentos.c) | Reserva de assentos em uma matriz de 4 × 5 |
| 50 | [50_painel_estacionamento.c](50_painel_estacionamento.c) | Ocupação, liberação e contagem de vagas em três setores |

## Observações

- Cada desafio tem sua própria função `main`.
- Os desafios 31 a 50 compartilham as rotinas de leitura de `entrada.h`.
- Use ponto como separador decimal ao informar valores reais.
- Os programas recebem dados pelo terminal e exibem mensagens em português.
- Os programas validam as entradas e sinalizam erros de leitura.
- Os executáveis e arquivos intermediários não fazem parte do repositório.
