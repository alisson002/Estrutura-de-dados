#include <iostream>

using namespace std;

void quebra(int n, int &prim, int &ult, int &miolo);

int separarNumeros(int n);

int main()
{
    int n=0,prim=0,ult=0,miolo=0;

    if(n<0||n==0){

        cout<<"Informe o numero > 0: ";
        cin>>n;

    }

    quebra(n,prim,ult,miolo);

    cout<<"Primeiro: "<<prim<<endl;
    cout<<"Miolo: "<<miolo<<endl;
    cout<<"Ultimo: "<<ult<<endl;

}

int separarNumeros(int n){

    while(n>=10){

        n-=10;

    }

return n;
}

void quebra(int n, int &prim, int &ult, int &miolo){

    int m=1,x=0,vet[100];

    while(n>0){

       vet[x] = separarNumeros(n);
       x++;
       n = n/10;
    }

    prim = vet[x-1];
    ult = vet[0];

    for(int i=1;i<x-1;i++){
        miolo = miolo + vet[i]*m;
        m = m*10;
    }

}
