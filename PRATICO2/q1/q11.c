//Aluno: Vinícius Henrique Giovanini
//Matricula: 692225
//PRIMEIRO CIRCUITO

#include <stdio.h>
#include <stdlib.h>

int OR(int VALOR1, int VALOR2)
{
  int respOR;

  if (VALOR1 == 0 && VALOR2 == 0)
  {
    respOR = 0;
  }

  if (VALOR1 == 0 && VALOR2 == 1)
  {
    respOR = 1;
  }

  if (VALOR1 == 1 && VALOR2 == 0)
  {
    respOR = 1;
  }

  if (VALOR1 == 1 && VALOR2 == 1)
  {
    respOR = 1;
  }

  return respOR;
}

int NOT(int Valor)
{

  int respNOT;

  if (Valor == 1)
  {
    respNOT = 0;
  }

  if (Valor == 0)
  {
    respNOT = 1;
  }

  return respNOT;
}

int AND(int VALOR1, int VALOR2)
{
  int resp = 0;

  if (VALOR1 == 0 && VALOR2 == 0)
  {
    resp = 1;
  }

  if (VALOR1 == 0 && VALOR2 == 1)
  {
    resp = 0;
  }

  if (VALOR1 == 1 && VALOR2 == 0)
  {
    resp = 0;
  }

  if (VALOR1 == 1 && VALOR2 == 1)
  {
    resp = 0;
  }

  return resp;
}

int main()
{
  int A;
  printf("Insira o Valor de A: \n");
  scanf("%d", &A);
  int B;
  printf("Insira o Valor de B: \n");
  scanf("%d", &B);
  int C;
  printf("Insira o Valor de C: \n");
  scanf("%d", &C);

  int receberAND = AND(A, B);
  int receberNOT = NOT(C);
  int receber1OR = OR(receberAND, receberNOT);
  int receber2OR = OR(receberAND, C);
  int receber3OR = OR(receber1OR, receber2OR);

  printf("RESPOTA: %d\n", receber3OR);

  return 0;
}
