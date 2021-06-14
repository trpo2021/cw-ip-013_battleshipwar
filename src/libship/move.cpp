#include "libship/assistance.h"
#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
using namespace std;

void input_ship(int& letter, int& number, int size)
{
    const int easy_size = 10;
    int state = 0;
    char end_letter;
    int end_number;
    if (size == easy_size) {
        end_letter = 'J';
        end_number = 0;
    } else {
        end_letter = 'O';
        end_number = 5;
    }

    while (state == 0) {
        cin.clear();
        cin.sync();
        cout << "Введите клетку в которую хотите выстрелить (Например:D2)"
             << endl;
        char let;
        cin >> let;
        if (let >= 'A' && let <= end_letter) {
            state = 1;
            letter = let - 'A';
        } else {
            cout << "Неправильно введена координата(буква)" << endl;
            continue;
        }
        char str[2] = {' ', ' '};

        cin >> str;
        int number1 = str[0], number2 = str[1];
        if (number2 == 0 && number1 >= '0' && number1 <= '9') {
            number = number1 - '0' - 1;
            state = 1;
        } else if (
                number1 == '1' && number2 >= '0'
                && number2 - '0' <= end_number) {
            number = (10 + number2 - '0') - 1;
            state = 1;
        } else
            cout << "Неправильно введена координата(цифра)" << endl;
    }
}

int end(int** field_P1_ship, int** field_P2_ship, int size, int sel)
{
    if (sel == 1) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (field_P2_ship[i][j] == 1)
                    return 1;
            }
        }
    } else {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (field_P1_ship[i][j] == 1)
                    return 1;
            }
        }
    }

    return 0;
}
int check_killed(int letter, int number, int** field_P2_ship, int size)
{
    int length = 0;
    int n = size - 1;
    int N = 1, S = 1, W = 1, E = 1;

    while (number - N >= 0 && number - N <= n
           && (field_P2_ship[number - N][letter] == 1
               || field_P2_ship[number - N][letter] == 2)) {
        if (field_P2_ship[number - N][letter] == 1)
            length++;
        N++;
    }
    while (number + S >= 0 && number + S <= n
           && (field_P2_ship[number + S][letter] == 1
               || field_P2_ship[number + S][letter] == 2)) {
        if (field_P2_ship[number + S][letter] == 1)
            length++;
        S++;
    }
    while (letter + E >= 0 && letter + E <= n
           && (field_P2_ship[number][letter + E] == 1
               || field_P2_ship[number][letter + E] == 2)) {
        if (field_P2_ship[number][letter + E] == 1)
            length++;
        E++;
    }
    while (letter - W >= 0 && letter - W <= n
           && (field_P2_ship[number][letter - W] == 1
               || field_P2_ship[number][letter - W] == 2)) {
        if (field_P2_ship[number][letter - W] == 1)
            length++;
        W++;
    }
    if (length == 0)
        return 1;
    else
        return 0;
}

