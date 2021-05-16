#include <conio.h>
#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
const int single_deck = 4;
const int double_deck = 3;
const int three_deck = 2;
const int four_deck = 1;

const int single_deck_s = 1;
const int double_deck_s = 2;
const int three_deck_s = 3;
const int four_deck_s = 4;

const int start_letter = 65;
const int end_letter_easy = 74;
const int end_letter_complex = 79;
const int start_number = 1;

const int mode_easy = 10;
const int mode_complex = 15;

const int up = 8;
const int down = 2;
const int left_ = 4;
const int right_ = 6;

const int s_num_ch = 48;
void print_er(int *error, int k) {
  if (error[0] == 1)
    cout << "Неправильно введена координата(буква)" << endl;
  if (error[1] == 1)
    cout << "Неправильно введена координата(цифра)" << endl;
  if (error[2] == 1)
    cout << "Не хватает места для корабля" << endl;
}
void zeroing(int size, int **field) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      field[i][j] = 0;
    }
  }
}
void print(int size, int **field_M) {
  cout << "    ";
  char M[15] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
                'I', 'J', 'K', 'L', 'M', 'N', 'O'};
  for (int i = 0; i < size; i++) {
    cout << M[i] << " ";
  }
  cout << endl;
  int k = 1;
  for (int i = 0; i < size; i++) {
    if (k >= mode_easy) {
      cout << " " << k << " ";
      for (int j = 0; j < size; j++)
        cout << field_M[i][j] << " ";
    } else {
      cout << "  " << k << " ";
      for (int j = 0; j < size; j++) {
        cout << field_M[i][j] << " ";
      }
    }
    k++;
    cout << endl;
  }
}

