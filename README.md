# CFB Cursos C++

Este repositório contém exercícios e exemplos práticos do curso de C++ do CFB Cursos.

## Estrutura do Projeto

O projeto está organizado em aulas sequenciais, cada uma focando em conceitos específicos da linguagem C++.

### Aulas Disponíveis

#### Aula 04 - Variáveis em C++
- **Tópicos:** Introdução às variáveis, tipos de dados básicos
- **Executável:** `aula04_variaveis.exe`

#### Aula 05 - Declarações Múltiplas
- **Tópicos:** Como declarar múltiplas variáveis de forma eficiente
- **Executável:** `aula05_declaracoes_multiplas.exe`

#### Aula 06 - Variáveis Globais, Locais e Operadores Matemáticos
- **Tópicos:** Escopo de variáveis e operações matemáticas básicas
- **Executável:** `aula_06_globais_locais_e_operadores_matematicos.exe`

#### Aula 07 - Incremento e Decremento
- **Tópicos:** Operadores de incremento/decremento pré-fixados e pós-fixados
- **Executável:** `aula_07_incremento_decremento_variaveis_operadores_pos_pre_fixados.exe`

## Como Compilar e Executar

O projeto utiliza CMake para gerenciamento de build. Os executáveis compilados estão disponíveis na pasta `cmake-build-debug/`.

### Requisitos
- Compilador C++ compatível
- CMake
- CLion IDE (recomendado)

### Build
```bash
mkdir cmake-build-debug
cd cmake-build-debug
cmake ..
cmake --build .