#include "ctest.h"
#include "libship/ranking.h"

CTEST(checkRoute_test, size10_down1)
{
    int size = 10;
    int letter = 2;
    int number = 2;
    int route = 2;
    int sizeShip = 1;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size10_up1)
{
    int size = 10;
    int letter = 2;
    int number = 2;
    int route = 8;
    int sizeShip = 1;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size10_left1)
{
    int size = 10;
    int letter = 2;
    int number = 2;
    int route = 4;
    int sizeShip = 1;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size10_right1)
{
    int size = 10;
    int letter = 2;
    int number = 2;
    int route = 6;
    int sizeShip = 1;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size10_down2_r1)
{
    int size = 10;
    int letter = 2;
    int number = 2;
    int route = 2;
    int sizeShip = 2;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size10_down2_r0)
{
    int size = 10;
    int letter = 2;
    int number = 9;
    int route = 2;
    int sizeShip = 2;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}
CTEST(checkRoute_test, size10_up2_r1)
{
    int size = 10;
    int letter = 2;
    int number = 9;
    int route = 8;
    int sizeShip = 2;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size10_up2_r0)
{
    int size = 10;
    int letter = 2;
    int number = 0;
    int route = 8;
    int sizeShip = 2;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}
CTEST(checkRoute_test, size10_left2_r1)
{
    int size = 10;
    int letter = 2;
    int number = 0;
    int route = 4;
    int sizeShip = 2;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size10_left2_r0)
{
    int size = 10;
    int letter = 0;
    int number = 0;
    int route = 4;
    int sizeShip = 2;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}
CTEST(checkRoute_test, size10_right2_r1)
{
    int size = 10;
    int letter = 0;
    int number = 0;
    int route = 6;
    int sizeShip = 2;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size10_right2_r0)
{
    int size = 10;
    int letter = 9;
    int number = 0;
    int route = 6;
    int sizeShip = 2;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}

CTEST(checkRoute_test, size10_down3_r1)
{
    int size = 10;
    int letter = 2;
    int number = 2;
    int route = 2;
    int sizeShip = 3;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size10_down3_r0)
{
    int size = 10;
    int letter = 2;
    int number = 8;
    int route = 2;
    int sizeShip = 3;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}
CTEST(checkRoute_test, size10_up3_r1)
{
    int size = 10;
    int letter = 2;
    int number = 9;
    int route = 8;
    int sizeShip = 3;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size10_up3_r0)
{
    int size = 10;
    int letter = 2;
    int number = 0;
    int route = 8;
    int sizeShip = 3;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}
CTEST(checkRoute_test, size10_left3_r1)
{
    int size = 10;
    int letter = 2;
    int number = 0;
    int route = 4;
    int sizeShip = 3;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size10_left3_r0)
{
    int size = 10;
    int letter = 1;
    int number = 0;
    int route = 4;
    int sizeShip = 3;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}
CTEST(checkRoute_test, size10_right3_r1)
{
    int size = 10;
    int letter = 0;
    int number = 0;
    int route = 6;
    int sizeShip = 3;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size10_right3_r0)
{
    int size = 10;
    int letter = 9;
    int number = 0;
    int route = 6;
    int sizeShip = 3;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}

CTEST(checkRoute_test, size10_down4_r1)
{
    int size = 10;
    int letter = 2;
    int number = 2;
    int route = 2;
    int sizeShip = 4;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size10_down4_r0)
{
    int size = 10;
    int letter = 2;
    int number = 8;
    int route = 2;
    int sizeShip = 4;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}
CTEST(checkRoute_test, size10_up4_r1)
{
    int size = 10;
    int letter = 2;
    int number = 9;
    int route = 8;
    int sizeShip = 4;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size10_up4_r0)
{
    int size = 10;
    int letter = 2;
    int number = 0;
    int route = 8;
    int sizeShip = 4;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}
CTEST(checkRoute_test, size10_left4_r1)
{
    int size = 10;
    int letter = 3;
    int number = 0;
    int route = 4;
    int sizeShip = 4;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size10_left4_r0)
{
    int size = 10;
    int letter = 1;
    int number = 0;
    int route = 4;
    int sizeShip = 4;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}
CTEST(checkRoute_test, size10_right4_r1)
{
    int size = 10;
    int letter = 0;
    int number = 0;
    int route = 6;
    int sizeShip = 4;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size10_right4_r0)
{
    int size = 10;
    int letter = 9;
    int number = 0;
    int route = 6;
    int sizeShip = 4;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}

