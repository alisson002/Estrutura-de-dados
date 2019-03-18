#include <iostream>

using namespace std;

int main()
{
    int n,cont,vet[1000],somaPrimo=0;

    cout<<"Tamanho da sequencia: ";
    cin>>n;

    cout<<"Contando de 0 a "<<n<<":"<<endl;

    for(int i=0;i<=n;i++){
        cont=0;
        cout<<i<<",";
        vet[i] = i;
        for(int j=1;j<=i;j++){
            if(i>1){
                if(vet[i]%j==0){
                    cont++;
                }
            }
        }
        if(cont==2){
            somaPrimo = somaPrimo+vet[i];
        }
    }

    cout<<endl;
    cout<<"Soma dos numeros primos = "<<somaPrimo<<endl;

return 0;
}
