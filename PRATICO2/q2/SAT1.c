//Aluno: Vinícius Henrique Giovanini
//Matricula: 692225
//QUESTÃO 2 com o Primeiro Circuito

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
  printf("Qual o tipo de Execução Comentario(c) ou Programa(p) ?\n");
  char Letra;
  scanf("%c", &Letra);
  printf("Qual o tipo de arquivo ?\n");
  char Str[50];
  scanf("%s", &Str);
  printf("Insira a quantidade de valores utilizados \n");
  int QVALORES = 0;
  scanf("%d", &QVALORES);
  printf("Insira a quantidade de Testes para serem feitos \n");
  int QdeTestes = 0;
  scanf("%d", &QdeTestes);
  int contador = 0;

  int A = 0;
  int B = 0;
  int C = 0;

  int quatro;
  int cinco;
  int seis;
  int sete;
  int oito;
  int nove;
  int dez;

  if (Letra == 'p' && Str[0] == 'c' && Str[1] == 'n' && Str[2] == 'f')
  {

    int vari1;
    int vari2;
    int vari3;
    int vari4;

    while (contador < QdeTestes)
    {

      printf("Insira o valor da variavel 1\n");
      scanf("%d", &vari1);

      if (vari1 != 0)
      {
        printf("Insira o valor da variavel 2\n");
        scanf("%d", &vari2);
      }

      if (vari2 != 0)
      {
        printf("Insira o valor da variavel 3\n");
        scanf("%d", &vari3);
      }

      if (vari3 != 0)
      {
        printf("Insira o valor da variavel 4\n");
        scanf("%d", &vari4);
      }

      if (vari1 == -1 || vari2 == -1 || vari3 == -1 || vari4 == -1)
      {

        if (A == 0)
        {
          A = 1;
        }
        else
        {
          A = 0;
        }
      }

      if (vari1 == -2 || vari2 == -2 || vari3 == -2 || vari4 == -2)
      {

        if (B == 0)
        {
          B = 1;
        }
        else
        {
          B = 0;
        }
      }

      if (vari1 == -3 || vari2 == -3 || vari3 == -3 || vari4 == -3)
      {

        if (C == 0)
        {
          C = 1;
        }
        else
        {
          C = 0;
        }
      }

      quatro = AND(A, B);

      if (vari1 == -4 || vari2 == -4 || vari3 == -4 || vari4 == -4)
      {
        if (quatro == 0)
        {
          quatro = 1;
        }
        else
        {
          quatro = 0;
        }
      }

      seis = NOT(C);

      if (vari1 == -6 || vari2 == -6 || vari3 == -6 || vari4 == -6)
      {
        if (seis == 0)
        {
          seis = 1;
        }
        else
        {
          seis = 0;
        }
      }

      oito = OR(quatro, seis);

      if (vari1 == -8 || vari2 == -8 || vari3 == -8 || vari4 == -8)
      {
        if (oito == 0)
        {
          oito = 1;
        }
        else
        {
          oito = 0;
        }
      }

      nove = OR(quatro, C);

      if (vari1 == -9 || vari2 == -9 || vari3 == -9 || vari4 == -9)
      {
        if (nove == 0)
        {
          nove = 1;
        }
        else
        {
          nove = 0;
        }
      }

      dez = OR(oito, nove);

      if (vari1 == -10 || vari2 == -10 || vari3 == -10 || vari4 == -10)
      {
        if (dez == 0)
        {
          dez = 1;
        }
        else
        {
          dez = 0;
        }
      }

      contador++;
      printf("Resultado Logico %d\n", dez);
    }
  }
  else
  {
    printf("Programa não executado =/");
  }

  return 0;
}

/*
if (vari1 == -1 || vari2 == -1 || vari3 == -1 || vari4 == -1)
      {
        A = 1;
      }

      if (vari1 == -2 || vari2 == -2 || vari3 == -2 || vari4 == -2)
      {
        B = 1;
      }

      if (vari1 == -3 || vari2 == -3 || vari3 == -3 || vari4 == -3)
      {
        C = 1;
      }

      if (vari1 == -4 || vari2 == -4 || vari3 == -4 || vari4 == -4)
      {
        quatro = AND(A, B);

        if (quatro == 0)
        {
          quatro = 1;
        }
        else
        {
          quatro = 0;
        }
      }

      if (vari1 == -5 || vari2 == -5 || vari3 == -5 || vari4 == -5)
      {

        cinco = AND(A, B);

        if (cinco == 0)
        {
          cinco = 1;
        }
        else
        {
          cinco = 0;
        }
      }

      if (vari1 == -6 || vari2 == -6 || vari3 == -6 || vari4 == -6)
      {
        seis = NOT(C);

        if (seis == 0)
        {
          seis = 1;
        }
        else
        {
          seis = 0;
        }
      }

      if (vari1 == -7 || vari2 == -7 || vari3 == -7 || vari4 == -7)
      {
        sete = C;

        if (sete == 0)
        {
          sete = 1;
        }
        else
        {
          sete = 0;
        }
      }

      if (vari1 == -8 || vari2 == -8 || vari3 == -8 || vari4 == -8)
      {
        oito = OR(um, seis);

        if (oito == 0)
        {
          oito = 1;
        }
        else
        {
          oito = 0;
        }
      }

      if (vari1 == -9 || vari2 == -9 || vari3 == -9 || vari4 == -9)
      {
        nove = OR(um, C);

        if (nove == 0)
        {
          nove = 1;
        }
        else
        {
          nove = 0;
        }
      }

      if (vari1 == -10 || vari2 == -10 || vari3 == -10 || vari4 == -10)
      {
        dez = OR(oito, nove);

        if (dez == 0)
        {
          dez = 1;
        }
        else
        {
          dez = 0;
        }
      }*/