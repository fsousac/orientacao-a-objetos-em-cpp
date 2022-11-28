#include <iostream>

using namespace std;

void antsus(int);

int main(){
    int num;
    cout<<"Digite um numero para saber seu sucessor e antecessor:\n";
    cin>>num;
    antsus(num);
    return 0;
}

void antsus(int n){
    cout<<"O numero "<<n<<" tem antecessor "<<n-1<<" e sucessor "<<n+1;
}