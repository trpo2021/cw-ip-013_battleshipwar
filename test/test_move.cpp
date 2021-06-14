#include "ctest.h"
#include "libship/move.h"
CTEST(end_test, q1_s10_r1)
{
    int size = 10;
    int sel = 1;

    int** field_P1_ship = new int*[size];
    int** field_P2_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
        field_P2_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
            field_P2_ship[i][j] = 0;
        }
    }

    field_P2_ship[0][0] = 1;
    field_P2_ship[0][1] = 2;
    field_P2_ship[0][2] = 3;

    ASSERT_EQUAL(end(field_P1_ship, field_P2_ship, size, sel), 1);
}
CTEST(end_test, q1_s10_r0)
{
    int size = 10;
    int sel = 1;

    int** field_P1_ship = new int*[size];
    int** field_P2_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
        field_P2_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
            field_P2_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 1;
    field_P1_ship[0][1] = 2;
    field_P1_ship[0][2] = 3;

    ASSERT_EQUAL(end(field_P1_ship, field_P2_ship, size, sel), 0);
}
CTEST(end_test, q2_s10_r1)
{
    int size = 10;
    int sel = 2;

    int** field_P1_ship = new int*[size];
    int** field_P2_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
        field_P2_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
            field_P2_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 1;
    field_P1_ship[0][1] = 2;
    field_P1_ship[0][2] = 3;

    ASSERT_EQUAL(end(field_P1_ship, field_P2_ship, size, sel), 1);
}
CTEST(end_test, q2_s10_r0)
{
    int size = 10;
    int sel = 2;

    int** field_P1_ship = new int*[size];
    int** field_P2_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
        field_P2_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
            field_P2_ship[i][j] = 0;
        }
    }

    field_P2_ship[0][0] = 1;
    field_P2_ship[0][1] = 2;
    field_P2_ship[0][2] = 3;

    ASSERT_EQUAL(end(field_P1_ship, field_P2_ship, size, sel), 0);
}

CTEST(end_test, q1_s15_r1)
{
    int size = 15;
    int sel = 1;

    int** field_P1_ship = new int*[size];
    int** field_P2_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
        field_P2_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
            field_P2_ship[i][j] = 0;
        }
    }

    field_P2_ship[0][0] = 1;
    field_P2_ship[0][1] = 2;
    field_P2_ship[0][2] = 3;

    ASSERT_EQUAL(end(field_P1_ship, field_P2_ship, size, sel), 1);
}
CTEST(end_test, q1_s15_r0)
{
    int size = 15;
    int sel = 1;

    int** field_P1_ship = new int*[size];
    int** field_P2_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
        field_P2_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
            field_P2_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 1;
    field_P1_ship[0][1] = 2;
    field_P1_ship[0][2] = 3;

    ASSERT_EQUAL(end(field_P1_ship, field_P2_ship, size, sel), 0);
}
CTEST(end_test, q2_s15_r1)
{
    int size = 15;
    int sel = 2;

    int** field_P1_ship = new int*[size];
    int** field_P2_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
        field_P2_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
            field_P2_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 1;
    field_P1_ship[0][1] = 2;
    field_P1_ship[0][2] = 3;

    ASSERT_EQUAL(end(field_P1_ship, field_P2_ship, size, sel), 1);
}
CTEST(end_test, q2_s15_r0)
{
    int size = 15;
    int sel = 2;

    int** field_P1_ship = new int*[size];
    int** field_P2_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
        field_P2_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
            field_P2_ship[i][j] = 0;
        }
    }

    field_P2_ship[0][0] = 1;
    field_P2_ship[0][1] = 2;
    field_P2_ship[0][2] = 3;

    ASSERT_EQUAL(end(field_P1_ship, field_P2_ship, size, sel), 0);
}

