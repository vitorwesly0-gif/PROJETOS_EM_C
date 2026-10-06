A PASTA POSSUI TRÊS ARQUIVOS COM CÓDIGOS EM C.

-SUPER TRUNFO:

Este projeto é uma implementação em terminal do clássico jogo de cartas **Super Trunfo**, focado em dados demográficos e geográficos de cidades. O programa permite que o utilizador registe duas cartas, calcule métricas automaticamente e escolha atributos para colocá-las em duelo.

## 📝 Descrição

O jogo foi desenvolvido na linguagem C e destaca-se por um sistema robusto de leitura e validação de dados, impedindo que o utilizador insira letras em campos numéricos ou valores negativos. Após o registo de duas cartas, o jogador escolhe dois atributos distintos para comparar. O vencedor final é decidido com base na soma dos valores desses atributos.

## ✨ Funcionalidades

* **Cadastro Completo:** Permite inserir dados como Estado, Código da Carta, Nome da Cidade, População, Área, PIB e Número de Pontos Turísticos.
* **Cálculo Automático:** O sistema calcula automaticamente a **Densidade Populacional** (População / Área) e o **PIB *per capita*** (PIB / População).
* **Validação de Entradas:** Funções dedicadas limpam o *buffer* do teclado e forçam o utilizador a inserir dados válidos (maiores que zero, sem caracteres inválidos).
* **Comparação Dinâmica:** O jogador escolhe ativamente quais os 2 atributos que vão entrar em combate.
* **Lógica de Super Trunfo Autêntica:** Para a maioria dos atributos, o maior valor vence. No entanto, se o atributo escolhido for a *Densidade Populacional*, a carta com o **menor** valor sai vitoriosa.
* **Resultado Final:** Soma os valores dos dois atributos escolhidos em cada carta e declara o grande vencedor.

## 🚀 Como Compilar e Executar

Certifique-se de que tem um compilador de C (como o GCC) instalado no seu sistema.

1. Guarde o código num ficheiro chamado `super_trunfo.c`.
2. Abra o terminal e navegue até à pasta onde guardou o ficheiro.
3. Compile o programa com o comando:
```bash
gcc super_trunfo.c -o super_trunfo

```


4. Execute o jogo:
```bash
./super_trunfo

```


*(No Windows, utilize `super_trunfo.exe`)*

## 🎮 Como Jogar

1. **Registo da Carta 1:** Siga as instruções no ecrã para introduzir os dados da primeira cidade.
2. **Registo da Carta 2:** Introduza os dados da cidade adversária.
3. **Primeiro Duelo:** Um menu com 6 opções (População, Área, PIB, Pontos Turísticos, Densidade e PIB per capita) irá aparecer. Digite o número correspondente ao atributo que deseja comparar.
4. **Segundo Duelo:** Escolha um novo atributo (diferente do primeiro).
5. **Veredicto:** O programa exibirá quem venceu cada rodada individual e, no final, mostrará a soma dos atributos e a Carta Campeã.

## 🧠 Estrutura Técnica do Código

* `struct Carta`: Estrutura de dados que centraliza todas as informações de uma cidade.



-BATALHA NAVAL:

Este projeto consiste num programa simples escrito na linguagem C que inicializa e desenha na consola um tabuleiro clássico do jogo Batalha Naval.

## 📝 Descrição

O código demonstra a utilização de matrizes (arrays bidimensionais) e ciclos de repetição para formatar uma grelha no terminal. O tabuleiro tem uma dimensão de 10x10, contendo letras (A-J) para identificar as colunas e números (1-10) para identificar as linhas.

Neste exemplo estático, a água é representada pelo número `0` e os navios são representados pelo número `3`. O código já inclui o posicionamento de dois navios:

* Um navio na horizontal (tamanho 3).
* Um navio na vertical (tamanho 3).

## 🛠️ Tecnologias Utilizadas

* **Linguagem:** C
* **Biblioteca Padrão:** `<stdio.h>` (para entrada e saída de dados na consola)

## 🚀 Como Compilar e Executar

Para correr este código no seu computador, precisará de um compilador de C (como o GCC). Siga estes passos no seu terminal:

1. Guarde o código num ficheiro, por exemplo: `batalha_naval.c`.
2. Navegue até à pasta onde guardou o ficheiro.
3. Compile o código com o seguinte comando:
```bash
gcc batalha_naval.c -o batalha_naval

```


4. Execute o programa compilado:
```bash
./batalha_naval

```



