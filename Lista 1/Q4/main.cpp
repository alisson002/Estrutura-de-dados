#include <iostream>

using namespace std;

int main()
{
    int n,i=0,j=1,k=2;

    int a = false;

    cout<<"informe o numero: ";
    cin>>n;

    while(a==false){

        if((i*j*k)<n){

            i++;
            j++;
            k++;

        }
        else if((i*j*k)==n){

            cout<<"Sim, "<<n<<" eh triangular, pois: ("<<i<<"*"<<j<<"*"<<k<<") = "<<n<<endl;
            a=true;

        }
        else{

            cout<<n<<" Nao eh triangular."<<endl;
            a=true;

        }
    }
return 0;
}
