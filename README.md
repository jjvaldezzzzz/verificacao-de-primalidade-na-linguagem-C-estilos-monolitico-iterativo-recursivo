# AV1 - Teoria da Computabilidade: Programas, Máquinas e Equivalência

Repositório destinado à entrega do Trabalho de Implementação AV1 da disciplina de **Teoria da Computabilidade** do CESUPA.

**Professor:** Daniel Leal Souza

## 👥 Equipe

* José Joaquim Valdez
* Jorge Lobato

## 🎯 Função Implementada: Verificação de Primalidade

O objetivo deste projeto é implementar e analisar formalmente um algoritmo que verifica se um número natural é primo (possui exatamente dois divisores: 1 e ele mesmo).

A função computada $f(n)$ está definida da seguinte forma:

* **Entrada:** Um número inteiro $n \geq 2$.
* **Saída:** Um valor inteiro $r \in \{0, 1\}$, onde $1$ indica que $n$ é primo e $0$ indica que $n$ não é primo.
* **Comportamento:** A função verifica a divisibilidade de $n$ por divisores $i$ no intervalo de $2$ até $\lfloor\sqrt{n}\rfloor$.

## 💻 Linguagens e Paradigmas Utilizados

Para fins de análise e aplicação do método da **Máquina de Traços**, a mesma função foi implementada em três estilos de programação distintos utilizando a linguagem **C**:

1. **Programa Monolítico (`monolitico.c`):** Utiliza instruções de desvio explícito (`goto`) e rótulos, evidenciando o fluxo não-estruturado.
2. **Programa Iterativo (`iterativo.c`):** Utiliza estruturas de repetição de alto nível (`for`/`while`) e blocos sequenciais.
3. **Programa Recursivo (`recursivo.c`):** Abandona as variáveis mutáveis de iteração, utilizando a pilha de execução e chamadas de função com condições-base.

## 📂 Organização dos Ficheiros

O repositório está organizado da seguinte forma:

    /
    ├── src/
    │   ├── monolitico.c      # Implementação usando lógica monolítica (goto)
    │   ├── iterativo.c       # Implementação usando estruturas de repetição
    │   └── recursivo.c       # Implementação usando chamadas recursivas
    └── README.md             # Este ficheiro

## 🚀 Instruções de Compilação e Execução

Para compilar e executar os programas, é necessário ter um compilador C (como o `gcc`) instalado na sua máquina.

Abra o terminal na pasta raiz do repositório e execute os comandos abaixo de acordo com o programa que deseja testar:

**1. Programa Monolítico:**
    gcc src/monolitico.c -o monolitico
    ./monolitico

**2. Programa Iterativo:**
    gcc src/iterativo.c -o iterativo
    ./iterativo

**3. Programa Recursivo:**
    gcc src/recursivo.c -o recursivo
    ./recursivo

Ao executar qualquer um dos programas, ser-lhe-á solicitado que introduza um número inteiro (ex: `5`). O programa irá devolver `1` (Primo) ou `0` (Não Primo).

## 🤖 Documentação de Uso de IA

O desenvolvimento deste trabalho contou com o auxílio do modelo de linguagem Gemini (atuando como "Gemini Sensei") para:

* Apoio na estruturação lógica do relatório final e deste `README`.
* Auxílio na tradução do código escrito em C para a notação conceitual (Instruções Rotuladas e Sistemas de Equações).
* Geração do passo a passo (Rastro/Fita) para o exemplo da Máquina de Traços.

Toda a informação e código gerados foram estritamente validados e revistos manualmente pela equipa para garantir a conformidade com o livro-base da disciplina (*Teoria da Computação*, Diverio e Menezes).
