#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() 
{  
    double a, b, c, D;
    cout << "Введите три числа" << endl;
    cin >> a >> b >> c;
    D = (b*b)-4.0*a*c;
    if(D < 0){
        cout << "Решений нет";
    }
    else if (D == 0){
        cout << "Корень Уравнения равен" << (-b/2.0*a);
    }
    else if (D > 0){
        cout << "Корни Уравнения равны" << ((-b)+sqrt(D))/2.0*a << "," << ((-b)-sqrt(D))/2.0*a;
    }
    

    return 0; 
}