#include "libship/menu.h"
#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Добро пожаловать в игру Морской бой!" << endl;
    sleep(1);
    system("clear");
    cout << "Начать игру - 1" << endl;
    cout << "Об игре - 2" << endl;
    cout << "Выход - 3" << endl;
    while (1) {
        char choice;
        cin.clear();
        cin.sync();
        cin >> choice;
        if (choice == '1') {
            system("clear");
            play();
        } else if (choice == '2') {
            system("clear");
            about_play();
        } else if (choice == '3') {
            return 0;
        }
        system("clear");
        cout << "Начать игру - 1" << endl;
        cout << "Об игре - 2" << endl;
        cout << "Выход - 3" << endl;
    }
    return 0;
}

