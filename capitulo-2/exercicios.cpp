#include <iostream>
using namespace std;

int main(void){
    // 2.7 - significado dos objetos
    // (a) std::cin -> pede como entrada ao fluxo de caracteres um valor do teclado
    // (b) std::cout -> envia um conjunto de caracteres ao fluxo de saída da tela
    // 2.8 - preenche lacunas
    // (a) comentários
    // (b) std::cout
    // (c) instrução if
    // (d) aritméticas
    // (e) std::cin
    // 2.9 - escrever uma única instrução
    // (a) std::cout << "Entre com dois números";
    // (b) a = b + c;
    // (c) // Cálculo da folha de pagamento
    // (d) std::cin >> a >> b >> c;
    // 2.10 - V ou F
    // (a) V
    // (b) F
    // (c) F
    // (d) V
    // (e) V
    // 2.11 - preenche lacunas
    // (a) % / 
    // (b) O mais interno
    // (c) variável
    
    // 2.12 
    // Enunciado: O que é impresso, se algo for, quando cada uma das seguintes instruções C++ é executada? Se nada for impresso, então responda “nada”. Assuma x = 2 e y = 3.
    // (a) 2
    // (b) 4
    // (c) x=
    // (d) x = 2
    // (e) 5 = 5
    // (f) nada
    // (g) nada
    // (h) nada
    // (g) "
    //"
    
    // 2.13
    // Enunciado: Qual das instruções C++ a seguir contém variáveis cujos valores são substituídos?
    // (a) sim
    // (b) sim
    // (c) não
    // (d) não

    // 2.14 
    // Enunciado:Dada a equação algébrica y = ax3 + 7, qual das seguintes, se houver alguma, são instruções C++ corretas para essa equação?
    // Resposta: 
    // (a) e (e)
    // y=a*x*x*x+7 | y=a*(x*x*x)+7
    
    // 2.15
    // Enunciado: Declare a ordem de avaliação dos operadores em cada uma das seguintes instruções C++ e mostre o valor de x depois que cada instrução é realizada.
    // (a) x = 7 +(3) 3 *(1) 6 /(2) 2 -(4) 1
    // (b) x = 2 %(1) 2 +(4) 2 *(2) 2 -(5) 2 /(3) 2
    // (c) x = ( 3 *[5] 9 *[6] ( 3 +[4] ( 9 *[2] 3 /[3] (3[1]))))
    
    // 2.16
    // Enunciado: Escreva um programa que solicita ao usuário inserir dois números, obtém os dois números do usuário e imprime a soma, produto, diferença e quociente dos dois números.
    // int x, y;
    // cout << "Coloque dois nuemros inteiros: ";
    // cin >> x >> y;
    // cout << "A soma é: " << x + y << endl << "O produto é: " << x * y << endl << "A diferença é: " << x - y << endl << "O quociente é: " << x/y << endl;
    
    // 2.17
    // Enunciado: Escreva um programa que imprime os números 1 a 4 na mesma linha com cada par de números adjacentes separados por um espaço. Faça isso de várias maneiras:
    // (a) cout << "12 34";
    // (b) cout << "1" << "2 " << "3" << "4";
    // (c) cout << "1";
    // cout << "2 "
    // cout << "3";
    // cout << "4";
    
    // 2.18
    // Enunciado: Escreva um programa que pede para o usuário inserir dois inteiros, obtém os números do usuário, e então imprime o maior número seguido pelas palavras “é o maior”. Se os números forem iguais, imprime a mensagem “Estes números são iguais”.
    // cout << "Insira 2 números:\n";
    // cin >> x >> y;
    // if (x > y) cout << x << "é o maior";
    // if (x < y) cout << y << "é o maior";
    // if (x == y) cout << "Estes números são iguais"
    
    // 2.19
    // Enunciado: Escreva um programa que pede para o usuário inserir dois inteiros, obtém os números do usuário, e então imprime o maior número seguido pelas palavras “é o maior”. Se os números forem iguais, imprime a mensagem “Estes números são iguais”.
    // int x, y, z, soma;
    // cout << "Entre com três valores inteiros: ";
    // cin >> x >> y >> z;
    // soma = x + y + z;
    // cout << "Soma: " << soma << endl << "Média: " << soma/3 << endl << "Produto: " << x*y*z << endl;
    // if (x > y) 
    //     if (y > z) cout << "O menor: " << z << endl << "O maior: " << x << endl;
    // if (y > x) 
    //     if (x > z) cout << "O menor: " << z << endl << "O maior: " << y << endl;
    // if (y > z) 
    //     if (z > x) cout << "O menor: " << x << endl << "O maior: " << y << endl;
    // if (z > y) 
    //     if (y > x) cout << "O menor: " << x << endl << "O maior: " << z << endl;

    // 2.20
    // Enunciado: Escreva um programa que lê o raio de um círculo como um inteiro e imprime o diâmetro, a circunferência e a área do círculo. Utilize o valor constante 3,14159 para π. Faça todos os cálculos em instruções de saída. [Nota: Neste capítulo, discutimos apenas as constantes e variáveis de inteiro. No Capítulo 4, discutimos números de ponto flutuante, isto é, valores que podem ter pontos de fração decimal.]
    // int raio;
    // cout << "Insira o valor do raio de um círculo: ";
    // cin >> raio;
    // cout << "O diâmetro é: " << raio * 2 << endl << "O comprimento da circunferência: " << 2*raio*3.14159 << endl << "A área do círculo: " << 3.14159*raio*raio;

    // 2.21
    // Enunciado: Escreva um programa que imprime uma caixa, uma oval, uma seta e um losango da seguinte maneira:
    // cout << "*********" << "         " << "   ***   " << "         " << "    *    " << "         " << "    *    " << endl; // linha 1
    // cout << "*       *" << "         " << "  *   *  " << "         " << "   ***   " << "         " << "   * *   " << endl; // linha 2
    // cout << "*       *" << "         " << " *     * " << "         " << "  *****    " << "       " << "  *   *  " << endl; // linha 3
    // cout << "*       *" << "         " << " *     * " << "         " << "    *    " << "        " << "  *     *  " << endl; // linha 4
    // cout << "*       *" << "         " << " *     * " << "         " << "    *    " << "        " << " *       * " << endl; // linha 5
    // cout << "*       *" << "         " << " *     * " << "         " << "    *    " << "        " << "  *     *  " << endl; // linha 6
    // cout << "*       *" << "         " << " *     * " << "         " << "    *    " << "        " << "   *   *   " << endl; // linha 7
    // cout << "*       *" << "         " << "  *   *  " << "         " << "    *    " << "         " << "   * *   " << endl; // linha 8
    // cout << "*********" << "         " << "   ***   " << "         " << "    *    " << "         " << "    *    " << endl; // linha 9
    
    // 2.22
    // Enunciado:
    // O que o seguinte código imprime?
    // cout << “*\n**\n***\n****\n*****” << endl;
    // Resposta:
    // O código imprime uma pirâmide de asteriscos voltados à esquerda, onde cada linha contém um número crescente de asteriscos, começando com um asterisco na primeira linha e terminando com cinco asteriscos na última linha. A saída será:
    // *    
    // **
    // ***
    // ****
    // *****

    // 2.23
    // Enunciado: Escreva um programa que lê cinco inteiros e determina e imprime o maior e o menor inteiro no grupo. Utilize somente as técnicas de programação que você aprendeu neste capítulo.
    // Resposta:
    // int val1, val2, val3, val4, val5;
    // int maior, menor;
    // cout << "Coloque cinco valores inteiros: ";
    // cin >> val1 >> val2 >> val3 >> val4 >> val5;
    // maior = menor = val1; 
    // if (val2 > maior) maior = val2;
    // if (val3 > maior) maior = val3;
    // if (val4 > maior) maior = val4;
    // if (val5 > maior) maior = val5;
    // if (val2 < menor) menor = val2;
    // if (val3 < menor) menor = val3;
    // if (val4 < menor) menor = val4;
    // if (val5 < menor) menor = val5;
    // cout << "Maior: " << maior << endl;
    // cout << "Menor: " << menor << endl;

    // 2.24
    // Enunciado: Escreva um programa que lê um inteiro e determina e imprime se ele é ímpar ou par. [Dica: Utilize o operador módulo. Um número par é um múltiplo de dois. Qualquer múltiplo de dois deixa um resto de zero quando dividido por 2.]
    // Resposta:
    // int val1, paridade;
    // cout << "Coloque um valor:" << endl;
    // cin >> val1;
    // paridade = val1 % 2;
    // if (!paridade) cout << "É par" << endl;
    // if (paridade) cout << "É ímpar" << endl;

    // 2.25
    // Enunciado: Escreva um programa que lê dois inteiros e determina e imprime se o primeiro é um múltiplo do segundo. [Dica: Utilize o operador módulo.]
    // Resposta: 
    // int val1, val2;
    // cout << "Coloque 2 valores:" << endl; 
    // cin >> val1 >> val2;
    // if (!(val1 % val2)) cout << val1 << "É múltiplo de" << val2 << endl;

    // 2.26
    // Enunciado: Exiba o seguinte padrão de tabuleiro com oito instruções de saída e, em seguida, exiba o mesmo padrão utilizando o menor número de instruções possível.
    // Resposta:
    // Com 8 instruções:
    // cout << "* * * * * * *" << endl;
    // cout << " * * * * * * *" << endl;
    // cout << "* * * * * * *" << endl;
    // cout << " * * * * * * *" << endl;
    // cout << "* * * * * * *" << endl;
    // cout << " * * * * * * *" << endl;
    // cout << "* * * * * * *" << endl;
    // cout << " * * * * * * *" << endl;
    // Com o menor número de instruções:
    // cout << "* * * * * * *\n" << " * * * * * * *\n" << "* * * * * * *\n" << " * * * * * * *\n" << "* * * * * * *\n" << " * * * * * * *\n" << "* * * * * * *\n" << " * * * * * * *\n" << endl;

    // 2.27
    // Enunciado: Eis uma pequena antecipação do que está por vir. Neste capítulo, você aprendeu sobre inteiros e o tipo int. O C++ também pode representar letras maiúsculas, minúsculas e uma variedade considerável de símbolos especiais. O C++ utiliza inteiros pequenos internamente para representar cada caractere diferente. O conjunto de caracteres que um computador utiliza e das correspondentes representações na forma de inteiro desses caracteres é chamado conjunto de caracteres desse computador. Você pode imprimir um caractere colocando esse caractere entre aspas simples, como em
    //cout << ‘A’; // imprime um A maiúsculo
    //Você pode imprimir o equivalente inteiro de um caractere utilizando static_cast da seguinte maneira:
    //cout << static_cast< int >( ‘A’ ); // imprime 'A' como um inteiro
    // Isso é chamado de operação de coerção (introduzimos formalmente as coerções no Capítulo 4). Quando a instrução precedente executar, ela imprimirá o valor 65 (em sistemas que utilizam o conjunto de caracteres ASCII). Escreva um programa que imprime o número inteiro equivalente de um caractere digitado no teclado. Teste seu programa várias vezes utilizando letras maiúsculas, minúsculas, dígitos e caracteres especiais (como $).
    // Resposta:
    // int character;
    // cout << "Insira um caractere: " << endl;
    // cin >> character;
    // cout << "O número inteiro referente ao caractere inserido é: " << character << " | " << static_cast< int >(character)<< endl;
    // 2.28
    // Enunciado: Escreva um programa que insere um inteiro de cinco dígitos, separa o inteiro em seus dígitos individuais e imprime os dígitos separados entre si por três espaços cada. [Dica: Utilize operadores de divisão de inteiros e módulo.] Por exemplo, se o usuário digitar 42339, o programa deve imprimir:
    // int num; // Número de entrada
    // int d1, d2, d3, d4, d5; // Dígitos
    // cout << "Insira um número de 5 dígitos: " << endl;
    // cin >> num;
    // d5 = num % 10;
    // num /= 10;
    // d4 = num % 10;
    // num /= 10;
    // d3 = num % 10;
    // num /= 10;
    // d2 = num % 10;
    // num /= 10;
    // d1 = num % 10;
    // cout << d1 << "   " << d2 << "   " << d3 << "   " << d4 << "   " << d5 << endl;

    // 2.29
    // Enunciado: Utilizando apenas as técnicas aprendidas neste capítulo, escreva um programa que calcula os quadrados e cubos dos inteiros de 0 a 10 e usa tabulações para imprimir as seguintes tabelas de valores, elegantemente formatadas:
    // Resposta:
    // cout << "inteiro" << "\t\t" << "quadrado" << "\t" << "cubo" << endl;
    // cout << 0 << "\t\t" << (0*0) << "\t\t" << (0*0*0) << endl;
    // cout << 1 << "\t\t" << (1*1) << "\t\t" << (1*1*1) << endl;
    // cout << 2 << "\t\t" << (2*2) << "\t\t" << (2*2*2) << endl;
    // cout << 3 << "\t\t" << (3*3) << "\t\t" << (3*3*3) << endl;
    // cout << 4 << "\t\t" << (4*4) << "\t\t" << (4*4*4) << endl;
    // cout << 5 << "\t\t" << (5*5) << "\t\t" << (5*5*5) << endl;
    // cout << 6 << "\t\t" << (6*6) << "\t\t" << (6*6*6) << endl;
    // cout << 7 << "\t\t" << (7*7) << "\t\t" << (7*7*7) << endl;
    // cout << 8 << "\t\t" << (8*8) << "\t\t" << (8*8*8) << endl;
    // cout << 9 << "\t\t" << (9*9) << "\t\t" << (9*9*9) << endl;
    // cout << 10 << "\t\t" << (10*10) << "\t\t" << (10*10*10) << endl;
}