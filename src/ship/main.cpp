#include "menu.h"
#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Добро пожаловать в игру Морской бой!" << endl;
    system("pause");
    system("CLS");
    cout << "Начать игру - 1" << endl;
    cout << "Об игре - 2" << endl;
    cout << "Выход - 3" << endl;
    while (1) {
        char choice;
        cin.clear();
        cin.sync();
        cin >> choice;
        if (choice == '1') {
            system("CLS");
            play();
        } else if (choice == '2') {
            system("CLS");
            about_play();
        } else if (choice == '3') {
            return 0;
        }
        system("CLS");
        cout << "Начать игру - 1" << endl;
        cout << "Об игре - 2" << endl;
        cout << "Выход - 3" << endl;
    }
    return 0;
}

