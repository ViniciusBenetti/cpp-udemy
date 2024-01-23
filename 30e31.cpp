#include <iostream>
#include <ctime>
#include <time.h>

int main(){
    int n = 10;
    int numero=0;
    int devolver0=0;
    int devolver1=0;
    int devolver2=0;
    srand((unsigned)time(NULL));

    std::cout << "digite a quantidade de elementos a sequência deve conter:\n";
    std::cin >> n; 

    for(int i =0;i<n;i++){
        numero = 0;
        std::cout << "digite o " << i+1<< " numero da sequência:\n";
        std::cin >> numero;
        if(numero%2==0){
            devolver0++;
        }else{
            devolver1++;
        }

    }if(devolver0 > 0 && devolver1 > 0){
        std::cout << "-1.\n";

    }else{
        if(devolver1 > 0){
            std::cout << "0.\n";
        }else{
            std::cout << "1.\n";
        }
    }
    std::cout << "quantas vezes você jogou o dado:\n";
    std::cin >> n;
    int numero1=0,numero2=0,numero3=0,numero4=0,numero5=0,numero6=0;
    int numeroAleatorio = 0;

    for(int i=0;i<n;i++){

        numeroAleatorio = rand() % 6 + 1;
        
        if(numeroAleatorio == 1){
            numero1++;
        }
        else if(numeroAleatorio == 2){
            numero2++;
        }
        else if(numeroAleatorio == 3){
            numero3++;
        }
        else if(numeroAleatorio == 4){
            numero4++;
        }
        else if(numeroAleatorio == 5){
            numero5++;
        }
        else if(numeroAleatorio == 6){
            numero6++;
        }

    }
    std::cout 
    << "face 1: " << numero1 << std::endl
    << "face 2: " << numero2 << std::endl
    << "face 3: " << numero3 << std::endl 
    << "face 4: " << numero4 << std::endl
    << "face 5: " << numero5 << std::endl 
    << "face 6: " << numero6 << std::endl;
    
}