*(Nota: Se estiver a utilizar o Windows, a execução pode ser feita apenas digitando `batalha_naval.exe` ou `.\batalha_naval.exe` no terminal).*

## 💻 Exemplo de Saída (Output)

Ao executar o programa, a seguinte grelha será exibida no ecrã:

```text
Tabuleiro de Batalha Naval:
   A B C D E F G H I J 
1  0 0 0 0 0 0 0 0 0 0 
2  0 0 0 0 0 0 0 0 0 0 
3  0 0 0 0 0 0 0 0 0 0 
4  0 0 3 3 3 0 0 0 0 0 
5  0 0 0 0 0 0 0 0 0 0 
6  0 0 0 0 0 0 0 0 0 0 
7  0 0 0 0 0 0 0 0 0 0 
8  0 0 0 0 0 0 3 0 0 0 
9  0 0 0 0 0 0 3 0 0 0 
10 0 0 0 0 0 0 3 0 0 0 

```

## 🧠 Estrutura do Código

* `char linha[10]`: Um vetor que armazena os cabeçalhos das colunas (Letras de A a J).
* `int tabuleiro[10][10]`: A matriz principal que guarda o estado de cada coordenada do mapa.
* Os ciclos `for` encadeados percorrem a matriz para imprimir os valores formatados, assegurando que os números das linhas fiquem devidamente alinhados à esquerda.



-SIMULADOR DE MOVIMENTO DO XADREZ:


Este projeto é um programa didático escrito em C que simula a direção dos movimentos de quatro peças clássicas de xadrez no terminal. O código é um excelente exemplo prático para o estudo de recursividade (funções que chamam a si próprias) e estruturas de repetição (loops).

📝 Descrição
O programa define uma quantidade padrão de casas (n = 5) e imprime os passos que cada peça daria numa determinada direção. Em vez de utilizar um tabuleiro virtual complexo, o foco deste código está na lógica de repetição e no controlo de fluxo.

♟️ Peças e Movimentos
🏰 Torre: Utiliza uma função recursiva para se mover 5 casas contínuas para a DIREITA.

♗ Bispo: Utiliza uma função recursiva para se mover 5 casas contínuas na diagonal CimaDireita.

♕ Rainha: Utiliza uma função recursiva para se mover 5 casas contínuas para a ESQUERDA.

♘ Cavalo: Utiliza um ciclo for com uma condição if embutida para realizar o seu clássico movimento em "L": duas casas para CIMA e uma para a DIREITA no final.

🚀 Como Compilar e Executar
Certifique-se de que tem um compilador de C (como o GCC) instalado.

Guarde o código num ficheiro chamado xadrez.c.

Abra o terminal e navegue até à pasta do ficheiro.

Compile o programa:

Bash
gcc xadrez.c -o xadrez
Execute o programa:

Bash
./xadrez
(No Windows, utilize xadrez.exe)

💻 Exemplo de Saída (Output)
Ao executar o programa, verá o seguinte resultado na sua consola:

Plaintext
Movimentos da Torre:
DIREITA
DIREITA
DIREITA
DIREITA
DIREITA

------------------
Movimentos do Bispo:
CimaDireita
CimaDireita
CimaDireita
CimaDireita
CimaDireita

------------------
Movimentos da Rainha:
ESQUERDA
ESQUERDA
ESQUERDA
ESQUERDA
ESQUERDA

------------------
Movimentos do Cavalo:
CIMA
CIMA
DIREITA
🧠 Conceitos Técnicos Aplicados
Para estudantes de Engenharia de Software, este código demonstra dois paradigmas importantes:

Recursão (torre, bispo, rainha): A função executa uma ação e chama-se a si mesma com um valor decrementado (n - 1), parando apenas quando a condição base (n > 0) deixa de ser verdadeira.

Iteração (for no main): O movimento do cavalo mostra como controlar passos exatos num ciclo, executando uma ação específica na última iteração utilizando uma estrutura condicional (if (i == 1)).



* `limpar_buffer()`: Função crucial para evitar *loops* infinitos no `scanf` quando o utilizador digita um tipo de dado errado.
* `ler_int()`, `ler_long_positivo()`, `ler_float_positivo()`, `ler_double_positivo()`: Funções de encapsulamento que garantem a integridade dos dados inseridos.
* `comparar()`: Função que contém a lógica de vitória (maior valor vence, exceto para densidade) e acumula os pontos para o resultado final.
