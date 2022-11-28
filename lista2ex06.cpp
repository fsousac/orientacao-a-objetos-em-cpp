#include <iostream>

using namespace std;

void mult(int, int);
int main(){
    int inval;
    int endval;
    cout<<"Digite o primeiro numero e o que quer descobrir o se e multiplo do primeiro:\n";
    cin>>inval>>endval;
    mult(inval,endval);
}

void mult(int num1, int num2){
    int res = 0;
    for (int i = num1; i <= num2; i+=num1) {
        if (i==num2){
            res=1;
        }
    }
    if (res==1)
        cout<<num2<<" e multiplo de "<<num1;
    else
        cout<<num2<<" nao e multiplo de "<<num1;
}