CTEST(checkRoute_test, size15_down1)
{
    int size = 15;
    int letter = 2;
    int number = 2;
    int route = 2;
    int sizeShip = 1;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size15_up1)
{
    int size = 15;
    int letter = 2;
    int number = 2;
    int route = 8;
    int sizeShip = 1;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size15_left1)
{
    int size = 15;
    int letter = 2;
    int number = 2;
    int route = 4;
    int sizeShip = 1;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size15_right1)
{
    int size = 15;
    int letter = 2;
    int number = 2;
    int route = 6;
    int sizeShip = 1;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size15_down2_r1)
{
    int size = 15;
    int letter = 2;
    int number = 2;
    int route = 2;
    int sizeShip = 2;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size15_down2_r0)
{
    int size = 15;
    int letter = 2;
    int number = 14;
    int route = 2;
    int sizeShip = 2;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}
CTEST(checkRoute_test, size15_up2_r1)
{
    int size = 15;
    int letter = 2;
    int number = 9;
    int route = 8;
    int sizeShip = 2;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size15_up2_r0)
{
    int size = 15;
    int letter = 2;
    int number = 0;
    int route = 8;
    int sizeShip = 2;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}
CTEST(checkRoute_test, size15_left2_r1)
{
    int size = 15;
    int letter = 2;
    int number = 0;
    int route = 4;
    int sizeShip = 2;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size15_left2_r0)
{
    int size = 15;
    int letter = 0;
    int number = 0;
    int route = 4;
    int sizeShip = 2;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}
CTEST(checkRoute_test, size15_right2_r1)
{
    int size = 15;
    int letter = 0;
    int number = 0;
    int route = 6;
    int sizeShip = 2;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size15_right2_r0)
{
    int size = 15;
    int letter = 14;
    int number = 0;
    int route = 6;
    int sizeShip = 2;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}

CTEST(checkRoute_test, size15_down3_r1)
{
    int size = 15;
    int letter = 2;
    int number = 2;
    int route = 2;
    int sizeShip = 3;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size15_down3_r0)
{
    int size = 10;
    int letter = 2;
    int number = 13;
    int route = 2;
    int sizeShip = 3;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}
CTEST(checkRoute_test, size15_up3_r1)
{
    int size = 15;
    int letter = 2;
    int number = 9;
    int route = 8;
    int sizeShip = 3;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size15_up3_r0)
{
    int size = 15;
    int letter = 2;
    int number = 0;
    int route = 8;
    int sizeShip = 3;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}
CTEST(checkRoute_test, size15_left3_r1)
{
    int size = 15;
    int letter = 2;
    int number = 0;
    int route = 4;
    int sizeShip = 3;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size15_left3_r0)
{
    int size = 15;
    int letter = 1;
    int number = 0;
    int route = 4;
    int sizeShip = 3;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}
CTEST(checkRoute_test, size15_right3_r1)
{
    int size = 15;
    int letter = 0;
    int number = 0;
    int route = 6;
    int sizeShip = 3;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size15_right3_r0)
{
    int size = 15;
    int letter = 13;
    int number = 0;
    int route = 6;
    int sizeShip = 3;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}

CTEST(checkRoute_test, size15_down4_r1)
{
    int size = 15;
    int letter = 2;
    int number = 2;
    int route = 2;
    int sizeShip = 4;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size15_down4_r0)
{
    int size = 15;
    int letter = 2;
    int number = 12;
    int route = 2;
    int sizeShip = 4;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}
CTEST(checkRoute_test, size15_up4_r1)
{
    int size = 15;
    int letter = 2;
    int number = 9;
    int route = 8;
    int sizeShip = 4;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size15_up4_r0)
{
    int size = 15;
    int letter = 2;
    int number = 0;
    int route = 8;
    int sizeShip = 4;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}
CTEST(checkRoute_test, size15_left4_r1)
{
    int size = 15;
    int letter = 3;
    int number = 0;
    int route = 4;
    int sizeShip = 4;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size15_left4_r0)
{
    int size = 15;
    int letter = 1;
    int number = 0;
    int route = 4;
    int sizeShip = 4;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}
