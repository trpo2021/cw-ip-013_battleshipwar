#include <conio.h>
#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
using namespace std;
const int single_deck = 4;
const int double_deck = 3;
const int three_deck = 2;
const int four_deck = 1;

const int up = 8;
const int down = 2;
const int left_ = 4;
const int right_ = 6;

void print(int size, int** field_M)
{
    cout << "    ";
    char M[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    for (int i = 0; i < size; i++) {
        cout << M[i] << " ";
    }
    cout << endl;
    int k = 1;
    for (int i = 0; i < size; i++) {
        if (k >= size) {
            cout << " " << k << " ";
            for (int j = 0; j < size; j++) {
                if (field_M[i][j] == 0 || field_M[i][j] == 3)
                    cout << "  ";
                else
                    cout << field_M[i][j] << " ";
            }

        } else {
            cout << "  " << k << " ";
            for (int j = 0; j < size; j++) {
                if (field_M[i][j] == 0 || field_M[i][j] == 3)
                    cout << "  ";
                else
                    cout << field_M[i][j] << " ";
            }
        }
        k++;
        cout << endl;
    }
}
recordingShip()
{
    ;
}
void shipInput(
        int& letter,
        int& number,
        int& route,
        int& state,
        int size,
        int sizeShip,
        int** field_M)
{
    while (state == 0) {
        cin.clear();
        cin.sync();

        char let;
        cin >> let;
        if (let >= 'A' && let <= 'J') {
            state = 1;
            letter = let - 'A';
        } else {
            cout << "Неправильно введена координата(буква)" << endl;
            state = 0;
            continue;
        }
        char str[2] = {' ', ' '};

        cin >> str;
        int number1 = str[0], number2 = str[1];
        if (number2 == 0 && number1 >= '0' && number1 <= '9') {
            number = number1 - '0' - 1;
            state = 1;
        } else if (number1 == '1' && number2 >= '0' && number2 - '0' == 0) {
            number = (10 + number2 - '0') - 1;
            state = 1;
        } else {
            cout << "Неправильно введена координата(цифра)" << endl;
            state = 0;
            continue;
        }
        if (sizeShip != 1) {
            cout << "Введите направление (4-влево,8-вверх,6-вправо,2-вниз)"
                 << endl;
            char route2;
            cin >> route2;
            if (route2 - '0' == up || route2 - '0' == down
                || route2 - '0' == left_ || route2 - '0' == right_)
                route = route2 - '0';
            else {
                cout << "Нет такого направления" << endl;
                continue;
            }
        }

        if (state == 1) {
            state = recordingShip();
            if (state == 0)
                cout << "Корабль слишком близко к другому" << endl;
        }

        if (state == 1)
            ;
    }
}
void createshipPL(int size, int** field_M)
{
    system("CLS");
    print(size, field_M);
    int state;
    int sizeShip;
    for (int i = 0; i < single_deck; i++) {
        cout << "Введите координату однопалубного корабля(например:D2)" << endl;
        int letter;
        int number;
        int route = 2;
        sizeShip = 1;
        state = 0;
        cout << i + 1 << " корабль" << endl;

        shipInput(letter, number, route, state, size, sizeShip, field_M);
        system("CLS");
        print(size, field_M);
    }

    for (int i = 0; i < double_deck; i++) {
        cout << "Введите первую координату двухпалубного корабля и "
                "направление(например:D2)"
             << endl;
        int letter;
        int number;
        int route = 0;
        sizeShip = 2;
        state = 0;
        cout << i + 1 << " корабль" << endl;
        shipInput(letter, number, route, state, size, sizeShip, field_M);
        system("CLS");
        print(size, field_M);
    }

    for (int i = 0; i < three_deck; i++) {
        cout << "Введите первую координату трехпалубного корабля и "
                "направление(например:D2)"
             << endl;
        int letter;
        int number;
        int route = 0;
        sizeShip = 3;
        state = 0;
        cout << i + 1 << " корабль" << endl;

        shipInput(letter, number, route, state, size, sizeShip, field_M);
        system("CLS");
        print(size, field_M);
    }

    for (int i = 0; i < four_deck; i++) {
        cout << "Введите первую координату четырехпалубного корабля и "
                "направление(например:D2)"
             << endl;
        int letter;
        int number;
        int route = 0;
        sizeShip = 4;
        state = 0;
        cout << i + 1 << " корабль" << endl;

        shipInput(letter, number, route, state, size, sizeShip, field_M);
        system("CLS");
        print(size, field_M);
    }
}
