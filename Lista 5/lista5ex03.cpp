#include "iostream"

using namespace std;

class Pai{
private:
    int num1;
public:
    void setNum1(){
        cout<<"Digite o primeiro numero: ";
        cin>>num1;
    }
    void showNum1(){
        cout<<"O primeiro numero e: "<<num1<<endl;
    }
};

class Filho : public Pai{
private:
    int num2;
public:
    void setNum2(){
        cout<<"Digite o segundo numero: ";
        cin>>num2;
    }
    void showNum2(){
        cout<<"O segundo numero e: "<<num2<<endl;
    }
    void setVal(){
        setNum1();
        setNum2();
    }
    void showVal(){
        showNum1();
        showNum2();
    }
};


int main(void) {
    Filho f1;
    Filho *fptr = &f1;

    fptr ->setVal();
    fptr ->showVal();
}