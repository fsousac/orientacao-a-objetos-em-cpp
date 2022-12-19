#include <iostream>

using namespace std;

int main(){
    float num1, num2;
    char op;
    char res;
    int verify=0;
    do {
        cout<<"Digite o primeiro numero: ";
        cin>>num1;
        cout<<"Digite a operacao que deseja realizar (+,-,*,/): ";
        cin>>op;
        cout<<"Digite o segundo numero: ";
        cin>>num2;
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
        do {
            cout<<"Quer efetuar outra operacao? (S ou N)\n";
            cin>>res;
            res = toupper(res);
            if (res == 'S')
                verify=1;
            else if(res == 'N')
                verify=1;
        } while (verify==0);
    } while (res!='N');
}