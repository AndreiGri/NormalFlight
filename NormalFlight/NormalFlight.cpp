#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");

    int height = 0;
    int speed = 0;
    int const heightMin = 9000;
    int const heightMax = 9500;
    int const speedMin = 750;
    int const speedMax = 850;

    cout << endl;
    cout << " Введите высоту полёта самолёта: ";
    cin >> height;
    cout << " Введите скорость самолёта: ";
    cin >> speed;

    if (height <= 0 || speed <= 0) {
        cout << " Самолёт потерпел крушение!!!SOS!!!" << endl;
    }
    else {
        if (height < heightMin) {
            cout << " У вас низкая высота, необходимо поднятся минимум на " << heightMin - height << " метров!" << endl;
        }
        else {
            if (height > heightMax) {
                cout << " Вы летите слишком высоко, необходимо спуститься минимум на " << height - heightMax << " метров!" << endl;
            }
        }
        if (speed < speedMin) {
            cout << " У вас низкая скорость, необходимо ускориться минимум на " << speedMin - speed << " км/ч!" << endl;
        }
        else {
            if (speed > speedMax) {
                cout << " Вы летите слишком ,scnhj, необходимо снизить скорость минимум на " << speed - speedMax << " км/ч!" << endl;
            }
        }
    }
    if ((height >= heightMin && height <= heightMax) && (speed >= speedMin && speed <= speedMax)) {
        cout << " Полёт нормальный, продолжаем движение!!!" << endl;
    }


    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}