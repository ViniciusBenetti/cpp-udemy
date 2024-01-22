#include <iostream>
#include <cmath>

int main(){
//Dado um inteiro não-negativo n, determinar n!

    std::cout << "digite um inteiro não negativo" << std::endl; 
    int i,n,fat=1;
    std::cin >> n;
    for(i=1;i<=n;i++){
        fat*=i;
    }
    std::cout << "fatorial de: " << n << "=" << fat << std::endl;


//Dados n e dois números inteiros positivos i e j diferentes de 0, imprimir em ordem crescente os n primeiros naturais que são múltiplos de i ou de j e ou de ambos.
//Exemplo: Para n = 6 , i = 2 e j = 3 a saída deverá ser : 0,2,3,4,6,8.
    std::cout << "digite o multiplo 1:" << std::endl;
    int m1;
    std::cin >> m1; 
    std::cout << "digite o multiplo 2:" << std::endl;
    int m2;
    std::cin >> m2;
    std::cout << "digite quantos numeros quer ver:" << std::endl;
    int quantos,num=0;
    std::cin >> quantos;

    while(quantos >0){
        if(num%m1 == 0 && num%m2 == 0){
            if(quantos == 1){
                std::cout << num;
            }else{
                 std::cout << num << ",";
            }           
            quantos--;
        }num++;

    } std::cout << std::endl;

//Dizemos que um número natural é triangular se ele é produto de três números naturais consecutivos.
//Exemplo: 120 é triangular, pois 4.5.6 = 120.
    int natural=0,a=0;

    std::cout << "digite um numero\n";
    std::cin >> natural;

    for(int cont=1;cont<=natural;cont++){
        if(cont*(cont+1)*(cont+2) == natural){
            std::cout << " é um número triângular.\n";
            a++;
            break;
            
        }
        
    }if(a == 0){
        std::cout << " não é um número triÂngular.\n";      
    }
//Dado um inteiro positivo n, verificar se n é primo.
    int NUM;
    std::cout << "digite um numero.\n";
    std::cin >> NUM; 

    if(NUM%2 !=0 && NUM%3 !=0){
        std::cout << "é primo.\n";
    }else{
        std::cout << "não é primo.\n";
    }
//Dados dois números inteiros positivos, determinar o máximo divisor comum entre eles usando o algoritmo de Euclides.
    int NUM1,NUM2,MDC,k;
    
    std::cout << "digite um numero.\n";
    std::cin >> NUM1;
    std::cout << "digite outro numero.\n";
    std::cin >> NUM2;

    k = NUM1+NUM2;

    while(k >0){
        if(NUM1%k == 0 && NUM2%k == 0){
            MDC = k;
            std::cout << "o mdc entre " << NUM1 << " e " << NUM2 << " é " << MDC << std::endl;
            break;
        }k--;
    }

// Dizemos que um inteiro positivo n é perfeito se for igual à soma de seus divisores positivos diferentes de n.
//Exemplo: 6 é perfeito, pois 1+2+3 = 6.

    int Numero,c=0;

    std::cout << "digite um numero" << std::endl;
    std::cin >> Numero;

    for(int Count = 1;Count <= Numero;Count++){
        if(Count + Count + 1 + Count + 2 == Numero){
            std::cout << "é perfeito" << std::endl;
            c++;
        }
    }if(c == 1){
        std::cout << "não é perfeito" << std::endl;
    }
    
//Um matemático italiano da idade média conseguiu modelar o ritmo de crescimento da população de coelhos (1) através de uma seqüência de números naturais que passou a ser conhecida como seqüência de Fibonacci (2). O n-ésimo número da seqüência de Fibonacci Fn é dado pela seguinte fórmula de recorrência: firbonacci
    int fibo=0,seq;

    std::cout << "digite a sequencia de fib que quer ver" << std::endl;
    std::cin >> seq;

    for(int zzz=1;zzz<=seq;zzz++){
        fibo += zzz;
    }
    std::cout << "fibo: " << fibo << std::endl;
    

//Dizemos que um número i é congruente módulo m a j se i % m = j % m.

    int Num1,Num2,Cong,nesimo;
    
    std::cout << "digite um numero" << std::endl;
    std::cin >> Num1;
    std::cout << "digite outro numero" << std::endl;
    std::cin >> Num2;

    std::cout << "digite quantos numeros congruentes quer ver" << std::endl;
    std::cin >> nesimo;

    for(Cong=1;Cong<=nesimo;Cong++){

        if(Num1%Cong == Num2%Cong){
            std::cout << "é congruente a " << Cong << std::endl;
        }


    }
//Dado um número natural na base binária, transformá-lo para a base decimal.
    int nat=0;
    std::string bin;
     int size = bin.size();

    std::cout << "digite um numero binario" << std::endl;
    std::cin >> bin;

    for (int x = 0; x < size; x++) {
        if (bin[x] == '1'){
            nat += pow(2, size - 1 - x);
        }
    }

    std::cout << "O número decimal equivalente é: " << nat << std::endl;






}
