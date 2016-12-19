#include <iostream>

using namespace std;

const int SIZE = 10;


void InitArray(int array[], int SIZE)

{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "arr[" << i << "]=" << endl;
        cin >> array[i];
    }
}

void SortArray (int* arr, int SIZE)
{
     for (int i = 0; i < SIZE - 1; i++)
     {
        int minIndex = i;
        for (int j = i + 1; j < SIZE; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        int container = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = container;
      }

}

void ReturnAdress( int * arr,int SIZE, int* ptr, int n)
{
        int left = 0;
        int right = SIZE - 1;
        int middle = 0;

            while( left < right)
            {
                middle = (left + right) / 2;

                if (n == arr[middle])
                {

                    ptr = &arr[middle];
                    cout << ptr << endl;
                    break;

                }
                if (n < arr[middle])
                {
                    right = middle - 1;
                }
                if (n > arr[middle])
                {
                    left = middle + 1;
                }


            }
            if(n == arr[middle] )
            {
                ptr = &arr[middle];
                cout << ptr << endl;
            }

            if (n != arr[middle])
            {

                cout << "NULL" << endl;
            }



}

int main()
{
    int array1[SIZE];
    int* pointer;
    int number;
    cout << "Enter the number you want to chek:";
    cin >> number;

    InitArray(array1, SIZE);
    SortArray(array1, SIZE);
    ReturnAdress(array1, SIZE, pointer, number );
    return 0;
}
