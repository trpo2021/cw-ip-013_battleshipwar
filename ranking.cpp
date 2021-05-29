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
shipInput(letter, number, route, state, size, sizeShip, field_M)
{
    ;
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

