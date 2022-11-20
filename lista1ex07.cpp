#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string linha;
    linha.end();
    for (int i = 1; i < 6; ++i) {
        if(i>1){
            for (int c = i; c >= 1; --c) {
                linha+=("  "+ to_string(i));
            }
        } else {
            linha+= "        "+to_string(i);

        }
        cout<<linha<<setw(10+i);
        linha="";
        cout<<endl;
    }
    return 0;
}