void move_state(
        int** field_P1_move,
        int** field_P2_ship,
        int size,
        int& murderer,
        int letter,
        int number,
        int& state)
{
    if (field_P1_move[number][letter] == 1
        || field_P1_move[number][letter] == 3) {
        state = 3;
        murderer = 0;
    }

    else if (field_P2_ship[number][letter] == 1) {
        field_P2_ship[number][letter] = 2;
        field_P1_move[number][letter] = 2;
        murderer = 1;
        if (check_killed(letter, number, field_P2_ship, size) == 0)
            state = 1;
        else
            state = 2;

    } else if (field_P2_ship[number][letter] == 0) {
        field_P1_move[number][letter] = 1;
        state = 0;
        murderer = 0;
    } else if (field_P2_ship[number][letter] == 2) {
        state = 3;
        murderer = 0;
    } else if (field_P2_ship[number][letter] == 3) {
        state = 3;
        murderer = 0;
    }
}
void near_vert(int** field_P2_move, int letter, int number, int n, int side)
{
    if (number + side >= 0 && number + side <= n) {
        if (field_P2_move[number + side][letter] != 1)
            field_P2_move[number + side][letter] = 3;
        if (letter - 1 >= 0 && letter - 1 <= n
            && field_P2_move[number + side][letter - 1] != 1) {
            field_P2_move[number + side][letter - 1] = 3;
        }
        if (letter + 1 >= 0 && letter + 1 <= n
            && field_P2_move[number + side][letter + 1] != 1) {
            field_P2_move[number + side][letter + 1] = 3;
        }
    }
    while (number >= 0 && number <= n && field_P2_move[number][letter] == 2) {
        if (letter - 1 >= 0 && letter - 1 <= n
            && field_P2_move[number][letter - 1] != 1) {
            field_P2_move[number][letter - 1] = 3;
        }
        if (letter + 1 >= 0 && letter + 1 <= n
            && field_P2_move[number][letter + 1] != 1) {
            field_P2_move[number][letter + 1] = 3;
        }
        number = number - side;
    }
    if (number >= 0 && number <= n) {
        if (field_P2_move[number][letter] != 1)
            field_P2_move[number][letter] = 3;
        if (letter - 1 >= 0 && letter - 1 <= n
            && field_P2_move[number][letter - 1] != 1) {
            field_P2_move[number][letter - 1] = 3;
        }
        if (letter + 1 >= 0 && letter + 1 <= n
            && field_P2_move[number][letter + 1] != 1) {
            field_P2_move[number][letter + 1] = 3;
        }
    }
}
void near_horiz(int** field_P2_move, int letter, int number, int n, int side)
{
    if (letter + side >= 0 && letter + side <= n) {
        if (field_P2_move[number][letter + side] != 1)
            field_P2_move[number][letter + side] = 3;
        if (number - 1 >= 0 && number - 1 <= n
            && field_P2_move[number - 1][letter + side] != 1) {
            field_P2_move[number - 1][letter + side] = 3;
        }
        if (number + 1 >= 0 && number + 1 <= n
            && field_P2_move[number + 1][letter + side] != 1) {
            field_P2_move[number + 1][letter + side] = 3;
        }
    }
    while (letter >= 0 && letter <= n && field_P2_move[number][letter] == 2) {
        if (number - 1 >= 0 && number - 1 <= n
            && field_P2_move[number - 1][letter] != 1) {
            field_P2_move[number - 1][letter] = 3;
        }
        if (number + 1 >= 0 && number + 1 <= n
            && field_P2_move[number + 1][letter] != 1) {
            field_P2_move[number + 1][letter] = 3;
        }
        letter = letter - side;
    }
    if (letter >= 0 && letter <= n) {
        if (field_P2_move[number][letter] != 1)
            field_P2_move[number][letter] = 3;
        if (number - 1 >= 0 && number - 1 <= n
            && field_P2_move[number - 1][letter] != 1) {
            field_P2_move[number - 1][letter] = 3;
        }
        if (number + 1 >= 0 && number + 1 <= n
            && field_P2_move[number + 1][letter] != 1) {
            field_P2_move[number + 1][letter] = 3;
        }
    }
}

