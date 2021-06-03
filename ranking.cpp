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
int recordingShip(int size,int**field_M,int sizeShip,int letter, int number,int route)
{
	int fl=0;
	int i,j,i2,j2,k,n,k2,n2;
	if(route==down)
	{
		if(number==0)
		{
				i=number;
				k=i;
				i2=number+sizeShip;
				k2=number+sizeShip-1;
		}
		else if (number==size-1||number==size-sizeShip)
		{
				i=number-1;
				k=number;
				i2=size-1;
				k2=i2;
		}
		else if(number!=0&&number!=size-1)
		{
				i=number-1;
				i2=number+sizeShip;
				k=number;
				k2=number+sizeShip-1;
		}

	
		}
		
	else if(route==up)
	{
		if(number==0)
		{
				fl=1;
		}
		else if(number==sizeShip-1)
		{
				i=0;
				i2=sizeShip;
				k=0;
				k2=sizeShip-1;
		}
		else if (number==size-1)
		{
				i=number-sizeShip;
				i2=size-1;
				k=number-sizeShip+1;
				k2=i2;
		}
		else if(number!=0&&number!=size-1)
		{
				i=number-sizeShip;
				i2=number+1;
				k=number-sizeShip+1;
				k2=number;
		}
		
		}
		
		else if(route==left_)
	{
		
		if(letter==0)
		{
				fl=1;
	}
	else if(letter==sizeShip-1)
		{
			
				j=letter-sizeShip+1;
				j2=letter+1;
				n=j;
				n2=j2-1;
	}
		else if(letter==size-1)

			{
				j=letter-sizeShip;
				j2=letter;
				n=letter-sizeShip+1;
				n2=j2;
				}	
				else if(letter!=0&&letter!=size-1)
				{
				j=letter-sizeShip;
				j2=letter+1;	
				n=letter-sizeShip+1;
				n2=letter;
				}

		}
		
		
		else if(route==right_)
	{
		
		if(letter==0)
		{
				j=letter;
				j2=letter+sizeShip;
				n=letter;
				n2=j2-1;
	}
		else if(letter==size-1)

			{
					fl=1;
				}	
		else if(letter==size-1-sizeShip+1)

			{
				j=letter-1;
				j2=letter+sizeShip-1;
				n=j+1;
				n2=j2;
				}	
				else if(letter!=0&&letter!=size-1)
				{
				j=letter-1;
				j2=letter+sizeShip;	
				n=letter;
				n2=letter+sizeShip-1;
				}
		}
		 if(route==down||route==up)
		{
				if(letter==0)
		{
				j=letter;
				n=j;
				j2=letter+1;
				n2=letter;
	}
		else if(letter==size-1)

			{
				j=letter-1;
				n=letter;
				j2=letter;
				n2=j2;
				}	
				else if(letter!=0&&letter!=size-1)
				{
						j=letter-1;
				j2=letter+1;	
				n=letter;
				n2=letter;
				}
		}
		else if(route==right_||route==left_)
		{
				if(number==0)
		{
				i=number;
				i2=number+1;
				k=number;
				k2=number;
		}
		else if (number==size-1)
		{
				i=number-1;
				i2=size-1;
				k=number;
				k2=i2;
		}
		else if(number!=0&&number!=size-1)
		{
				i=number-1;
				i2=number+1;
				k=number;
				k2=number;
		}
		
		}
	if(fl==0)
	{
		for(int q=i;q<=i2;q++)
	{
		for(int w=j;w<=j2;w++)
		{
			if(field_M[q][w]==1)
			{
				fl=1;
				break;
			}
		}
		if(fl==1)
			break;
	}
		}	
	if (fl==0)
	{
			
		for(int q=k;q<=k2;q++)
		{
			for(int w=n;w<=n2;w++)
			{
				field_M[q][w]=1;
			}
		}
		return 1;
	}
	else
		return 0;

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
            state = recordingShip(size,field_M,sizeShip,letter,number,route);	;
            if (state == 0)
                cout << "Корабль слишком близко к другому" << endl;
        }

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
