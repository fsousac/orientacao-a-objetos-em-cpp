#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int num;
    int sum=0;
    cout<<"Digite um numero para ver as soma dos quadrados de 1 até ele"<<endl;
    cin>>num;
    cout<<endl;
    for (int i = 1; i <= num; i++) {
        sum+= pow(i,2);
    }
    cout << "A soma e " <<sum;
}