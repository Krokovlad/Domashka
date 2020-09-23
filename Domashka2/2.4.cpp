#include <iostream>
#include <cstdlib>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>

int main() 
{  
    setlocale(LC_ALL, "");
    int N, N1;
    cout << "Введите N:" << endl;
    cin >> N;
    N1=N+10;
    while (N<N1){
        N = N+1;
        cout << N << endl;
         
    }



    
}