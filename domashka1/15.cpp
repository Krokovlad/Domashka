#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{  
    bool DayNight, OpenClose, OnOff;
    cout << "На улице день?"<< endl;
    cin >> DayNight;
    cout << "Шторы Открыты?"<< endl;
    cin >> OpenClose;
    cout << "Лампа Включена?"<< endl;
    cin >> OnOff;
    
    if ((DayNight == true && OpenClose == true) || (OnOff == true)){
        cout << "В комнате светло" << endl;
    }
    else {
        cout << "В комнате темно" <<endl;
    }
    return 0; 
}