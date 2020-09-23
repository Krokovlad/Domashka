#include <iostream>
#include <cstdlib>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>

int main() 
{  
    setlocale(LC_ALL, "");
    int x, y, b, z;
    cout << "Введите x:" << endl;
    cin >> x;
    cout << "Введите y:" << endl;
    cin >> y;
    cout << "Введите b:" << endl;
    cin >> b;

    z = log(b-y)*sqrt(b-x);
    cout << "z==" << z;



    
}