CTEST(ck_test, s10_s2_11_t1)
{
    int size = 10;
    int letter = 0;
    int number = 0;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 1;
    field_P1_ship[0][1] = 1;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s10_s2_11_t2)
{
    int size = 10;
    int letter = 0;
    int number = 1;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 1;
    field_P1_ship[0][1] = 1;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s10_s2_12_t1)
{
    int size = 10;
    int letter = 1;
    int number = 0;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 1;
    field_P1_ship[0][1] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s10_s2_22_t1)
{
    int size = 10;
    int letter = 1;
    int number = 0;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 2;
    field_P1_ship[0][1] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 1);
}
CTEST(ck_test, s10_s2_22_t2)
{
    int size = 10;
    int letter = 0;
    int number = 0;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 2;
    field_P1_ship[0][1] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 1);
}
CTEST(ck_test, s10_s3_111_t1)
{
    int size = 10;
    int letter = 0;
    int number = 0;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 1;
    field_P1_ship[0][1] = 1;
    field_P1_ship[0][2] = 1;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s10_s3_121_t1)
{
    int size = 10;
    int letter = 1;
    int number = 0;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 1;
    field_P1_ship[0][1] = 2;
    field_P1_ship[0][2] = 1;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s10_s3_122_t1)
{
    int size = 10;
    int letter = 1;
    int number = 0;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 1;
    field_P1_ship[0][1] = 2;
    field_P1_ship[0][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s10_s3_222_t1)
{
    int size = 10;
    int letter = 1;
    int number = 0;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 2;
    field_P1_ship[0][1] = 2;
    field_P1_ship[0][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 1);
}
CTEST(ck_test, s10_s3_1111_t1)
{
    int size = 10;
    int letter = 1;
    int number = 0;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 1;
    field_P1_ship[0][1] = 1;
    field_P1_ship[0][2] = 1;
    field_P1_ship[0][3] = 1;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s10_s3_1111_t2)
{
    int size = 10;
    int letter = 0;
    int number = 0;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 1;
    field_P1_ship[0][1] = 1;
    field_P1_ship[0][2] = 1;
    field_P1_ship[0][3] = 1;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s10_s3_1111_t3)
{
    int size = 10;
    int letter = 2;
    int number = 0;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 1;
    field_P1_ship[0][1] = 1;
    field_P1_ship[0][2] = 1;
    field_P1_ship[0][3] = 1;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s10_s3_1111_t4)
{
    int size = 10;
    int letter = 3;
    int number = 0;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 1;
    field_P1_ship[0][1] = 1;
    field_P1_ship[0][2] = 1;
    field_P1_ship[0][3] = 1;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s10_s4_1112_t1)
{
    int size = 10;
    int letter = 3;
    int number = 0;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 1;
    field_P1_ship[0][1] = 1;
    field_P1_ship[0][2] = 1;
    field_P1_ship[0][3] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s10_s4_1122_t1)
{
    int size = 10;
    int letter = 3;
    int number = 0;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 1;
    field_P1_ship[0][1] = 1;
    field_P1_ship[0][2] = 2;
    field_P1_ship[0][3] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s10_s4_1222_t1)
{
    int size = 10;
    int letter = 0;
    int number = 0;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 1;
    field_P1_ship[0][1] = 2;
    field_P1_ship[0][2] = 2;
    field_P1_ship[0][3] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 1);
}
CTEST(ck_test, s10_s4_1212_t1)
{
    int size = 10;
    int letter = 0;
    int number = 0;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 1;
    field_P1_ship[0][1] = 2;
    field_P1_ship[0][2] = 1;
    field_P1_ship[0][3] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s10_s4_2112_t1)
{
    int size = 10;
    int letter = 0;
    int number = 0;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 2;
    field_P1_ship[0][1] = 1;
    field_P1_ship[0][2] = 1;
    field_P1_ship[0][3] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s10_s4_2222_t1)
{
    int size = 10;
    int letter = 0;
    int number = 0;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 2;
    field_P1_ship[0][1] = 2;
    field_P1_ship[0][2] = 2;
    field_P1_ship[0][3] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 1);
}
CTEST(ck_test, s15_s4_2222_t1)
{
    int size = 15;
    int letter = 0;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][0] = 2;
    field_P1_ship[14][1] = 2;
    field_P1_ship[14][2] = 2;
    field_P1_ship[14][3] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 1);
}

