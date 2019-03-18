#include <iostream>
#include <stdlib.h> //rand() e srand()
#include <time.h> //time
#include <stdio.h> //NULL

using namespace std;

int main()
{
    int n,vet[1000],somaPar=0,cont=0;

    cout<<"Informe n: ";
    cin>>n;

    cout<<"Todos os numeros: "<<endl;

    srand(time(NULL));

    for(int i=0;i<n*n;i++){
        cont++;
        if(cont==n){
            vet[i] = 0;
            cont = 0;
        }
        else{
            vet[i] = rand()%1000;
        }
        cout<<vet[i]<<",";
    }

    cout<<endl;
    cout<<"Somente os pares: "<<endl;

    for(int i=0;i<n*n;i++){
        if(vet[i]%2==0){
            somaPar = somaPar+vet[i];
            cout<<vet[i]<<"+";
        }
    }

    cout<<" = "<<somaPar<<endl;

return 0;
}
