#include <iostream>

using namespace std;

int main(){

    int n,numero, mod1, mod2, consecutivo,resultado;

    cin>>n;

    while(n>0){

        cin>>numero;
        consecutivo=0;
        mod1=10;
        mod2=100;
        while (mod1<numero&&consecutivo==0){

            resultado=(numero%mod2)/(numero%mod1);
            if(resultado>10&&resultado==11){

                consecutivo=1;

            }
            else{

                consecutivo=0;

            }

            mod1=mod2;
            mod2=mod2*10;
        }
        if(consecutivo){

            cout<<"sim"<<endl;

        }
        else{

            cout<<"nao"<<endl;
        }
        n=n-1;
    }

return 0;
}
