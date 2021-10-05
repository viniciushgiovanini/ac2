//Aluno: Vinícius Henrique Giovanini
//Turma: AC2
//Professor: Romanelli
//TP04

import java.io.*;
import java.util.Scanner;

class tp04 {

  public static void iniciarVetor(char[] vetor) {// função que inicia o vetor com todas as posicoes vazias

    for (int i = 0; i < vetor.length; i++) {

      vetor[i] = ' ';

    }

  }

  public static void limparVetorX(char[] vetor) {// Essa função vai limpar as 3 primeiras posicoes do vetor arrayletras,
                                                 // que eu guardei para serem alocado o valor de X, que na verdade é
                                                 // como por exemplo X=3, se ja tiver outro valor de X la presente ele
                                                 // desaloca pra ser alocado um novo

    for (int i = 0; i < 3; i++) {

      vetor[i] = ' ';

    }
  }

  public static void limparVetorY(char[] vetor) {

    for (int i = 3; i < 6; i++) {

      vetor[i] = ' ';

    }
  }

  public static void limparOP(char[] vetor) {// esse vetor vai pegar o local da memoria que ficou reservado para a locar
                                             // operacao, 0,1,2 ficou para X, 3,4,5 para Y e o resto para as OP, dessa
                                             // forma ele vai limpar de 6 em diante o vetor arrayletras

    for (int i = 6; i < vetor.length; i++) {

      vetor[i] = ' ';

    }

  }

  public static int qtdELEMENTOS(char[] vetor) {// quando a primeira posicao estiver vazia então quer dizer que tem que
                                                // ser alocado ali, se a 3 posicao estiver vazia tem que ser alocado
                                                // ali, dessa forma sempre vai ser alocado o x na posicao 0,1,2 e o y na
                                                // posicao 3,4,5, e para o resto quando for encontrado algum espaço
                                                // vazio no array de char pode fazer a alocacao.
                                                // IMPORTANTE, esse vetor conta a quantidade de casas presente no vetor,
                                                // então foi estabelecido que se não tiver nada no local de X,
                                                // provavelmente vem um novo valor de X então salva nessa área, mesma
                                                // coisa com o y, porém se os 2 ja estiver ocupado ele conta as casas e
                                                // onde estiver vazio ele vai salvar um novo elemento

    int contador = 0;
    int i = 0;
    boolean marcador = false;
    while (i < vetor.length && marcador == false) {

      if (vetor[0] == ' ') {

        contador = 0;
        marcador = true;

      } else {
        if (vetor[3] == ' ') {
          contador = 3;
          marcador = true;
        }
      }

      if (vetor[i] != ' ' && marcador == false) {

        contador++;

      }

      if (vetor[i] == ' ') {
        marcador = true;
      }

      i++;

    }

    return contador;

  }

  public static String Operacao(char[] arrayletras, String linha) {// essa funcao vai abrir um char array res, que vai
                                                                   // guardar na posicao 0 o valor de X na posicao 1 o
                                                                   // valor de Y, e na posicao 2 ele vai pegar a string
                                                                   // linha e comparar com os ifs, quando encontrar a
                                                                   // sua correspondencia verdadeira ele vai salvar o
                                                                   // número referente a operacao, na 2 posicao. Logo em
                                                                   // seguida vai transforma o char de array para a
                                                                   // string resultado e vai retornala

    String resultado = "";
    char[] res = new char[3];
    boolean marcador = false;
    int i = 0;
    while (i < arrayletras.length && marcador == false) {

      if (arrayletras[i] == ' ') {

        marcador = true;

      }

      if (arrayletras[i] == 'X') {

        res[0] = arrayletras[i + 2];

      }

      if (arrayletras[i] == 'Y') {

        res[1] = arrayletras[i + 2];

      }

      if (linha.equals("An;")) {

        res[2] = '0';

      }

      if (linha.equals("nAoB;")) {

        res[2] = '1';

      }

      if (linha.equals("AnB;")) {

        res[2] = '2';

      }

      if (linha.equals("zeroL;")) {

        res[2] = '3';

      }

      if (linha.equals("nAeB;")) {

        res[2] = '4';

      }

      if (linha.equals("Bn;")) {

        res[2] = '5';

      }

      if (linha.equals("AxB;")) {

        res[2] = '6';

      }

      if (linha.equals("ABn;")) {

        res[2] = '7';

      }

      if (linha.equals("AnoB;")) {

        res[2] = '8';

      }

      if (linha.equals("nAxB;")) {

        res[2] = '9';

      }

      if (linha.equals("B;")) {

        res[2] = 'A';

      }

      if (linha.equals("AB;")) {

        res[2] = 'B';

      }

      if (linha.equals("umL;")) {

        res[2] = 'C';

      }

      if (linha.equals("AoBn;")) {

        res[2] = 'D';

      }

      if (linha.equals("AoB;")) {

        res[2] = 'E';

      }

      if (linha.equals("A;")) {

        res[2] = 'F';

      }

      i++;

    }

    resultado = String.valueOf(res);

    return resultado;
  }

  public static void tratarLINHA(String linha, char[] arrayletras) {// essa funcao vai pega a string retirar o ponto e
                                                                    // virgula no final e salvar na posicao determinada.

    char letra;

    int qtdletras = linha.length();
    int qtdELEMENTOS = qtdELEMENTOS(arrayletras);// essa funcao é muito importante
    for (int i = 0; i < qtdletras; i++) {// esse for vai ler a posicao indexada por i da letra/string enviada pela
                                         // String linha

      letra = linha.charAt(i);
      if (letra != ';') {
        arrayletras[qtdELEMENTOS++] = letra;// para evitar sobreescritas sempre vai ser salvo elemento na posição que
                                            // qtdELEMENTOS indentificou como vazio
      }

    }

  }

