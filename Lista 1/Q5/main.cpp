#include <iostream>

using namespace std;

//modo recursivo: https://pt.wikipedia.org/wiki/Algoritmo_de_Euclides#Exemplo

int main()
{

    int a,b;

    cout<<"informe os dois numeros: "<<endl;
    cin>>a>>b;

    while(a>0||b>0){

        if(a>b){
            a = a - b;
        }
        else if(b>a){
            b = b - a;
        }
        else{
            break;
        }
    }

    if(a==0){
        cout<<"MDC = "<<b<<endl;
    }
    else{
        cout<<"MDC = "<<a<<endl;
    }
return 0;
}
