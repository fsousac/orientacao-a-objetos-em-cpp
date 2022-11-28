#include <iostream>

using namespace std;

void multiply(float);

int main(){
    float num1;
    do {
        cout<<"Digite um numero real positivo:\n";
        cin>>num1;
    } while (num1<0);
    multiply(num1);

    return 0;
}

void multiply(float num){
    for (int i = 1; i <= 10; ++i) {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }
}