#include <iostream>

using namespace std;

int main(){
    cout << "Digite os valores de X e Y: "<<endl;
    int x, y, *ptr1, *ptr2;
    cin >> x >> y;
    ptr1 = &y;
    ptr2 = &x;

    cout << "Os conteudos trocados sao: "<<*ptr1<<" "<<*ptr2 << endl;
    
    return 0;
}