CTEST(ck_test, s15_s2_11_t1)
{
    int size = 15;
    int letter = 14;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][14] = 1;
    field_P1_ship[14][13] = 1;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s15_s2_11_t2)
{
    int size = 15;
    int letter = 13;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][14] = 1;
    field_P1_ship[14][13] = 1;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s15_s2_12_t1)
{
    int size = 15;
    int letter = 14;
    int number = 13;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][13] = 1;
    field_P1_ship[14][14] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 1);
}
CTEST(ck_test, s15_s2_22_t1)
{
    int size = 15;
    int letter = 14;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][14] = 2;
    field_P1_ship[14][13] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 1);
}
CTEST(ck_test, s15_s2_22_t2)
{
    int size = 15;
    int letter = 13;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][14] = 2;
    field_P1_ship[14][13] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 1);
}
CTEST(ck_test, s15_s3_111_t1)
{
    int size = 15;
    int letter = 12;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][12] = 1;
    field_P1_ship[14][13] = 1;
    field_P1_ship[14][14] = 1;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s15_s3_111_t2)
{
    int size = 15;
    int letter = 13;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][12] = 1;
    field_P1_ship[14][13] = 1;
    field_P1_ship[14][14] = 1;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s15_s3_111_t3)
{
    int size = 15;
    int letter = 14;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][12] = 1;
    field_P1_ship[14][13] = 1;
    field_P1_ship[14][14] = 1;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}

CTEST(ck_test, s15_s3_121_t1)
{
    int size = 15;
    int letter = 12;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][12] = 1;
    field_P1_ship[14][13] = 2;
    field_P1_ship[14][14] = 1;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}

CTEST(ck_test, s15_s3_122_t2)
{
    int size = 15;
    int letter = 0;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][0] = 1;
    field_P1_ship[14][1] = 2;
    field_P1_ship[14][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 1);
}

CTEST(ck_test, s15_s3_222_t1)
{
    int size = 15;
    int letter = 1;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][0] = 2;
    field_P1_ship[14][1] = 2;
    field_P1_ship[14][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 1);
}

CTEST(ck_test, s15_s4_1111_t1)
{
    int size = 15;
    int letter = 0;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][0] = 1;
    field_P1_ship[14][1] = 1;
    field_P1_ship[14][2] = 1;
    field_P1_ship[14][3] = 1;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s15_s4_1111_t2)
{
    int size = 15;
    int letter = 1;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][0] = 1;
    field_P1_ship[14][1] = 1;
    field_P1_ship[14][2] = 1;
    field_P1_ship[14][3] = 1;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s15_s4_1111_t3)
{
    int size = 15;
    int letter = 2;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][0] = 1;
    field_P1_ship[14][1] = 1;
    field_P1_ship[14][2] = 1;
    field_P1_ship[14][3] = 1;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s15_s3_1111_t4)
{
    int size = 15;
    int letter = 3;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][0] = 1;
    field_P1_ship[14][1] = 1;
    field_P1_ship[14][2] = 1;
    field_P1_ship[14][3] = 1;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}

