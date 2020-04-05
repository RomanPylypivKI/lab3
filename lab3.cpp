#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

void func(int** arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i <= j)
            {
                if (i + j < n)
                {
                    arr[i][j] = 0;
                }
                else arr[i][j] = 1;
            }
            else arr[i][j] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << setw(4) << arr[i][j];
        cout << endl;
    }
}
int main()
{
    int** arr, n;
    cout << "Enter order of matrix:";
    cin >> n;
    cout << "-----------------------------------------------------" << endl;
    arr = new int* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    func(arr, n);
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}