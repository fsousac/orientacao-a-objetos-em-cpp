#include <iostream>

using namespace std;

void calc(float, float, char);

int main(){
    float n1, n2;
    char oprtr;
    cout<<"\nDigite o primeiro numero: ";
    cin>>n1;
    cout<<"Digite a operacao que deseja realizar (+,-,*,/): ";
    cin>>oprtr;
    cout<<"Digite o segundo numero: ";
    cin>>n2;
    calc(n1,n2,oprtr);
}

void calc(float num1, float num2, char op){
    switch (op) {
        case '+':
            cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
            break;
        case '-':
            cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
            break;
        case '*':
            cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
            break;
        case '/':
            cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
            break;
        default:
            cout<<"Insira uma operacao valida"<<endl;
            break;
            }
}