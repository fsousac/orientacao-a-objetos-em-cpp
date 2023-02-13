#include <iostream>

using namespace std;

int main(){
    int vec[5] = {20,30,40,50,60};
    int *ptr = vec;
    cout<<"{";
    for (int i = 0; i < 4; i++)
    {
        cout << *ptr++ << ", ";
    };
    cout <<*ptr++<<"}"<<endl;
    

    return 0;
}