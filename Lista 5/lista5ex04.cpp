#include <iostream>

using namespace std;

class A{
    private:
        int a;
    public:
    void in(){
        cout<<"Digite o valor de a: ";
        cin>>a;
    }
    void out(){
        cout<<"O valor de a e: "<<a<<endl;
    }
};

class B : public A{
    private:
        int b;
    public:
    void entrada(){
        cout<<"Digite o valor de b: ";
        cin>>b;
    }
    void saida(){
        cout<<"O valor de b e: "<<b<<endl;
    }
};

class C : public B{
    private:
        int c;
    public:
    void obtem_heranca(){
        in();
        entrada();
        cout<<"Digite o valor de c: ";
        cin>>c;
    }
    void mostra_heranca(){
        out();
        saida();
        cout<<"O valor de c e: "<<c<<endl;
    }
};

int main(void){
    C num;

    num.obtem_heranca();
    num.mostra_heranca();
}
