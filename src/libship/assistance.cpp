#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
void zeroing(int size,int**field)
{
		for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			field[i][j]=0;
		}
	}	
}
void print(int size,int**field_M)
{
	cout << "    ";
	char M[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    for (int i = 0; i < size; i++) {
        cout << M[i] << " ";
    }	
    cout << endl;
	 int k=1;
    for (int i = 0; i < size; i++) {
    	if(k>=size)
    	{
    		cout << " " << k << " ";
    		for (int j = 0; j < size; j++)
    		{
    			if(field_M[i][j]==0||field_M[i][j]==3)
    			cout << "  ";
    			else
    			cout << field_M[i][j] << " ";
			}
			
		}
		else
		{
        cout << "  " << k << " ";
        for (int j = 0; j < size; j++) {
            if(field_M[i][j]==0||field_M[i][j]==3)
    			cout << "  ";
    			else
    			cout << field_M[i][j] << " ";
        }
    }
        k++;
        cout << endl;
    }
}
void print_field(int**field_P1_move,int**field_P1_ship,int**field_P2_move,int size)
{
	system("CLS");
	cout<<"игрок 1"<<endl;
	print(size, field_P1_move);
	cout<<"Ваши корабли"<<endl;
	print(size,field_P1_ship);
	cout<<"игрок 2"<<endl;
	print(size, field_P2_move);
}