void checkCoordinate(int size, int sizeShip, char letter, int number, int route,
                     int &state, int toggle) {
  int end_letter = end_letter_easy;
  int end_number = mode_easy;
  int k = 3;
  int error[k];
  for (int i = 0; i < k; i++)
    error[i] = 0;
  if (size == mode_complex) {
    end_letter = end_letter_complex;
    end_number = mode_complex;
  }
  if (letter >= start_letter && letter <= end_letter)
    ;
  else
    error[0] = 1;
  if (number >= start_number && number <= end_number)
    ;
  else
    error[1] = 1;
  switch (route) {
  case left_:
    if (letter - sizeShip + 1 >= start_letter)
      ;
    else
      error[2] = 1;
    break;
  case up:
    if (number - sizeShip + 1 >= start_number)
      ;
    else
      error[2] = 1;
    break;
  case right_:
    if (letter + sizeShip - 1 <= end_letter)
      ;
    else
      error[2] = 1;
    break;
  case down:
    if (number + sizeShip - 1 <= end_number)
      ;
    else
      error[2] = 1;
    break;
  default:
    error[2] = 1;
  }
  if (error[0] == 0 && error[1] == 0 && error[2] == 0)
    state = 1;
  else
    state = 0;
  if (toggle == 1 && state == 0)
    print_er(error, k);
}
void recordingShip(int size, int **field_M, int sizeShip, char letter,
                   int number, int route, int &state, int toggle) {
  int end_letter = end_letter_easy;
  int end_number = mode_easy;
  int fl = 0;
  if (size == mode_complex) {
    end_letter = end_letter_complex;
    end_number = mode_complex;
  }

  int i, j, i2, j2, k, n, k2, n2;
  if (route == down) {
    if (number == start_number) {
      i = number - 1;
      k = i;
      i2 = number + sizeShip - 1;
      k2 = number - 2 + sizeShip;
    } else if (number == end_number || number == end_number - sizeShip + 1) {
      i = number - 2;
      k = number - 1;
      i2 = end_number - 1;
      k2 = i2;
    } else if (number != start_number && number != end_number) {
      i = number - 2;
      i2 = number + sizeShip - 1;
      k = number - 1;
      k2 = number - 2 + sizeShip;
    }

    if (letter == start_letter) {
      j = letter - start_letter;
      n = j;
      j2 = letter + 1 - start_letter;
      n2 = letter - start_letter;
    } else if (letter == end_letter)

    {
      j = letter - 1 - start_letter;
      n = letter - start_letter;
      j2 = end_letter - start_letter;
      n2 = j2;
    } else if (letter != start_letter && letter != end_letter) {
      j = letter - 1 - start_letter;
      j2 = letter + 1 - start_letter;
      n = letter - start_letter;
      n2 = letter - start_letter;
    }
  }

  else if (route == up) {
    if (number == start_number) {
      fl = 1;
    } else if (number == start_number + sizeShip - 1) {
      i = start_number - 1;
      i2 = start_number - 1 + sizeShip;
      k = start_number - 1;
      k2 = start_number - 2 + sizeShip;
    } else if (number == end_number) {
      i = number - sizeShip - 1;
      i2 = end_number - 1;
      k = number - sizeShip;
      k2 = i2;
    } else if (number != start_number && number != end_number) {
      i = number - sizeShip - 1;
      i2 = number;
      k = number - sizeShip;
      k2 = number - 1;
    }

    if (letter == start_letter) {
      j = letter - start_letter;
      j2 = letter + 1 - start_letter;
      n = j;
      n2 = letter - start_letter;
    } else if (letter == end_letter)

    {
      j = letter - 1 - start_letter;
      j2 = letter - start_letter;
      n = j2;
      n2 = j2;
    } else if (letter != start_letter && letter != end_letter) {
      j = letter - 1 - start_letter;
      j2 = letter + 1 - start_letter;
      n = letter - start_letter;
      n2 = letter - start_letter;
    }

  }

  else if (route == left_) {
    if (number == start_number) {
      i = number - 1;
      i2 = number;
      k = number - 1;
      k2 = number - 1;
    } else if (number == end_number) {
      i = number - 2;
      i2 = end_number - 1;
      k = number - 1;
      k2 = i2;
    } else if (number != start_number || number != end_number) {
      i = number - 2;
      i2 = number;
      k = number - 1;
      k2 = number - 1;
    }

    if (letter == start_letter) {
      fl = 1;
    } else if (letter == start_letter + sizeShip - 1) {

      j = letter - start_letter - sizeShip + 1;
      j2 = letter - start_letter + 1;
      n = j;
      n2 = j2 - 1;
    } else if (letter == end_letter)

    {
      j = letter - start_letter - sizeShip;
      j2 = letter - start_letter;
      n = letter - start_letter - sizeShip + 1;
      n2 = j2;
    } else if (letter != start_letter && letter != end_letter) {
      j = letter - start_letter - sizeShip;
      j2 = letter + 1 - start_letter;
      n = letter - start_letter - sizeShip + 1;
      n2 = letter - start_letter;
    }

  }

  else if (route == right_) {
    if (number == start_number) {
      i = number - 1;
      i2 = number;
      k = number - 1;
      k2 = number - 1;
    } else if (number == end_number) {
      i = number - 2;
      i2 = number - 1;
      k = number - 1;
      k2 = k;
    } else if (number != start_number && number != end_number) {
      i = number - 2;
      i2 = number;
      k = number - 1;
      k2 = number - 1;
    }
    if (letter == start_letter) {
      j = letter - start_letter;
      j2 = letter - start_letter + sizeShip;
      n = letter - start_letter;
      n2 = j2 - 1;
    } else if (letter == end_letter)

    {
      fl = 1;
    } else if (letter == end_letter - sizeShip + 1)

    {
      j = letter - start_letter - 1;
      j2 = letter - start_letter + sizeShip - 1;
      n = j + 1;
      n2 = j2;
      // cout<<"j "<<j<<" j2 "<<j2<<endl;
      // cout<<"k "<<k<<" k2 "<<k2<<endl;
      // cout<<"n "<<n<<" n2 "<<n2<<endl;
    } else if (letter != start_letter && letter != end_letter) {
      j = letter - start_letter - 1;
      j2 = letter - start_letter + sizeShip;
      n = letter - start_letter;
      n2 = letter - start_letter + sizeShip - 1;
    }
  }
  if (fl == 0) {
    for (int q = i; q <= i2; q++) {
      for (int w = j; w <= j2; w++) {
        // cout<<"fl1 "<<fl<<endl;
        if (field_M[q][w] == 1) {
          fl = 1;
          break;
        }
        // cout<<"fl2 "<<fl<<endl;
        // cout<<field_M[i][j]<<endl;
      }
      if (fl == 1)
        break;
    }
  }
  // cout<<"fl "<<fl<<endl;
  if (fl == 0) {
    for (int q = k; q <= k2; q++) {
      for (int w = n; w <= n2; w++) {
        field_M[q][w] = 1;
      }
    }
    state = 1;
  } else {
    if (toggle == 1)
      cout << "Корабль слишком близко к другому" << endl;
    state = 0;
  }
}
void createshipPL(int size, int **field_M) {
  int toggle = 1;
  int changeQ = 0; //переменная для измения количества кораблей в разных режимах
  if (size == mode_complex)
    changeQ = 1;
  int state = 0;
  cout << "Введите первую координату однопалубного корабля" << endl;
  for (int i = 0; i < single_deck + changeQ; i++) {
    char letter;
    int number;
    while (state == 0) {
      cout << i + 1 << " корабль" << endl;
      cout << "Введите первую координату (пример:D2)" << endl;

      cin >> letter;
      char str[2];
      for (int i = 0; i < 2; i++) {
        str[i] = ' ';
      }
      cin >> str;
      int number1 = str[0], number2 = str[1];
      if (number2 == 0) {
        number = number1 - '0';
      } else {
        number = number1 - '0' * 10 + number2 - '0';
      }
      checkCoordinate(size, single_deck_s, letter, number, down, state, toggle);
      // cout<<letter<<endl;
      // cout<<number<<endl;
      // cout<<"s2 "<<state<<endl;
      if (state == 1)
        recordingShip(size, field_M, single_deck_s, letter, number, down, state,
                      toggle);
    }

    state = 0;
    print(size, field_M);
  }

  cout << "Введите первую координату двухпалубного корабля и направление"
       << endl;
  for (int i = 0; i < double_deck + changeQ; i++) {
    char letter;
    int number;
    int route;
    while (state == 0) {
      cout << i + 1 << " корабль" << endl;
      cout << "Введите первую координату (пример:D2)" << endl;
      cin >> letter;
      char str[2];
      for (int i = 0; i < 2; i++) {
        str[i] = ' ';
      }
      cin >> str;
      int number1 = str[0], number2 = str[1];
      if (number2 == 0) {
        number = number1 - '0';
      } else {
        number = number1 - '0' * 10 + number2 - '0';
      }
      cout << "Введите направление (4-влево,8-вверх,6-вправо,2-вниз)" << endl;
      char route2;
      cin >> route2;
      route = route2 - '0';
      checkCoordinate(size, double_deck_s, letter, number, route, state,
                      toggle);
      // cout<<letter<<endl;
      //	cout<<number<<endl;
      //	cout<<"s2 "<<state<<endl;
      if (state == 1)
        recordingShip(size, field_M, double_deck_s, letter, number, route,
                      state, toggle);
    }

    state = 0;
    print(size, field_M);
    // while(state==0)
    //{
    // recordingShip(size,field_M,single_deck_s,letter,number,	route,state);
    //}
  }

  cout << "Введите первую координату трехпалубного корабля и направление"
       << endl;
  for (int i = 0; i < three_deck + changeQ; i++) {
    char letter;
    int number;
    int route;
    while (state == 0) {
      cout << i + 1 << " корабль" << endl;
      cout << "Введите первую координату (пример:D2)" << endl;
      cin >> letter;
      char str[2];
      for (int i = 0; i < 2; i++) {
        str[i] = ' ';
      }
      cin >> str;
      int number1 = str[0], number2 = str[1];
      if (number2 == 0) {
        number = number1 - '0';
      } else {
        number = number1 - '0' * 10 + number2 - '0';
      }
      cout << "Введите направление (4-влево,8-вверх,6-вправо,2-вниз)" << endl;
      char route2;
      cin >> route2;
      route = route2 - '0';
      checkCoordinate(size, three_deck_s, letter, number, route, state, toggle);
      // cout<<letter<<endl;
      //	cout<<number<<endl;
      //	cout<<"s2 "<<state<<endl;
      if (state == 1)
        recordingShip(size, field_M, three_deck_s, letter, number, route, state,
                      toggle);
    }

    state = 0;
    print(size, field_M);
    // while(state==0)
    //{
    // recordingShip(size,field_M,single_deck_s,letter,number,	route,state);
    //}
  }

  cout << "Введите первую координату четырехпалубного корабля и направление"
       << endl;
  for (int i = 0; i < four_deck + changeQ; i++) {
    char letter;
    int number;
    int route;
    while (state == 0) {
      cout << i + 1 << " корабль" << endl;
      cout << "Введите первую координату (пример:D2)" << endl;
      cin >> letter;
      char str[2];
      for (int i = 0; i < 2; i++) {
        str[i] = ' ';
      }
      cin >> str;
      int number1 = str[0], number2 = str[1];
      if (number2 == 0) {
        number = number1 - '0';
      } else {
        number = number1 - '0' * 10 + number2 - '0';
      }
      cout << "Введите направление (4-влево,8-вверх,6-вправо,2-вниз)" << endl;
      char route2;
      cin >> route2;
      route = route2 - '0';
      checkCoordinate(size, four_deck_s, letter, number, route, state, toggle);
      // cout<<letter<<endl;
      //	cout<<number<<endl;
      //	cout<<"s2 "<<state<<endl;
      if (state == 1)
        recordingShip(size, field_M, four_deck_s, letter, number, route, state,
                      toggle);
    }

    state = 0;
    print(size, field_M);
    // while(state==0)
    //{
    // recordingShip(size,field_M,single_deck_s,letter,number,	route,state);
    //}
  }
}

