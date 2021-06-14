#include "libship/assistance.h"
#include "libship/move.h"
#include "libship/ranking.h"
#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
using namespace std;

void play()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");
    int sizeField;
    int win;
    int mode;
    int state = 0;
    cout << "Введите 1 для игры с компьютером, 2 для игры с другим игроком"
         << endl;
    while (state == 0) {
        char modeA;
        cin.clear();
        cin.sync();
        cin >> modeA;
        if (modeA == '1' || modeA == '2') {
            mode = modeA - '0';
            state = 1;
        }
    }
    state = 0;
    system("clear");
    cout << "Введите 1 для классической игры, 2 для усложненной" << endl;
    while (state == 0) {
        char sizeA;
        cin.clear();
        cin.sync();
        cin >> sizeA;
        if (sizeA == '1') {
            sizeField = 10;
            state = 1;
        } else if (sizeA == '2') {
            sizeField = 15;
            state = 1;
        }
    }
    state = 0;
    system("clear");

    int** field_P1_s = new int*[sizeField];
    int** field_P1_m = new int*[sizeField];
    int** field_P2_s = new int*[sizeField];
    int** field_P2_m = new int*[sizeField];
    for (int i = 0; i < sizeField; i++) {
        field_P1_s[i] = new int[sizeField];
        field_P1_m[i] = new int[sizeField];
        field_P2_s[i] = new int[sizeField];
        field_P2_m[i] = new int[sizeField];
    }
    zeroing(sizeField, field_P1_m);
    zeroing(sizeField, field_P2_m);
    zeroing(sizeField, field_P1_s);
    zeroing(sizeField, field_P2_s);

    int regime;
    char surname[30];
    cout << "Первый игрок, введите свое имя на английской раскладке, пожалуйста"
         << endl;
    cin >> surname;
    cin.clear();
    cin.sync();
    while (strcmp(surname, "Computer") == 0 || strlen(surname) >= 30) {
        system("clear");
        cout << "Ваше имя совпадает с именем другого игрока или слишком длинное"
             << endl;
        cout << "Первый игрок, введите свое имя на английской раскладке, "
                "пожалуйста"
             << endl;
        cin >> surname;
        cin.clear();
        cin.sync();
    }
    system("clear");
    cout << surname
         << " как вы будете заполнять свое поле? 1 - вручную, 2 - автоматически"
         << endl;
    while (state == 0) {
        char regimeA;
        cin.clear();
        cin.sync();
        cin >> regimeA;
        if (regimeA == '1' || regimeA == '2') {
            regime = regimeA - '0';
            state = 1;
        }
    }
    state = 0;
    system("clear");
    if (regime == 1)
        createshipPL(sizeField, field_P1_s);
    else {
        createshipRAND(sizeField, field_P1_s);
        if (mode == 2) {
            cout << "Внимание сейчас будет показано поле " << surname << endl;
            sleep(1);
            system("clear");

            cout << "Обратный отсчет!" << endl;
            for (int i = 10; i >= 0; i--) {
                cout << i << endl;
                sleep(1);
            }
            system("clear");

            print(sizeField, field_P1_s);
            sleep(3);
            system("clear");
        }
    }

    ////////////////////////////////////////////////////////////////////////////////////
    if (mode == 2) {
        char surname2[30];
        cout << "Второй игрок, введите свое имя на английской раскладке, "
                "пожалуйста"
             << endl;
        cin >> surname2;
        while (strcmp(surname2, "Computer") == 0
               || strcmp(surname, surname2) == 0 || strlen(surname) >= 30) {
            system("clear");
            cout << "Ваше имя совпадает с именем другого игрока или слишком "
                    "длинное"
                 << endl;
            cout << "Второй игрок, введите свое имя на английской раскладке, "
                    "пожалуйста"
                 << endl;
            cin >> surname2;
        }
        system("clear");
        cout << surname2
             << " как вы будете заполнять свое поле? 1 - вручную, 2 - "
                "автоматически"
             << endl;
        regime = -1;
        while (state == 0) {
            char regimeA;
            cin.clear();
            cin.sync();
            cin >> regimeA;
            if (regimeA == '1' || regimeA == '2') {
                regime = regimeA - '0';
                state = 1;
            }
        }
        state = 0;
        system("clear");
        if (regime == 1)
            createshipPL(sizeField, field_P2_s);
        else {
            createshipRAND(sizeField, field_P2_s);
            cout << "Внимание сейчас будет показано поле " << surname2 << endl;
            sleep(1);
            system("clear");
            cout << "Обратный отсчет!" << endl;
            for (int i = 10; i >= 0; i--) {
                cout << i << endl;
                sleep(3);
            }
            system("clear");
            print(sizeField, field_P2_s);
            sleep(1);
            system("clear");
        }
        move(field_P1_s,
             field_P1_m,
             field_P2_s,
             field_P2_m,
             sizeField,
             mode,
             win,
             surname,
             surname2);
    } else if (mode == 1) {
        char surname2[30] = "Computer";
        createshipRAND(sizeField, field_P2_s);
        move(field_P1_s,
             field_P1_m,
             field_P2_s,
             field_P2_m,
             sizeField,
             mode,
             win,
             surname,
             surname2);
    }

    delete[] field_P1_m;
    delete[] field_P2_m;
    delete[] field_P1_s;
    delete[] field_P2_s;
}
int about_play()
{
    cout << "Эта игра - консольная версия классического морского боя. "
            "Программа имеет 2 режима игры и 2 уровня сложности."
         << endl;
    sleep(1);
    cout << "1 режим игры - это игра с компьютером" << endl;
    sleep(1);
    cout << "2 режим игры - это игра с другим пользователем" << endl;
    sleep(1);
    cout << "Классический уровень - поле 10х10 на котором расставляется 10 "
            "кораблей"
         << endl;
    sleep(1);
    cout << "Усложненный уровень - поле 15х15 на котором расставляется 14 "
            "кораблей"
         << endl;
    sleep(1);
    return 0;
}
