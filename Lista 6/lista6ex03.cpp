#include <iostream>

using namespace std;

int main(){
    char eng[10] = {'E','N','G','E','N','H','A','R','I','A'};
    char *ptr = eng;
    cout<<"A string e: ";
    for (int i = 0; i < 10; i++)
    {
        cout << *ptr++ << " ";
    }
    


    return 0;
}