void createshipRAND(int size, int **field_M) {
  int toggle = 0;
  int changeQ = 0; //переменная для измения количества кораблей в разных режимах
  int end_letter = end_letter_easy;
  if (size == mode_complex) {
    changeQ = 1;
    end_letter = end_letter_complex;
  }

  int state = 0;
  for (int i = 0; i < single_deck + changeQ; i++) {
    char letter;
    int number;
    while (state == 0) {
      letter = rand() % (end_letter - start_letter + 1) + start_letter;
      number = rand() % (size - start_number + 1) + start_number;
      cout << "l " << letter << endl;
      cout << "n " << number << endl;
      checkCoordinate(size, single_deck_s, letter, number, down, state, toggle);
      if (state == 1)
        recordingShip(size, field_M, single_deck_s, letter, number, down, state,
                      toggle);
    }

    state = 0;
  }

  for (int i = 0; i < double_deck + changeQ; i++) {
    char letter;
    int number;
    int route;
    while (state == 0) {
      letter = rand() % (end_letter - start_letter + 1) + start_letter;
      number = rand() % (size - start_number + 1) + start_number;
      int count = rand() % 4;
      route = 0;
      cout << "c " << count << endl;
      for (int i = 0; i <= count; i++) {
        route += 2;
      }
      // cout<<"st "<<start_letter<<endl;
      // cout<<"el "<<end_letter<<endl;
      // cout<<"sn "<<start_letter<<endl;
      // cout<<"en "<<size-1<<endl;
      // cout<<"up "<<up<<endl;
      // cout<<"down "<<down<<endl;
      cout << "l " << letter << endl;
      cout << "n " << number << endl;
      cout << "r " << route << endl;
      checkCoordinate(size, double_deck_s, letter, number, route, state,
                      toggle);
      if (state == 1)
        recordingShip(size, field_M, double_deck_s, letter, number, route,
                      state, toggle);
    }
    state = 0;
  }

  for (int i = 0; i < three_deck + changeQ; i++) {
    char letter;
    int number;
    int route;
    while (state == 0) {
      letter = rand() % (end_letter - start_letter + 1) + start_letter;
      number = rand() % (size - start_number + 1) + start_number;
      int count = rand() % 4;
      route = 0;
      for (int i = 0; i <= count; i++) {
        route += 2;
      }
      cout << "l " << letter << endl;
      cout << "n " << number << endl;
      cout << "r " << route << endl;
      checkCoordinate(size, three_deck_s, letter, number, route, state, toggle);
      if (state == 1)
        recordingShip(size, field_M, three_deck_s, letter, number, route, state,
                      toggle);
    }
    state = 0;
  }

  for (int i = 0; i < four_deck + changeQ; i++) {
    char letter;
    int number;
    int route;
    while (state == 0) {
      letter = rand() % (end_letter - start_letter + 1) + start_letter;
      number = rand() % (size - start_number + 1) + start_number;
      int count = rand() % 4;
      route = 0;
      for (int i = 0; i <= count; i++) {
        route += 2;
      }
      cout << "l " << letter << endl;
      cout << "n " << number << endl;
      cout << "r " << route << endl;
      checkCoordinate(size, four_deck_s, letter, number, route, state, toggle);
      if (state == 1)
        recordingShip(size, field_M, four_deck_s, letter, number, route, state,
                      toggle);
    }

    state = 0;
  }
}

