#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{  
    double a, b;
    cout << "Введите два числа" << endl;
    cin >> a >> b;
    if (b == 0){
        cout << "a+b=" << a+b << endl;
        cout << "a-b=" << a-b << endl;
        cout << "a*b=" << a*b << endl;
    }
    else {
        cout << "a+b=" << a+b << endl;
        cout << "a-b=" << a-b << endl;
        cout << "a*b=" << a*b << endl;
        cout << "a/b=" << a/b << endl;
    }

    return 0; 
}