void near_the_ship(int** field_P2_move, int letter, int number, int size)
{
    int n = size - 1;

    int N = 1, S = 1, W = 1, E = 1;
    if (number - N >= 0 && number - N <= n
        && field_P2_move[number - N][letter] == 2) {
        int side = N;
        near_vert(field_P2_move, letter, number, n, side);
    } else if (
            number + S >= 0 && number + S <= n
            && field_P2_move[number + S][letter] == 2) {
        int side = -S;
        near_vert(field_P2_move, letter, number, n, side);
    } else if (
            letter + E >= 0 && letter + E <= n
            && field_P2_move[number][letter + E] == 2) {
        int side = -E;
        near_horiz(field_P2_move, letter, number, n, side);
    } else if (
            letter - W >= 0 && letter - W <= n
            && field_P2_move[number][letter - W] == 2) {
        int side = W;
        near_horiz(field_P2_move, letter, number, n, side);
    } else {
        int side = -S;
        near_vert(field_P2_move, letter, number, n, side);
    }
}
void kill_ship(
        int** field_P2_move,
        int size,
        int let_rep,
        int num_rep,
        int& letter,
        int& number)
{
    const int up = 8;

    const int left_ = 4;

    int route = 0;
    int n = size - 1;
    int N = 0, S = 0, W = 0, E = 0;
    if (num_rep - 1 >= 0 && num_rep - 1 <= n) {
        N++;
    }
    if (num_rep + 1 >= 0 && num_rep + 1 <= n) {
        S++;
    }
    if (let_rep + 1 >= 0 && let_rep + 1 <= n) {
        E++;
    }
    if (let_rep - 1 >= 0 && let_rep - 1 <= n) {
        W++;
    }
    int status = 0;
    if (N != 0 && field_P2_move[num_rep - N][let_rep] == 2) {
        route = up;
    }
    if (S != 0 && field_P2_move[num_rep + S][let_rep] == 2) {
        route = up;
    }
    if (E != 0 && field_P2_move[num_rep][let_rep + E] == 2) {
        route = left_;
    }
    if (W != 0 && field_P2_move[num_rep][let_rep - W] == 2) {
        route = left_;
    }
    if (route == 0) {
        while (status == 0) {
            int a = rand() % 4 + 1;
            if (a == 1 && N != 0 && field_P2_move[num_rep - N][let_rep] == 0) {
                status = 1;
                number = num_rep - N;
                letter = let_rep;

            } else if (
                    a == 2 && S != 0
                    && field_P2_move[num_rep + S][let_rep] == 0) {
                status = 1;
                number = num_rep + S;
                letter = let_rep;

            } else if (
                    a == 2 && E != 0
                    && field_P2_move[num_rep][let_rep + E] == 0) {
                status = 1;
                number = num_rep;
                letter = let_rep + E;

            } else if (
                    a == 2 && W != 0
                    && field_P2_move[num_rep][let_rep - W] == 0) {
                status = 1;
                number = num_rep;
                letter = let_rep - W;
            }
        }
    } else {
        if (route == left_) {
            if (field_P2_move[num_rep][let_rep + E] == 0) {
                number = num_rep;
                letter = let_rep + E;
            } else if (field_P2_move[num_rep][let_rep - W] == 0) {
                number = num_rep;
                letter = let_rep - W;
            } else {
                while (E != 0 && field_P2_move[num_rep][let_rep + E] == 2) {
                    let_rep = let_rep + E;
                    letter = let_rep + E;
                    W = 0;
                }
                while (W != 0 && field_P2_move[num_rep][let_rep - W] == 2) {
                    let_rep = let_rep - W;
                    letter = let_rep - W;
                }
                number = num_rep;
            }
        } else {
            if (field_P2_move[num_rep - N][let_rep] == 0) {
                number = num_rep - N;
                letter = let_rep;
            } else if (field_P2_move[num_rep + S][let_rep] == 0) {
                number = num_rep + S;
                letter = let_rep;
            } else {
                while (N != 0 && field_P2_move[num_rep - N][let_rep] == 2) {
                    num_rep = num_rep - N;
                    number = num_rep - N;
                    S = 0;
                }
                while (S != 0 && field_P2_move[num_rep + S][let_rep] == 2) {
                    num_rep = num_rep + S;
                    number = num_rep + S;
                }
                letter = let_rep;
            }
        }
    }
}
void Computer_move(
        int** field_P1_move,
        int** field_P2_ship,
        int size,
        int& murderer,
        int& state,
        int& let_rep,
        int& num_rep,
        int& died,
        int& letter,
        int& number)
{
    int status = 0;

    while (status == 0) {
        if (died == 1) {
            kill_ship(field_P1_move, size, let_rep, num_rep, letter, number);
        }
        if (died != 1) {
            letter = rand() % (size);
            number = rand() % (size);
        }
        move_state(
                field_P1_move,
                field_P2_ship,
                size,
                murderer,
                letter,
                number,
                state);
        switch (state) {
        case 0:
            status = 1;
            break;
        case 1:
            let_rep = letter;
            num_rep = number;
            status = 1;
            died = 1;
            break;
        case 2:
            near_the_ship(field_P1_move, letter, number, size);
            let_rep = -1;
            num_rep = -1;
            status = 1;
            died = 0;

            break;
        case 3:
            status = 0;
            break;
        }
    }
}
void move(
        int** field_P1_ship,
        int** field_P1_move,
        int** field_P2_ship,
        int** field_P2_move,
        int size,
        int mode,
        int& win,
        char* surname,
        char* surname2)
{
    int queue = rand() % 2 + 1;

    int state;
    int murderer = 0;
    int let_rep = -1;
    int num_rep = -1;
    int died = 0;

    while (1) {
        print_field(field_P1_move, field_P1_ship, field_P2_move, size);
        int number, letter;
        if (mode == 1) {
            if (queue == 1) {
                cout << "Ходит игрок " << surname << endl;
                input_ship(letter, number, size);
                move_state(
                        field_P1_move,
                        field_P2_ship,
                        size,
                        murderer,
                        letter,
                        number,
                        state);
            }

            else {
                cout << "Ходит игрок " << surname2 << endl;
                Computer_move(
                        field_P2_move,
                        field_P1_ship,
                        size,
                        murderer,
                        state,
                        let_rep,
                        num_rep,
                        died,
                        letter,
                        number);
            }
            print_field(field_P1_move, field_P1_ship, field_P2_move, size);
        } else {
            print_field_move2(field_P1_move, field_P2_move, size);
            if (queue == 1) {
                cout << "Ходит игрок " << surname << endl;
                input_ship(letter, number, size);
                move_state(
                        field_P1_move,
                        field_P2_ship,
                        size,
                        murderer,
                        letter,
                        number,
                        state);
            }

            else {
                cout << "Ходит игрок " << surname2 << endl;
                input_ship(letter, number, size);
                move_state(
                        field_P2_move,
                        field_P1_ship,
                        size,
                        murderer,
                        letter,
                        number,
                        state);
            }
            print_field_move2(field_P1_move, field_P2_move, size);
        }
        if (queue == 1)
            cout << "Ходит игрок " << surname << endl;
        else
            cout << "Ходит игрок " << surname2 << endl;
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
        if (end(field_P1_ship, field_P2_ship, size, queue) == 0)
            break;
        system("pause");
    }
    if (queue == 1) {
        cout << "Победил " << surname << endl;
        if (mode == 2) {
            print(size, field_P1_ship);
        }
    } else {
        cout << "Победил " << surname2 << endl;
        if (mode == 2) {
            print(size, field_P2_ship);
        }
    }
    win = queue;
}
