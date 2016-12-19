#include <iostream>

using namespace std;


void PrintArray (double arr[], int SIZE)

{
    for(int i = 0; i < SIZE; i++)
    {
        cout << "arr[" << i << "]=";
        cin  >> arr[i];

    }

}
void Array(double * arr, int SIZE)
{
    int counter = -1;
    if (arr[0] == arr[1])
    {
        counter = 1;
    }

    for( int i = 1; i < SIZE-1; i++)
    {
        if(arr[i] == (arr[i-1] + arr[i+1])/2)
        {
            counter = i;
        }

    }

    if (arr[SIZE-1] == arr[SIZE - 2])
    {
        counter = SIZE - 1;
    }

    cout << counter;


    }
int main()
{
 int size = 10;
 double array[size];
 PrintArray(array, size);
 Array(array, size);

 return 0;
}

