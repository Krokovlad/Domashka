#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
#define _USE_MATH_DEFINES
 
int main()
{
    setlocale(LC_ALL, "Russian");  
    
    double a, b,    
           d;       
    
    cout << "Введите начало отрезка a>";   
    cin >> a;
    do {
        cout << "Введите конец отрезка b>"; 
        cin >> b;
    } 
    while (b <= a);
    
   
    do {
        system("cls");
        cout << "Введите шаг d>";
        cin >> d;
    } while ((b-a) < d);  
 
    ofstream OutFile("Table.txt");  
 
    double x(a),    
           y;       
    
    OutFile << "Таблица функции: y=(x*x-2*x+2)/(x-1)\n\n"
            << "x\t\ty" << endl;
    
    do {
        y = (x*x-2*x+2)/(x-1);
        OutFile << x << "\t\t" << y << endl;    
        x += d;
    } while (x <= b);
 
    OutFile.close();
    system("notepad.exe Table.txt"); 
}