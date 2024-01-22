#include <iostream>
#include <cmath>
#include <string>



int main(){
//Dado um número natural na base decimal, transformá-lo para a base binária.
int dec,bin=0,dig=0,base=1;

std::cout << "digite um numero decimal" << std::endl;
std::cin >> dec;


while(dec > 0){

    dig = dec%2;
    bin += dig * base;
    base *= 10;
    dec /=2;
}std::cout << bin << std::endl;

//Dados três números naturais, verificar se eles formam os lados de um triângulo retângulo.
int num1, num2, num3;

std::cout << "Digite três números: ";
std::cin >> num1 >> num2 >> num3;

if (num1 <= num2 && num1 <= num3) {
    if (num2 <= num3) {
        std::cout << num1 << " " << num2 << " " << num3 << std::endl;
    } else {
        std::cout << num1 << " " << num3 << " " << num2 << std::endl;
    }
} else if (num2 <= num1 && num2 <= num3) {
    if (num1 <= num3) {
        std::cout << num2 << " " << num1 << " " << num3 << std::endl;
    } else {
        std::cout << num2 << " " << num3 << " " << num1 << std::endl;
    }
} else {
    if (num1 <= num2) {
        std::cout << num3 << " " << num1 << " " << num2 << std::endl;
    } else {
        std::cout << num3 << " " << num2 << " " << num1 << std::endl;
    }
}
//Qualquer número natural de quatro algarismos pode ser dividido em duas dezenas formadas pelos seus dois primeiros e dois últimos dígitos.
int mil;
char milhar[4];

std::cout << "digite um numero de quatro algarismos" << std::endl;
std::cin >> milhar;

mil = std::stoi(milhar);


if(mil >=1000 && mil <=9999){
    std::cout << milhar[0] << milhar[1] << " " << milhar[2] << milhar[3] << std::endl;
}else{
    std::cout << "não tem quatro algarismos" << std::endl;
}

//Dados n e uma seqüência de n números inteiros, determinar o comprimento de um segmento crescente de comprimento máximo.
int size_seq,k,comp,item=1;
char seq[333];



std::cout << "digite o tamanho da sequencia de inteiros" << std::endl;
std::cin >> size_seq;

for(k=0;k<size_seq;k++){
    std::cout << "digite o " << k << " item" << std::endl;
    std::cin >> seq[k];
    if(k > 0){
        comp = seq[k] - seq[k-1];
        if(comp > item){
            item = comp;
        }
    }

}std::cout << item << std::endl;

//Dizemos que um número natural n é palíndromo se
//o 1º algarismo de n é igual ao seu último algarismo,
//o 2º algarismo de n é igual ao penúltimo algarismo,
//e assim sucessivamente.
//Exemplos:
//567765 e 32423 são palíndromos.
//567675 não é palíndromo.
//Dado um número natural   n > 10 , verificar se n é palíndrome.

std::string Numero1;
int Numero_size,cont,ador=1;

std::cout << "digite o n1:\n";
std::cin >> Numero1;

Numero_size = Numero1.size();

for(cont=0;cont<Numero_size;cont++){
    if(Numero1[cont] == Numero1[Numero_size-1+cont]){
        ador++;
    }

}if(cont == ador){
    std::cout << "é palíndrome" << std::endl;
}else{
    std::cout << "não é palíndrome" << std::endl;
}

//São dados dois números inteiros positivos p e q, sendo que o número de dígitos de p é menor ou igual ao número de dígitos de q. Verificar se p é um subnúmero de q.
std::string Numero,SubNumero;
int tamnum,tamsubnum;

std::cout << "digite um numero e um subnumero resp." << std::endl;
std::cin >> Numero >> SubNumero;

tamnum = Numero.size();
tamsubnum = SubNumero.length();

if(tamnum >= tamsubnum){
    int achou = Numero.find(SubNumero);
    if (achou != -1) { 
        std::cout << "Subnumero encontrado na posição: " << achou << std::endl;
    } else {
        std::cout << "Subnumero não encontrado." << std::endl;
    }
}else{
    std::cout << "subnumero maior do  que o numero" << std::endl;
}
}
