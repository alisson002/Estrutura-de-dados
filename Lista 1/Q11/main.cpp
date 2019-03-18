#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,k=1;

    cout<<"n = ";
    cin>>n;
    cout<<"Sequencia de 1 a "<<n<<endl;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                if(i==sqrt(pow(k,2)+pow(j,2))){
                    cout<<"(cateto,cateto,hipotenuza) = "<<"("<<j<<","<<k<<","<<i<<")"<<endl;
                }
            }
        }
    }

}
