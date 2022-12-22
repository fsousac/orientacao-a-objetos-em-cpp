#include <iostream>

using namespace std;

class circulo{
private:
    float raio;
public:
    void le_raio(){
        do{
            cout << "Digite o raio do circulo: ";
            cin >> raio;
            }while(raio <= 0);
    }
    void area(){
        cout << "A area do circulo e: " << 3.14 * raio * raio  << endl;
    }
    void circum(){
        cout << "A circunferencia do circulo e: " << 2 * 3.14 * raio << endl;
    }
};

int main(){
    circulo c;
    c.le_raio();
    c.area();
    c.circum();
    return 0;
}