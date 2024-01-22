#include <iostream>
#include <string>

int contadigitos(const int numero, const int digito);
int encaixa(const int numero1,const int numero2);


int encaixa(const int numero1,const int numero2){

    if((numero1 - numero2)%10 == 0 && numero1>=numero2){
        return 1;
    }
    std::string numero1str = std::to_string(numero1);
    std::string numero2str = std::to_string(numero2);
    int numero2tam = numero1str.size();
    int numero1tam = numero1str.size();
    int contador = 0;
    if(numero1 > numero2){
        for(int i = 0;i < numero1tam;i++){
            for(int j = 0;j<i+numero2tam;j++){
                if(numero1str[i] == numero2str[j]){
                    contador++;
                }
            }
        }if(contador == numero2tam){
            return 2;
        }

    }
    if(numero2 > numero1){
        for(int i = 0;i < numero2tam;i++){
            for(int j = 0;j<i+numero1tam;j++){
                if(numero2str[i] == numero1str[j]){
                    contador++;
                }
            }
        }if(contador == numero1tam){
            return 3;
        }
    }
    return 0;

}

int contadigitos(const int numero, const int digito){
    int numeroabs = abs(numero);
    int contador=0;
    std::string numerostr,digitostr;

    digitostr = std::to_string(digito);
    numerostr = std::to_string(numeroabs);


    const int numerotam = numerostr.size();
    
    
    for(int i = 0;i<numerotam;i++){
        if (digitostr[0] == numerostr[i]){
            contador++;
        }
    }

    return contador;
}


int main(){
/*Um número a é dito permutação de um número b se os dígitos de a formam uma permutação dos dígitos de b.
Exemplo:   5412434 é uma permutação de 4321445, mas não é uma permutação de 4312455.
Obs.: Considere que o dígito 0 (zero) não aparece nos números.
(a) Faça uma função contadígitos que dados um inteiro n e um inteiro d, 0 < d < 9, devolve quantas vezes o dígito d aparece em n.
(b) Usando a função do item anterior, faça um programa que lê dois inteiros positivos a e b e responda se a é permutação de b.
*/

    // (a)
    std::cout << "digite um número inteiro:\n";
    int n = 0;
    std::cin >> n;
    std::cout << "digite um digito:\n";
    int d = 0;
    std::cin >> d;
    //condição do problema
    if(d > -1 && d < 10 && n > 0){
        int quantas = contadigitos(n,d);
        std::cout << "o dígito " << d << " apareceu " << quantas <<
        " vezes no número " << n << std::endl;
       
    }else{
        std::cout << "O digito deve estar entre 0 e 10.\n";
        return 1;
    }


    // (b)
    std::cout << "digite dois numeros inteiros positivos:\n";
        std::cin >> n >> d;
        std::string numerostr = std::to_string(n);
        const int numerotam = numerostr.size();
        if (contadigitos(n,d) == numerotam){
            std::cout << "os números " << n << " e " << d << " são permutáveis.\n";
        }else{
            std::cout << "não são permutáveis.\n";
        }
    /*2.  (a) Construa uma função encaixa que dados dois inteiros positivos a e b verifica se b corresponde aos últimos dígitos de a.
    Ex.:
    a 	 b	 
    567890 	 890	=> encaixa
    1243	1243	=> encaixa
    2457	245 	=> não encaixa
    457	2457	=> não encaixa
    (b) Usando a função do item anterior, faça um programa que lê dois inteiros positivos a e b e verifica se o menor deles é segmento do outro.
    Exemplo:
    a	b	 
    567890	678	=> b é segmento de a
    1243	2212435	=> a é segmento de b
    235	236	=> um não é segmento do outro
    */

   //(a)
   std::cout << "digite dois números inteiros positivos:\n";
   int a =0,b=0;
   std::cin >> a >> b;
   if(a > 0 && b > 0){
        switch (encaixa(a,b))
        {
        case 0:
            std::cout << " não encaixam e não são segmentos.\n";
            break;

        case 1:
            std::cout << b << " encaixa em " << a << std::endl;
            break;
        case 2:
            std::cout << b << " é segmento de " << a << std::endl;
            break; 
        case 3:
            std::cout << a << " é segmento de " << b << std::endl;
            break;
        default:
            break;
        }
    
   }else{
    std::cout << "digite apenas numeros inteiros.\n";
    return 2;
   }



}