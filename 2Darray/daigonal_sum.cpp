#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[4][4] = {{5, 8, 3, 9}, {6, 2, 8, 4}, {5, 3, 2, 2}, {2, 8, 1, 9}};

    int firstsum = 0;

    for (int i = 0; i < 4; i++)
    {

      

            firstsum += arr[i][i];
        
    }

    int secondsum = 0;

    int i = 0;
    int j = 3;

    while (j >= 0)
    {
        secondsum += arr[i][j];
        i++;
        j--;
    }

    cout << firstsum << " " << secondsum;
}