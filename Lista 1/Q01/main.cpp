#include <iostream>

using namespace std;

int separarNumeros(int numero){

    while(numero>=10){

        numero-=10;

    }
return numero;
}


int main(){

    int numero,vet[100],x=0,a;

    cout<<"Insira um numero: ";
    cin>>numero;

    while(numero>0){

       vet[x] = separarNumeros(numero);
       x++;
       numero = numero/10;
    }

    for(int i=0;i<x;i++){

        if(vet[i]==vet[i+1]){
            a=true;
            break;
        }
        else{
            a=false;
        }

    }

    cout<<"Sim = 1; Nao = 0: "<<a<<endl;


return 0;
}
