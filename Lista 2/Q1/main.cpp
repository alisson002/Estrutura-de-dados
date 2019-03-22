#include <iostream>

using namespace std;

void cedulas(float v, int &um, int &cinco, int &dez, int &vin);

int main()
{
   float v;
   int um,cinco,dez,vin;

   um = 0;
   cinco = 0;
   dez = 0;
   vin = 0;

   cout<<"Informe o valor em dinheiro: ";
   cin>>v;
   cout<<endl;

   if(v<0){
       cout<<"Informe o valor em dinheiro: ";
       cin>>v;
   }

   cedulas(v,um,cinco,dez,vin);

   cout<<"Notas de 20: "<<vin<<endl;
   cout<<"Notas de 10: "<<dez<<endl;
   cout<<"Notas de 5: "<<cinco<<endl;
   cout<<"Notas de 1: "<<um<<endl;

   cout<<endl;

return 0;
}

void cedulas(float v, int &um, int &cinco, int &dez, int &vin){

    while (v>0) {

        if(v>=20){
            v = v - 20;
            vin++;
        }
        else if(v>=10&&v<20){
            v = v - 10;
            dez++;
        }
        else if(v>=5&&v<10){
            v = v - 5;
            cinco++;
        }
        else{
            v = v - 1;
            um++;
        }

    }
}
