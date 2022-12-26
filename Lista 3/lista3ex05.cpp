#include <iostream>
#include <string>

using namespace std;

class Int{
private:
    int i;
public:
    Int(){
        i = 0;
    }
    Int(int a){
        i = a;
    }
    void setInt(int c){
        i = c;
        }
    int showInt(){
        return i;
    };
    int sumInt(int a, int b){
        return a + b;
    }
};

int main(){
    Int A, B(7), C(3);
    int soma = B.sumInt(B.showInt(), C.showInt());
    A.setInt(soma);
    cout<<"O valor da soma e: "<<A.showInt()<<endl;
    return 0;
}