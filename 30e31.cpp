#include <iostream>
#include <ctime>
#include <time.h>
#include <new>

int main(){
    int n = 10;
    int numero=0;
    int devolver0=0;
    int devolver1=0;
    int devolver2=0;
    int par=0;
    int impar=0;
    int alternate=0;
    bool naoAlternate = false;
    int contador = 0;
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

    std::cout << "digite a quantidade de elementos a sequência deve conter:\n";
    std::cin >> n;
    int *vetor = new int[n];

    for(int i=0;i<n;i++){
        if(contador == n){
            break;
        }
        
        for(int j=i;j<i*2;j++){
            if(contador == n){
            break;
            }

            std::cout << "digite a sequência " << i << std::endl;
            std::cin >> vetor[j];
            if(vetor[j]%2 == 0){
                par++;
            }else if(vetor[j]%2 != 0){
                impar++;

            }
        contador++;

        }

        if(par == i || impar == i ){
            alternate++;
        }else if(par !=0 && impar !=0){
            naoAlternate = true;
            std::cout << "não é piramidal m-alternate.\n";
            break;
        }else{

        }
        if(par != alternate-1){
            naoAlternate = true;
        }
        par = 0;
        impar = 0;



    }
    if(naoAlternate == false){
        std::cout << "é pirâmidal com " << alternate-1<< "-alternate.\n" << std::endl;
    }else{
        std::cout << "não é pirâmidal pois a última sequência está incompleta" << std::endl;
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