#include "iostream"

using namespace std;

class demo{
private:
    int dado = 10;
public:
    void exibe(){
        cout <<"Saudacao a partir de exibe"<<endl;
    }
    void saudacao(){
        cout<<"Adeus"<<endl;
    }
};

int main(void){
    demo d;
    demo *ptr;
    ptr = &d;
    ptr->exibe();
    ptr->saudacao();
}