CTEST(checkRoute_test, size15_right4_r1)
{
    int size = 15;
    int letter = 0;
    int number = 0;
    int route = 6;
    int sizeShip = 4;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 1);
}
CTEST(checkRoute_test, size15_right4_r0)
{
    int size = 15;
    int letter = 13;
    int number = 0;
    int route = 6;
    int sizeShip = 4;
    ASSERT_EQUAL(checkRoute(letter, number, route, sizeShip, size), 0);
}
//////////////////////////////
CTEST(recShip_test, size10_near_border_up_r0)
{
    int size = 10;
    int letter = 5;
    int number = 0;
    int route = 8;
    int sizeShip = 4;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
CTEST(recShip_test, size10_near_border_up_r1)
{
    int size = 10;
    int letter = 5;
    int number = 5;
    int route = 8;
    int sizeShip = 4;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}
CTEST(recShip_test, size10_near_border_left_r0)
{
    int size = 10;
    int letter = 0;
    int number = 5;
    int route = 4;
    int sizeShip = 4;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
CTEST(recShip_test, size10_near_border_left_r1)
{
    int size = 10;
    int letter = 5;
    int number = 5;
    int route = 4;
    int sizeShip = 4;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}
CTEST(recShip_test, size10_near_border_right_r0)
{
    int size = 10;
    int letter = 9;
    int number = 5;
    int route = 6;
    int sizeShip = 4;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
CTEST(recShip_test, size10_near_border_right_r1)
{
    int size = 10;
    int letter = 5;
    int number = 5;
    int route = 6;
    int sizeShip = 4;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}
CTEST(recShip_test, size10_near_border_down_r1)
{
    int size = 10;
    int letter = 5;
    int number = 5;
    int route = 2;
    int sizeShip = 4;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}
CTEST(recShip_test, size10_near_border_down_r0)
{
    int size = 10;
    int letter = 5;
    int number = 9;
    int route = 2;
    int sizeShip = 4;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}

CTEST(recShip_test, size15_near_border_up_r0)
{
    int size = 15;
    int letter = 5;
    int number = 0;
    int route = 8;
    int sizeShip = 4;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
CTEST(recShip_test, size15_near_border_up_r1)
{
    int size = 15;
    int letter = 5;
    int number = 12;
    int route = 8;
    int sizeShip = 4;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}
CTEST(recShip_test, size15_near_border_left_r0)
{
    int size = 15;
    int letter = 0;
    int number = 5;
    int route = 4;
    int sizeShip = 4;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
CTEST(recShip_test, size15_near_border_left_r1)
{
    int size = 15;
    int letter = 5;
    int number = 5;
    int route = 4;
    int sizeShip = 4;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}
CTEST(recShip_test, size15_near_border_right_r0)
{
    int size = 15;
    int letter = 14;
    int number = 5;
    int route = 6;
    int sizeShip = 4;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
CTEST(recShip_test, size15_near_border_right_r1)
{
    int size = 15;
    int letter = 10;
    int number = 5;
    int route = 6;
    int sizeShip = 4;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}
CTEST(recShip_test, size15_near_border_down_r0)
{
    int size = 15;
    int letter = 5;
    int number = 14;
    int route = 2;
    int sizeShip = 4;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
CTEST(recShip_test, size15_near_border_down_r1)
{
    int size = 15;
    int letter = 5;
    int number = 10;
    int route = 2;
    int sizeShip = 4;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}

/////////////////////////////
CTEST(recShip_test, size10_angle_left_up_r0)
{
    int size = 10;
    int letter = 0;
    int number = 0;
    int route = 8;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
CTEST(recShip_test, size10_angle_left_up_r1)
{
    int size = 10;
    int letter = 0;
    int number = 1;
    int route = 8;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}

CTEST(recShip_test, size10_angle_right_up_r0)
{
    int size = 10;
    int letter = 9;
    int number = 0;
    int route = 8;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
CTEST(recShip_test, size10_angle_right_up_r1)
{
    int size = 10;
    int letter = 9;
    int number = 1;
    int route = 8;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}

CTEST(recShip_test, size15_angle_right_up_r0)
{
    int size = 15;
    int letter = 14;
    int number = 0;
    int route = 8;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
CTEST(recShip_test, size15_angle_right_up_r1)
{
    int size = 15;
    int letter = 14;
    int number = 1;
    int route = 8;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}
CTEST(recShip_test, size10_angle_left_down_r0)
{
    int size = 10;
    int letter = 0;
    int number = 9;
    int route = 2;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
CTEST(recShip_test, size10_angle_left_down_r1)
{
    int size = 10;
    int letter = 0;
    int number = 8;
    int route = 2;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}
CTEST(recShip_test, size15_angle_left_down_r0)
{
    int size = 15;
    int letter = 0;
    int number = 14;
    int route = 2;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
CTEST(recShip_test, size15_angle_left_down_r1)
{
    int size = 15;
    int letter = 0;
    int number = 13;
    int route = 2;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}
CTEST(recShip_test, size10_angle_right_down_r1)
{
    int size = 10;
    int letter = 9;
    int number = 8;
    int route = 2;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}
CTEST(recShip_test, size10_angle_right_down_r0)
{
    int size = 10;
    int letter = 9;
    int number = 9;
    int route = 2;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
CTEST(recShip_test, size15_angle_right_down_r1)
{
    int size = 15;
    int letter = 14;
    int number = 13;
    int route = 2;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}
CTEST(recShip_test, size15_angle_right_down_r0)
{
    int size = 15;
    int letter = 14;
    int number = 14;
    int route = 2;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
/////////////////////////////
CTEST(recShip_test, size10_angle_up_l_r0)
{
    int size = 10;
    int letter = 0;
    int number = 0;
    int route = 4;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
CTEST(recShip_test, size10_angle_up_l_r1)
{
    int size = 10;
    int letter = 1;
    int number = 0;
    int route = 4;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}

CTEST(recShip_test, size10_angle_up_r_r0)
{
    int size = 10;
    int letter = 9;
    int number = 0;
    int route = 6;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
CTEST(recShip_test, size10_angle_up_r_r1)
{
    int size = 10;
    int letter = 8;
    int number = 0;
    int route = 6;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}

CTEST(recShip_test, size15_angle_up_r_r0)
{
    int size = 15;
    int letter = 14;
    int number = 0;
    int route = 6;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
CTEST(recShip_test, size15_angle_up_r_r1)
{
    int size = 15;
    int letter = 13;
    int number = 0;
    int route = 6;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}
CTEST(recShip_test, size10_angle_ldown_r0)
{
    int size = 10;
    int letter = 0;
    int number = 9;
    int route = 4;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
CTEST(recShip_test, size10_angle_ldown_r1)
{
    int size = 10;
    int letter = 1;
    int number = 9;
    int route = 4;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}
CTEST(recShip_test, size15_angle_ldown_r0)
{
    int size = 15;
    int letter = 0;
    int number = 14;
    int route = 4;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
CTEST(recShip_test, size15_angle_ldown_r1)
{
    int size = 15;
    int letter = 1;
    int number = 14;
    int route = 4;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}
CTEST(recShip_test, size10_angle_rdown_r1)
{
    int size = 10;
    int letter = 8;
    int number = 9;
    int route = 6;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}
CTEST(recShip_test, size10_angle_rdown_r0)
{
    int size = 10;
    int letter = 9;
    int number = 9;
    int route = 6;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
CTEST(recShip_test, size15_angle_rdown_r1)
{
    int size = 15;
    int letter = 13;
    int number = 14;
    int route = 6;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}
CTEST(recShip_test, size15_angle_rdown_r0)
{
    int size = 15;
    int letter = 14;
    int number = 14;
    int route = 6;
    int sizeShip = 2;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }

    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}

////////////////////////
CTEST(recShip_test, near_ship_upr0)
{
    int size = 10;
    int letter = 4;
    int number = 2;
    int route = 2;
    int sizeShip = 1;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }
    field_M[3][4] = 1;
    field_M[4][4] = 1;
    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
CTEST(recShip_test, on_ship_up)
{
    int size = 10;
    int letter = 4;
    int number = 3;
    int route = 2;
    int sizeShip = 1;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }
    field_M[3][4] = 1;
    field_M[4][4] = 1;
    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
CTEST(recShip_test, near_ship_upr1)
{
    int size = 10;
    int letter = 4;
    int number = 1;
    int route = 2;
    int sizeShip = 1;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }
    field_M[3][4] = 1;
    field_M[4][4] = 1;
    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 1);
}

CTEST(recShip_test, near_ship_leftr0)
{
    int size = 10;
    int letter = 3;
    int number = 2;
    int route = 4;
    int sizeShip = 1;

    int** field_M = new int*[size];
    for (int i = 0; i < size; i++)
        field_M[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field_M[i][j] = 0;
        }
    }
    field_M[3][4] = 1;
    field_M[4][4] = 1;
    ASSERT_EQUAL(
            recordingShip(size, field_M, sizeShip, letter, number, route), 0);
}
