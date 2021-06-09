#include "assistance.h"
#include <iostream>
#include <time.h>
using namespace std;

const int up = 8;
const int down = 2;
const int left_ = 4;
const int right_ = 6;

input_ship()
{
    ;
}

Computer()
{
    ;
}
end()
{
    ;
}
void move(
        int** field_P1_ship,
        int** field_P1_move,
        int** field_P2_ship,
        int** field_P2_move,
        int size)
{
    int queue = rand() % 2 + 1;
    int queue;
    int state;
    int murder;
    while (1) {
        print_field(field_P1_move, field_P1_ship, field_P2_move, size);
        int number, letter;
        cout << "Ходит игрок " << queue << endl;
        if (queue == 1) {
            input_ship();
        }

        else {
            Computer();
        }
        print_field(field_P1_move, field_P1_ship, field_P2_move, size);
        cout << "Ходит игрок " << queue << endl;
        cout << "ход:" << char(65 + letter) << number + 1 << endl;
        if (murderer == 0 && queue == 1) {
            queue = 2;
        } else if (murderer == 0 && queue == 2) {
            queue = 1;
        }
        switch (state) {
        case 0:
            cout << "мимо" << endl;
            break;
        case 1:
            cout << "попал" << endl;
            break;
        case 2:
            cout << "убил" << endl;
            break;
        case 3:
            cout << "повтор" << endl;
            break;
        }
        if (end())
            break;
        system("pause");
    }
    cout << "Победил игрок № " << queue << endl;
    print(size, field_P2_ship);
}
