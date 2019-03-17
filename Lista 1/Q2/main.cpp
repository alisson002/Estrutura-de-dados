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

   if(vet[0]==vet[x-1]){

       cout<<"Sim"<<endl;
   }
   else{

       cout<<"Nao"<<endl;
   }


return 0;
}
