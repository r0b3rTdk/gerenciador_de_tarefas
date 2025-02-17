# Gerenciador de Tarefas em C

Este é um programa simples em C para gerenciar suas tarefas. Adicione, liste e remova tarefas com facilidade. ✏️

## Funcionalidades

* **Adicionar Tarefas:** Inclua novas tarefas com descrição e status (pendente ou concluída).
* **Listar Tarefas:** Visualize todas as tarefas cadastradas com seus detalhes.
* **Remover Tarefas:** Exclua tarefas da lista usando seu ID.

## Tecnologias Utilizadas

* **Linguagem C:** A base do projeto, fornecendo a estrutura e lógica para o gerenciamento de tarefas.
* **Structs:** Utilizadas para representar as tarefas, cada uma contendo ID, descrição e status.
* **Arrays:** Empregados para armazenar as structs de tarefas, permitindo a organização e acesso eficiente.
* **Funções:** Implementadas para modularizar o código, separando as operações de adicionar, listar e remover tarefas.
* **Entrada/Saída Padrão (stdio.h):**  Utilizada para interação com o usuário, como receber comandos e exibir informações.
* **Manipulação de Strings (string.h):**  Usada para trabalhar com as descrições das tarefas.

## Como Usar

1. **Compile:**
   ```bash
   gcc gerenciador.c main.c -o gerenciador
   ```

## Autor
**Robert Emanuel**

## Observações

* O programa usa um array de tamanho fixo para armazenar as tarefas.
* O código foi escrito com foco em clareza e modularidade.
*  **Alocação dinâmica de memória (malloc/realloc) foi evitada neste projeto.** 

