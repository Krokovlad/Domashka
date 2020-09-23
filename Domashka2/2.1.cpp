#include <iostream>
#include <cstdlib>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>

int main() 
{  
    setlocale(LC_ALL, "");
    int h, R, r, l, V, S;
    cout << "Введите высоту конуса:"<< endl;
    cin >> h;
    cout <<"Введите бОльший радиус основания конуса:" << endl;
    cin >> R;
    cout << "Введите меньший радиус основания конуса:"<< endl;
    cin >> r;
    cout << "Введите образующую конуса:"<< endl;
    cin >> l;

    V = 1/3*M_PI*h*(R*R+R*r+r*r);
    S = M_PI*(R*R+(R+r)*l+r*r);

    if(h == 0 || R == 0 || l == 0){
        cout << "Ввёдёные данные некорректны";
    }

    else if (r == 0){
        cout << "V= " << V << endl;
        cout << "S= " << S << endl;
        cout << "Конус не является усеченным";
    }

    else {
        cout << "V= " << V << endl;
        cout << "S= " << S << endl;
    }
    




    
}