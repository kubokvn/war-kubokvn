# 🗺️ Desafio WAR Estruturado – Conquista de Territórios

## 🧩 Nível Novato: Cadastro Inicial dos Territórios ✅ ######################## FINALIZADO EM 01/05/26 ######### ✅

### 🎯 Objetivos concluídos!

- Criar uma `struct` chamada `Territorio` ✅
- Usar um **vetor estático de 5 elementos** para armazenar os territórios.✅
- Cadastrar os dados de cada território: **Nome**, **Cor do Exército**, e **Número de Tropas**.✅ (Eu coloquei nome diferente mas só pq eu achei mais bonitinho chamar de continente)
- Exibir o estado atual do mapa.✅
- EXTRA: Adicionei uma mensagem no final desejando "Bom jogo" pra combinar com o tema war ➕✅

### ⚙️ Funcionalidades

- Leitura de dados pelo terminal (`fgets` e `scanf`)✅
- Impressão organizada dos dados de todos os territórios✅

### 💡 Conceitos abordados

- `struct`
- Vetor estático
- Entrada/saída com `scanf`, `fgets`, e `printf`

### 📥 Entrada ✅

O usuário digita o nome do território, a cor do exército dominante e o número de tropas para **cada um dos 5 territórios**.

### 📤 Saída✅

- Lista organizada contendo o nome do território, a cor do exército dominante e o número de tropas para cada um dos 5 territórios cadastrados anteriormente.
- Mensagem final de bom jogo.

############################################################ ✅ FINALIZADO KEVEN 01/05/2026✅ 









## 🧗‍♂️ Nível Aventureiro: Batalhas Estratégicas

### 🎯 Objetivo

- Substituir o vetor estático por **alocação dinâmica com `calloc`**
- Criar uma função para **simular ataques entre dois territórios**
- Utilizar números aleatórios para representar dados de batalha

### 🆕 Novidades em relação ao Nível Novato

- Alocação dinâmica de memória com `calloc`
- Uso de **ponteiros**
- Laço interativo para o jogador escolher **territórios para atacar e defender**
- Simulação de dados de ataque e defesa com `rand()`

### ⚙️ Funcionalidades

- Cadastro dos territórios (como no Nível Novato)
- Fase de ataque com:
  - Escolha de atacante e defensor
  - Dados de ataque/defesa
  - Lógica:
    - Se atacante vence → defensor perde 1 tropa
    - Se defensor perde todas → território é conquistado
    - Empates favorecem o atacante

### 💡 Conceitos abordados

- Ponteiros
- `calloc` / `free`
- Aleatoriedade com `rand()` / `srand()`
- Funções para modularização

### 📥 Entrada

- Território **atacante** (1 a 5)
- Território **defensor** (1 a 5)

### 📤 Saída

Exibição do resultado da batalha, dados sorteados e mudanças no mapa.



## 🧠 Nível Mestre: Missões e Modularização Total

### 🎯 Objetivo

- Dividir o código em funções bem definidas
- Implementar um **sistema de missões**
- Verificar cumprimento da missão
- Aplicar **boas práticas** (uso de `const`, modularização, etc.)

### 🆕 Diferenças em relação ao Nível Aventureiro

- Modularização total em funções
- Missões aleatórias atribuídas:
  1. Destruir o exército **Verde**
  2. Conquistar **3 territórios**
- Menu interativo com opções

### ⚙️ Funcionalidades

- Inicialização automática dos territórios
- Menu principal com 3 opções:
  1. Atacar
  2. Verificar Missão
  3. Sair
- Verificação de vitória da missão

### 💡 Conceitos abordados

- Modularização
- `const` correctness
- Estruturação em múltiplas funções
- Passagem por referência

### 📥 Entrada

- Ações do jogador via menu:
  - `1` - Atacar
  - `2` - Verificar Missão
  - `0` - Sair
- Escolha de territórios para ataque

### 📤 Saída

- Mapa atualizado
- Resultados das batalhas
- Verificação da missão
- Mensagem de vitória



## 🏁 Conclusão

Com este **Desafio WAR Estruturado**, você praticará fundamentos essenciais da linguagem **C** de forma **divertida e progressiva**.

Cada nível foca em um conjunto de habilidades:

- 🟢 **Novato**: `struct`, vetor, entrada/saída
- 🔵 **Aventureiro**: ponteiros, memória dinâmica, lógica de jogo
- 🟣 **Mestre**: modularização, design limpo, sistema de missões



🚀 **Boa sorte! Avance nos níveis e torne-se um mestre da programação estratégica!**

> Equipe de Ensino – MateCheck
