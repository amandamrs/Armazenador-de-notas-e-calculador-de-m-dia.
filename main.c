#include <stdio.h>

int main() {

float notas[50];
int numAlunos;
float soma = 0.0;
float media;        
printf("Olá, vamos armazenar notas e realizar o calculo de média geral? \n");
printf("Quantos alunos (até 50) você deseja inserir as notas? ");
scanf("%d", &numAlunos);

if (numAlunos > 50 || numAlunos < 1) {
    printf("Número de alunos inválido. O programa será encerrado.\n");
    return 1;
}

for (int i = 0; i < numAlunos; i++) {
    printf("Digite a nota do aluno %d: ", i + 1);
    scanf("%f", &notas[i]);
    soma += notas[i]; 
}

media = soma / numAlunos;

printf("\n--- Resultados ---\n");
printf("A soma total das notas é: %.2f\n", soma);
printf("A média geral das notas é: %.2f\n", media);

return 0;
}
