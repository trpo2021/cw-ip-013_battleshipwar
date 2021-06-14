#pragma once
int end(int** field_P1_ship, int** field_P2_ship, int size, int sel);
int check_killed(int letter, int number, int** field_P2_ship, int size);
void move(
        int** field_P1_ship,
        int** field_P1_move,
        int** field_P2_ship,
        int** field_P2_move,
        int size,
        int mode,
        int& win,
        char* surname,
        char* surname2);