CTEST(ck_test, s15_s4_1112_t1)
{
    int size = 15;
    int letter = 0;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][0] = 1;
    field_P1_ship[14][1] = 1;
    field_P1_ship[14][2] = 1;
    field_P1_ship[14][3] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s15_s4_1112_t2)
{
    int size = 15;
    int letter = 1;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][0] = 1;
    field_P1_ship[14][1] = 1;
    field_P1_ship[14][2] = 1;
    field_P1_ship[14][3] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s15_s4_1112_t3)
{
    int size = 15;
    int letter = 2;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][0] = 1;
    field_P1_ship[14][1] = 1;
    field_P1_ship[14][2] = 1;
    field_P1_ship[14][3] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s15_s4_1112_t4)
{
    int size = 15;
    int letter = 3;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][0] = 1;
    field_P1_ship[14][1] = 1;
    field_P1_ship[14][2] = 1;
    field_P1_ship[14][3] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s15_s4_1122_t1)
{
    int size = 10;
    int letter = 3;
    int number = 0;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 1;
    field_P1_ship[0][1] = 1;
    field_P1_ship[0][2] = 2;
    field_P1_ship[0][3] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s15_s4_1222_t1)
{
    int size = 15;
    int letter = 0;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][0] = 1;
    field_P1_ship[14][1] = 2;
    field_P1_ship[14][2] = 2;
    field_P1_ship[14][3] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 1);
}
CTEST(ck_test, s15_s4_1212_t1)
{
    int size = 15;
    int letter = 0;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][0] = 1;
    field_P1_ship[14][1] = 2;
    field_P1_ship[14][2] = 1;
    field_P1_ship[14][3] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s15_s4_1212_t2)
{
    int size = 15;
    int letter = 1;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][0] = 1;
    field_P1_ship[14][1] = 2;
    field_P1_ship[14][2] = 1;
    field_P1_ship[14][3] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s15_s4_1212_t3)
{
    int size = 15;
    int letter = 2;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][0] = 1;
    field_P1_ship[14][1] = 2;
    field_P1_ship[14][2] = 1;
    field_P1_ship[14][3] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s15_s4_1212_t4)
{
    int size = 15;
    int letter = 3;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[14][0] = 1;
    field_P1_ship[14][1] = 2;
    field_P1_ship[14][2] = 1;
    field_P1_ship[14][3] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test, s15_s4_2112_t1)
{
    int size = 15;
    int letter = 0;
    int number = 14;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[0][0] = 2;
    field_P1_ship[0][1] = 1;
    field_P1_ship[0][2] = 1;
    field_P1_ship[0][3] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 1);
}

