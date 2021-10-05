//Aluno: Vinícius Henrique Giovanini
//Matricula: 692225
//SEGUNDO CIRCUITO

#include <stdio.h>
#include <stdlib.h>

int XOR(int VALOR1, int VALOR2)
{

  int respXOR;

  if (VALOR1 == 0 && VALOR2 == 0)
  {
    respXOR = 0;
  }

  if (VALOR1 == 0 && VALOR2 == 1)
  {
    respXOR = 1;
  }

  if (VALOR1 == 1 && VALOR2 == 0)
  {
    respXOR = 1;
  }

  if (VALOR1 == 1 && VALOR2 == 1)
  {
    respXOR = 0;
  }

  return respXOR;
}

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

  int notA = NOT(A);
  int ret1AND = AND(notA, B);
  int notB = NOT(B);
  int ret2AND = AND(A, notB);
  int ret1XOR = XOR(A, B);

  int ret1OR = OR(ret1AND, ret2AND);
  int ret2XOR = XOR(ret1OR, ret1XOR);

  printf("RESPOTA: %d\n", ret2XOR);

  return 0;
}
