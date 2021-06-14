#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
using namespace std;
void zeroing(int size, int** field)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field[i][j] = 0;
        }
    }
}
void print(int size, int** field_M)
{
    cout << "    ";
    char M[15]
            = {'A',
               'B',
               'C',
               'D',
               'E',
               'F',
               'G',
               'H',
               'I',
               'J',
               'K',
               'L',
               'M',
               'N',
               'O'};
    for (int i = 0; i < size; i++) {
        cout << M[i] << " ";
    }
    cout << endl;
    int k = 1;
    for (int i = 0; i < size; i++) {
        if (k >= 10) {
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
void print_field(
        int** field_P1_move, int** field_P1_ship, int** field_P2_move, int size)
{
    system("clear");
    cout << "Игрок 1" << endl;
    print(size, field_P1_move);
    cout << "Ваши корабли" << endl;
    print(size, field_P1_ship);
    cout << "Игрок 2" << endl;
    print(size, field_P2_move);
}
void print_field_move2(int** field_P1_move, int** field_P2_move, int size)
{
    system("clear");
    cout << "Игрок 1" << endl;
    print(size, field_P1_move);
    cout << "Игрок 2" << endl;
    print(size, field_P2_move);
}
