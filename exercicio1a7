
#include <iostream>
#include <string>
#include <cmath>

int main(){
//Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados.
    int seq[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},i;

    for(i=0;i<=20;i++){
        std::cout << "quadrado de " << i << "=" << i * i << std::endl;

    }
//Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos.
    int soma,n;

    std::cout << "digite um número positivo inteiro" << std::endl;
    std::cin >> n; 

    if(n > 0){
        int L[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
        for (i=0;i<=n;i++){
            soma += L[i];
        }std::cout << "soma dos " << n << " primeiros numeros é: " << soma << std::endl;
    }else{
        std::cout << "não é inteiro positivo" << std::endl;
    }
//Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.
    int naturais,impares;
    std::cout << "digite um numero positivo inteiro" << std::endl;
    std::cin >>  n;
    while(n > 0){
        naturais = n;
        if(n % 2 !=0){
            impares =  naturais;
            std::cout << "primeiros naturais impares: " << impares << std::endl;

        }
        n--; 
    }
//Dados um inteiro x e um inteiro não-negativo n, calcular x^n.
    double x,exp=1;
    std::cout << "digite um número inteiro não negativo" << std::endl;
    std::cin >> n;

    std::cout << "digite um número qualquer" << std::endl; 
    std::cin >> x;

    if(n > 0 ){
        for(i=1;i<=x;i++){
            exp*= n;
        }

    }
    std::cout << x << " elevado a " << n << "=" << exp << std::endl;

//Uma loja de discos anota diariamente durante o mês de março a quantidade de discos vendidos. Determinar em que dia desse mês ocorreu a maior venda e qual foi a quantidade de discos vendida nesse dia. (vou botar por semana)
    int dias[] = {3,2,4,1,6,8,7},maior=0,dia;

    for(i=0;i<7;i++){
        if(dias[i] > maior){
            maior = dias[i];
            dia = i;
        }
    }if(dia == 0){
        std::cout << "o dia da semana foi segunda com: " << maior << " vendas" << std::endl;

    }else if(dia == 1){
        std::cout << "o dia da semana foi terca com: " << maior << " vendas" << std::endl;

    }else if(dia == 2){
        std::cout << "o dia da semana foi quarta com: " << maior << " vendas" << std::endl;
    
    }else if(dia == 3){
        std::cout << "o dia da semana foi quinta com: " << maior << " vendas" << std::endl;
    
    }else if(dia == 4){
        std::cout << "o dia da semana foi  sexta com: " << maior << " vendas" << std::endl;
    
    }else if(dia == 5){
        std::cout << "o dia da semana foi  sabado com: " << maior << " vendas" << std::endl;
    
    }else if(dia == 6){
        std::cout << "o dia da semana foi  domingo com: " << maior << " vendas" << std::endl;

}
//Dados o número n de alunos de uma turma de Introdução aos Autômatos a Pilha (MAC 414) e suas notas da primeira prova, determinar a maior e a menor nota obtidas por essa turma (Nota máxima = 100 e nota mínima = 0).
    int s,t,nota=0,notamenor=100,notamaior=0;

    std::cout << "quantos alunos fizeram a primeira prova?\n";
    std::cin >> t;

    for(s=1;s<=t;s++){
        std::cout << "digite a nota do " << s << " aluno:" <<std::endl;
        std::cin >> nota;
        if(notamaior < nota && nota <=100 && nota >=0){
            notamaior = nota;
        }else if(notamenor > nota && nota <=100 && nota >=0){
            notamenor = nota;
        }
    }std::cout << "maior nota: " << notamaior << std::endl;
     std::cout << "menor nota: " << notamenor << std::endl;

//Dados n e uma seqüência de n números inteiros, determinar a soma dos números pares.
    int num,in,pares=0;

    std::cout << "digite um numero" << std::endl;
    std::cin >> num;

    for(in=0;in<num;in++){
        if(in%2 == 0){
            pares+= in;
        }       
    }std::cout << "a soma de numeros pares de " << num << " é: " << pares << std::endl;


}
