## 📚 Calculadora de Média Geral de Notas em C

Este é um programa simples em C que permite ao usuário inserir as notas de até 50 alunos e, em seguida, calcula e exibe a soma total das notas e a média geral da turma.

### ✨ Funcionalidades

  * **Entrada Dinâmica:** O usuário define quantos alunos terão suas notas inseridas (limite de 50).
  * **Armazenamento:** Utiliza um vetor de `float` (`notas[50]`) para guardar as notas.
  * **Cálculo:** Realiza a soma de todas as notas e calcula a média geral.
  * **Validação:** Verifica se o número de alunos está dentro do limite permitido (1 a 50).
  * **Saída Formatada:** Exibe a soma e a média com duas casas decimais.

### ⚙️ Detalhes Técnicos

  * **Linguagem:** C
  * **Armazenamento:**
      * Um array de ponto flutuante (`float notas[50]`) armazena as notas dos alunos.
      * A variável `numAlunos` (inteiro) controla o tamanho real de dados a ser lido, garantindo que o programa utilize apenas a porção necessária do vetor.
  * **Estruturas de Controle:**
      * Um *bloco condicional* (`if`) verifica a validade da entrada de `numAlunos`.
      * Um *laço de repetição* (`for`) é utilizado para:
        1.  Coletar as notas individualmente.
        2.  Acumular a soma total das notas na variável `soma`.
  * **Tipos de Dados:** Utiliza `float` para as notas, a soma e a média, garantindo a precisão em números não inteiros.

👤 Autora
***amandamrs***
