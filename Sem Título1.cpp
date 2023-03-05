// Avaliação 1º Bimestre. 
//Disciplina: Algoritmos e Tecnicas de Programação 1.
//Professor:Francisco Assis da Silva 
//Nome:Bernardo Marconi Silva Avanci RA:102113025 TERMO:1º, TURMA:A

//EXERCICIO 2.


#include <stdio.h>

int main()
{
  int n, s, fatorial;

  printf("Entre o valor de n (0 <= n < 1): ");
  scanf("%d", &n);

  fatorial = 1;

  s = 1;
  while (s <= n) {
    fatorial = fatorial * s;
    s++;          
  }

  printf("%d! = %d\n", n, fatorial);

  return 0;
}
