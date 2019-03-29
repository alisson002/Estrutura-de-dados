#include <iostream>

using namespace std;

int separarNumeros(int numero){

    while(numero>=10){

        numero-=10;

    }
return numero;
}

int main()
{
    int numero,vet[100],x=0,a,j,cond=true,i=0;

        cout<<"Insira um numero: ";
        cin>>numero;

        while(numero>0){

           vet[x] = separarNumeros(numero);
           x++;
           numero = numero/10;
        }

        cout<<endl;
        j=x-1;

        while(cond==true){

            if(vet[i]==vet[j]){
                cout<<vet[i]<<" = "<<vet[j]<<endl;
                cond=true;
            }
            else{
                cout<<vet[i]<<" != "<<vet[j]<<endl;
                cond=false;
            }
            j--;
            i++;

        }

        cout<<endl;
        cout<<"Sim = 1 | Nao = 0: "<<cond<<endl;

return 0;
}
