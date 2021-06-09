#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <time.h>
#include "windows.h"
#include "move.h"
#include "ranking.h"
#include"assistance.h"
using namespace std;
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
    int sizeField=10;
    int mode;	
    cout<<"Введите 1 для ручного заполнения поля, 2 для автоматического "<<endl;
    cin>>mode;
    int**field_P1_s = new int*[sizeField];
    int**field_P1_m = new int*[sizeField];
    int**field_P2_s = new int*[sizeField];
    int**field_P2_m = new int*[sizeField];
    for (int i = 0; i < sizeField; i++) {
        field_P1_s[i] = new int[sizeField];
        field_P1_m[i] = new int[sizeField];
    	field_P2_s[i] = new int[sizeField];
    	field_P2_m[i] = new int[sizeField];
    }
    zeroing(sizeField,field_P1_m);
     zeroing(sizeField,field_P2_m);
      zeroing(sizeField,field_P1_s);
     zeroing(sizeField,field_P2_s);
    if(mode==1)
    createshipPL(sizeField,field_P1_s);
    else
    {
    	createshipRAND(sizeField,field_P1_s);
        Sleep(1000);
	}
   createshipRAND(sizeField,field_P2_s);
    
    move(field_P1_s,field_P1_m,field_P2_s,field_P2_m,sizeField);
      delete[] field_P1_m;
      delete[] field_P2_m;
      delete[] field_P1_s;
      delete[] field_P2_s;
	return 0;
}
