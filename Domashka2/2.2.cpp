#include <iostream>
#include <cstdlib>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>

int main() 
{  
    setlocale(LC_ALL, "");
    int w, x, a;
    cout << "Введите x:" << endl;
    cin >> x;
    cout << "Введите a:" << endl;
    cin >> a;

    if (abs(x) < 1){
        w = a*log(abs(x));
        cout << "W=" << w;
    }
    else if (abs(x)>=1){
        w = sqrt(a-(x*x));
        cout << "W=" << w;
    }



    
}