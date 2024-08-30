#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

void wave(int arr[][3], int nrows, int mcol)
{


    for (int col = 0; col < mcol; col++)
    {

        if (col & 1)
        {

            for (int row = nrows - 1; row >= 0; row--)
            {

                cout << arr[col][row];
            }
        }
        else
        {

            for (int row = 0; row < nrows; row++)
            {

                cout << arr[row][col];
            }
        }
    }
}

int main()
{

    int row = 3;
    int col = 3;

    int arr1[row][col] = {{3, 12, 9} , {5, 2, 89} , {90, 45, 22}};

    wave(arr1, 3,3);
}