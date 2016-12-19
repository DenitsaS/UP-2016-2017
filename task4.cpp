#include <iostream>

using namespace std;

const int ROWS =  20;
const int COLNS = 20;

void InitArray( int arr[][COLNS], int ROWS, int COLNS)
{
    for(int i = 0; i < ROWS; i++)

    {
        for( int j = 0; j < COLNS; j++)
        {
            cout << "arr[" << i << "][" << j <<  "]="  ;
            cin >> arr[i][j];
        }
    }
}

void returnMatrix(int arr[ROWS][COLNS], int newarr[ROWS][COLNS], int ROWS, int COLNS)
{
    for(int i = 0; i < COLNS; i++)
    {
        for(int j = 0; j < ROWS; j++)
        {
            newarr[j][i] = arr[i][j];
        }

    }
}
void PrintMatrix(int arr[][COLNS], int ROWS, int COLNS)
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLNS; j++)
        {
            cout << "arr[" << i << "]" << "[" <<j <<  "]=" << arr[i][j] << endl;
        }

    }
}

int main()
{
    int array[ROWS][COLNS];
    int newarray[ROWS][COLNS];
    int rows, colns;
    cout << "Enter the number of rows and colns:" << endl;
    cin >> rows >> colns;

    InitArray(array, rows, colns);
    returnMatrix(array, newarray, rows, colns);
    PrintMatrix(newarray, rows, colns);


    return 0;
}
