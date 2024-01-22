// Uma pessoa aplicou um capital de x complexos (1) a juros mensais de z durante 1 ano. Determinar o montante de cada mês durante este período.
#include <iostream>
#include <sstream>
#include <new>
#include <cmath>

double calcularFatorial(int numero) {
    double fatorial = 1.0;
    for (int i = 1; i <= numero; ++i) {
        fatorial *= i;
    }
    return fatorial;
}

int main(){
    auto x= 0.0,z=0.0,meses=12.0;
    std::cout << "digite o capital aplicado em R$$:\n";
    std::cin >> x;
    std::cout << "digite os juros mensais em %:\n";
    std::cin >> z;


    auto f = 1+z/100;
    auto c = x;

    for(auto i = 1;i<=meses;i++){
        c *= f;
        std::cout << "valor para o mês " << i << " = " << c << std::endl;

    }
//Dado um natural n, determine o número harmônico Hn:
    auto Hn = 0.0,n=0.0;
    std::cout << "digite um número natural: " << std::endl;
    std::cin >> n;

    while(n){
        Hn += (float)1/n;n--;      
    }
    std::cout <<
    "harmonico do numero inserido: " << Hn 
    << std::endl;
    return 0;


 /*Para n alunos de uma determinada classe são dadas as 3 notas das provas. Calcular a média aritmética 
    das provas de cada aluno, a média da classe, o número de aprovados e o número de reprovados (critério de aprovação:
    média maior ou igual a cinco).*/
    double soma=0,somamedias=0;
    int aprovados=0,reprovados=0;
    int n=0;

    std::cout << "Digite o número de alunos n:\n";
    std::cin >> n;
    double *notas = new double[n];
    double *medias = new double[n];

    for(int i = 1;i<=n;i++){
        std::cout << "Nota 1 do aluno:" << i << std::endl;
        std::cin >> notas[i-1];
        soma+= notas[i-1];
        std::cout << "Nota 2 do aluno:" << i << std::endl;
        std::cin >> notas[i-1];
        soma+= notas[i-1];
        std::cout << "Nota 3 do aluno:" << i << std::endl;
        std::cin >> notas[i-1];
        soma+= notas[i-1];
        medias[i-1] = soma/n;

        if(medias[i-1] >= 5){
            std::cout << "aluno aprovado com média= " << std::round(medias[i - 1] * 100.0) / 100.0 << std::endl;
            aprovados++;
        }else{
            std::cout << "aluno reprovado com média= " << std::round(medias[i - 1] * 100.0) / 100.0 << std::endl;
            reprovados++;
        }
        soma = 0;

    }
    for(int i=0;i<n;i++){
        somamedias += medias[i];
    }
    std::cout << "media da turma=" << std::round(somamedias/n* 100.0) / 100.0 << std::endl;
    std::cout << "numero de aprovados= " << aprovados << "numeros de reprovados= " << reprovados << std::endl;
    // Dados x real e n natural, calcular uma aproximação para cos x através dos n primeiros termos da seguinte série:

    double x = 0, result = 0, cos = 0;
    n = 0;

    std::cout << "Digite um número real:\n";
    std::cin >> x;
    std::cout << "Qual ordem quer ver?\n";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            cos += 1 - (pow(x, 2 * i) / calcularFatorial(2 * i));
        } else if (i % 2 == 0 && i >= 2) {
            cos += pow(x, 2 * i) / calcularFatorial(2 * i);
        } else if (i % 2 != 0 && i >= 3) {
            cos -= pow(x, 2 * i) / calcularFatorial(2 * i);
        }
    }

    std::cout << "O cosseno aproximado é: " << std::round(abs((cos * 100.0) / 100.0))<< std::endl;

    return 0;
}