  public static void abrirarquivo(String arquivonome, char[] arrayletras) throws FileNotFoundException {// Essa função
                                                                                                        // pega o
                                                                                                        // arquivo abre
                                                                                                        // ele, e vai
                                                                                                        // lendo linha
                                                                                                        // por linha até
                                                                                                        // a linha ser
                                                                                                        // igual a fim.
                                                                                                        // Se em algum
                                                                                                        // momento for
                                                                                                        // encontrado X,
                                                                                                        // Y ou algumas
                                                                                                        // das operações
                                                                                                        // na linha,
                                                                                                        // sera mandado
                                                                                                        // para a função
                                                                                                        // limparvetorX,
                                                                                                        // limparvetorY
                                                                                                        // e operacao
                                                                                                        // respectivamente

    Scanner leituraarq = new Scanner(new FileReader(arquivonome));
    String resultado = "";
    String linha = "";

    while (!(linha.equals("fim."))) {// vai ler linha do arquivo até a linha ser igual a fim.

      try {
        while (leituraarq.hasNext()) {

          linha = leituraarq.nextLine();// comando que ler linha por linha

          if (!(linha.equals("inicio"))) {// para evitar a leitura de inicio

            if (linha.contains("X")) {// se for encontrado X na linha sera executado a funcao limparVetorX e vai
                                      // mandar o array como parametro
              limparVetorX(arrayletras);
            }

            if (linha.contains("Y")) {// Essa função faz a mesma coisa que a X porém com mais 3 posicoes na frente de
                                      // X, se X reservou 0,1,2 essa reservou 3,4,5
              limparVetorY(arrayletras);
            }

            tratarLINHA(linha, arrayletras);// Essa função vai pegar a string da linha e mandar junto com o vetor
                                            // totalmente limpo

            if (linha.equals("An;")) {// Quando for encontrado qualquer operacao na linha

              resultado = Operacao(arrayletras, linha);// ele vai mandar o array contendo X Y e a operacao e mandar a
                                                       // linha contendo a string operacao, para a funcao operacao
              System.out.println(resultado);// vai imprimir o minemonico pronto
              limparOP(arrayletras);// e vai mandar para a funcao de limpar operacao, pois outras operacoes podem
                                    // ser feita usando o X e o Y ja presente no array
            }

            if (linha.equals("nAoB;")) {

              resultado = Operacao(arrayletras, linha);
              System.out.println(resultado);
              limparOP(arrayletras);
            }

            if (linha.equals("AnB;")) {

              resultado = Operacao(arrayletras, linha);
              System.out.println(resultado);
              limparOP(arrayletras);
            }

            if (linha.equals("zeroL;")) {

              resultado = Operacao(arrayletras, linha);
              System.out.println(resultado);
              limparOP(arrayletras);
            }

            if (linha.equals("nAeB;")) {

              resultado = Operacao(arrayletras, linha);
              System.out.println(resultado);
              limparOP(arrayletras);
            }

            if (linha.equals("Bn;")) {

              resultado = Operacao(arrayletras, linha);
              System.out.println(resultado);
              limparOP(arrayletras);
            }

            if (linha.equals("AxB;")) {

              resultado = Operacao(arrayletras, linha);
              System.out.println(resultado);
              limparOP(arrayletras);
            }

            if (linha.equals("ABn;")) {

              resultado = Operacao(arrayletras, linha);
              System.out.println(resultado);
              limparOP(arrayletras);
            }

            if (linha.equals("AnoB;")) {

              resultado = Operacao(arrayletras, linha);
              System.out.println(resultado);
              limparOP(arrayletras);
            }

            if (linha.equals("nAxB;")) {

              resultado = Operacao(arrayletras, linha);
              System.out.println(resultado);
              limparOP(arrayletras);
            }

            if (linha.equals("B;")) {

              resultado = Operacao(arrayletras, linha);
              System.out.println(resultado);
              limparOP(arrayletras);
            }

            if (linha.equals("AB;")) {

              resultado = Operacao(arrayletras, linha);
              System.out.println(resultado);
              limparOP(arrayletras);
            }

            if (linha.equals("umL;")) {

              resultado = Operacao(arrayletras, linha);
              System.out.println(resultado);
              limparOP(arrayletras);
            }

            if (linha.equals("AoBn;")) {

              resultado = Operacao(arrayletras, linha);
              System.out.println(resultado);
              limparOP(arrayletras);
            }

            if (linha.equals("AoB;")) {

              resultado = Operacao(arrayletras, linha);
              System.out.println(resultado);
              limparOP(arrayletras);
            }

            if (linha.equals("A;")) {

              resultado = Operacao(arrayletras, linha);
              System.out.println(resultado);
              limparOP(arrayletras);
            }

          }
        }

      } catch (Exception e) {
        System.out.println("ERRO");
      }

    }

    leituraarq.close();
  }

  public static void main(String[] args) throws FileNotFoundException {// Essa função pega nome do arquivo pelo Scanner
                                                                       // e armazena na string salvararquivo, ela também
                                                                       // abre um arrayletras de 100 posicoes.
                                                                       // Logo em seguida passa para a função inicar
                                                                       // vetor, que inicializa todas as posições do
                                                                       // vetor como vazia, logo em seguida ele manda
                                                                       // para a função abrir arquivo, a string salvar
                                                                       // arquivo e o vetor char vazio

    System.out.println("Insira o Nome do Arquivo");
    Scanner arquivo = new Scanner(System.in);
    String salvararquivo = arquivo.next();
    char[] arrayletras = new char[100];
    iniciarVetor(arrayletras);
    abrirarquivo(salvararquivo, arrayletras);

    arquivo.close();

  }

}