CTEST(ck_test_, s15_s4_1111_t1)
{
    int size = 15;
    int letter = 2;
    int number = 5;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 1;
    field_P1_ship[6][2] = 1;
    field_P1_ship[7][2] = 1;
    field_P1_ship[8][2] = 1;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test_, s15_s4_1111_t2)
{
    int size = 15;
    int letter = 2;
    int number = 6;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 1;
    field_P1_ship[6][2] = 1;
    field_P1_ship[7][2] = 1;
    field_P1_ship[8][2] = 1;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test_, s15_s4_1111_t3)
{
    int size = 15;
    int letter = 2;
    int number = 7;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 1;
    field_P1_ship[6][2] = 1;
    field_P1_ship[7][2] = 1;
    field_P1_ship[8][2] = 1;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test_, s15_s4_1111_t4)
{
    int size = 15;
    int letter = 2;
    int number = 8;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 1;
    field_P1_ship[6][2] = 1;
    field_P1_ship[7][2] = 1;
    field_P1_ship[8][2] = 1;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test_, s15_s4_1112_t1)
{
    int size = 15;
    int letter = 2;
    int number = 5;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 1;
    field_P1_ship[6][2] = 1;
    field_P1_ship[7][2] = 1;
    field_P1_ship[8][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test_, s15_s4_1112_t2)
{
    int size = 15;
    int letter = 2;
    int number = 6;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 1;
    field_P1_ship[6][2] = 1;
    field_P1_ship[7][2] = 1;
    field_P1_ship[8][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test_, s15_s4_1112_t3)
{
    int size = 15;
    int letter = 2;
    int number = 7;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 1;
    field_P1_ship[6][2] = 1;
    field_P1_ship[7][2] = 1;
    field_P1_ship[8][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test_, s15_s4_1112_t4)
{
    int size = 15;
    int letter = 2;
    int number = 8;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 1;
    field_P1_ship[6][2] = 1;
    field_P1_ship[7][2] = 1;
    field_P1_ship[8][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test_, s15_s4_1122_t1)
{
    int size = 15;
    int letter = 2;
    int number = 5;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 1;
    field_P1_ship[6][2] = 1;
    field_P1_ship[7][2] = 2;
    field_P1_ship[8][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test_, s15_s4_1122_t2)
{
    int size = 15;
    int letter = 2;
    int number = 6;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 1;
    field_P1_ship[6][2] = 1;
    field_P1_ship[7][2] = 2;
    field_P1_ship[8][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test_, s15_s4_1122_t3)
{
    int size = 15;
    int letter = 2;
    int number = 7;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 1;
    field_P1_ship[6][2] = 1;
    field_P1_ship[7][2] = 2;
    field_P1_ship[8][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test_, s15_s4_1122_t4)
{
    int size = 15;
    int letter = 2;
    int number = 8;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 1;
    field_P1_ship[6][2] = 1;
    field_P1_ship[7][2] = 2;
    field_P1_ship[8][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test_, s15_s4_2112_t1)
{
    int size = 15;
    int letter = 2;
    int number = 5;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 2;
    field_P1_ship[6][2] = 1;
    field_P1_ship[7][2] = 1;
    field_P1_ship[8][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test_, s15_s4_2112_t2)
{
    int size = 15;
    int letter = 2;
    int number = 6;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 2;
    field_P1_ship[6][2] = 1;
    field_P1_ship[7][2] = 1;
    field_P1_ship[8][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test_, s15_s4_2112_t3)
{
    int size = 15;
    int letter = 2;
    int number = 7;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 2;
    field_P1_ship[6][2] = 1;
    field_P1_ship[7][2] = 1;
    field_P1_ship[8][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test_, s15_s4_2112_t4)
{
    int size = 15;
    int letter = 2;
    int number = 8;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 2;
    field_P1_ship[6][2] = 1;
    field_P1_ship[7][2] = 1;
    field_P1_ship[8][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}

CTEST(ck_test_, s15_s4_2122_t1)
{
    int size = 15;
    int letter = 2;
    int number = 5;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 2;
    field_P1_ship[6][2] = 1;
    field_P1_ship[7][2] = 2;
    field_P1_ship[8][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test_, s15_s4_2122_t2)
{
    int size = 15;
    int letter = 2;
    int number = 6;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 2;
    field_P1_ship[6][2] = 1;
    field_P1_ship[7][2] = 2;
    field_P1_ship[8][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 1);
}
CTEST(ck_test_, s15_s4_2122_t3)
{
    int size = 15;
    int letter = 2;
    int number = 7;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 2;
    field_P1_ship[6][2] = 1;
    field_P1_ship[7][2] = 2;
    field_P1_ship[8][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test_, s15_s4_2122_t4)
{
    int size = 15;
    int letter = 2;
    int number = 8;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 2;
    field_P1_ship[6][2] = 1;
    field_P1_ship[7][2] = 2;
    field_P1_ship[8][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}

CTEST(ck_test_, s15_s4_2212_t1)
{
    int size = 15;
    int letter = 2;
    int number = 5;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 2;
    field_P1_ship[6][2] = 2;
    field_P1_ship[7][2] = 1;
    field_P1_ship[8][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test_, s15_s4_2212_t2)
{
    int size = 15;
    int letter = 2;
    int number = 6;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 2;
    field_P1_ship[6][2] = 2;
    field_P1_ship[7][2] = 1;
    field_P1_ship[8][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
CTEST(ck_test_, s15_s4_2212_t3)
{
    int size = 15;
    int letter = 2;
    int number = 7;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 2;
    field_P1_ship[6][2] = 2;
    field_P1_ship[7][2] = 1;
    field_P1_ship[8][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 1);
}
CTEST(ck_test_, s15_s4_2212_t4)
{
    int size = 15;
    int letter = 2;
    int number = 8;
    int** field_P1_ship = new int*[size];
    for (int i = 0; i < size; i++) {
        field_P1_ship[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_P1_ship[i][j] = 0;
        }
    }

    field_P1_ship[5][2] = 2;
    field_P1_ship[6][2] = 2;
    field_P1_ship[7][2] = 1;
    field_P1_ship[8][2] = 2;

    ASSERT_EQUAL(check_killed(letter, number, field_P1_ship, size), 0);
}
