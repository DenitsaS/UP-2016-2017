#include <iostream>

using namespace std;

const int SIZE = 100;

void InitArray(int array[], int SIZE)

{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "arr[" << i << "]=" << endl;
        cin >> array[i];
    }
}

void ReturnArray(int *arr, int SIZE)

{
    for(int i = SIZE - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}
int main()

{
    int size;
    cout << "Enter the size of your array:";
    cin >> size;
    int a[size];
    InitArray(a, size);
    ReturnArray(a, size);
    return 0;
}
