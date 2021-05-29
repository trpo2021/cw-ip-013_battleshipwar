#include "ranking.h"
#include <conio.h>
#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int sizeField = 10;
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
    delete[] field_P1_m;
    delete[] field_P2_m;
    delete[] field_P1_s;
    delete[] field_P2_s;
    return 0;
}

