#include <iostream>

using namespace std;

const int SIZE = 5;
void InitArray(int array[], int SIZE)

{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "arr[" << i << "]=" << endl;
        cin >> array[i];
    }
}

void Element(int * arr, int n, int SIZE)
{
    bool flag = true;

    for (int i = 0; i < SIZE ; i++)
        {
             if(arr[i] == n)
             {
                flag = true;
                break;
             }
             else
                flag = false;
        }

        cout << "bool result:" << flag << endl;

    for (int i = 0; i < SIZE; i++)
    {
        if(arr[i] == n)
        {
            int Index = i;
            for (int j = Index; j < SIZE - 1 ; j++)
            {
                arr[j] = arr[j + 1];

            }
             SIZE--;

        }

    }

    for (int i = 0; i < SIZE ; i++)
        {
            if (flag == false)
            {
            break;
            }
            cout << arr[i] << " ";
        }


}


int main()

{
    int size;
    cout << "Enter the size of your array " << endl;
    cin >> size;
    int array[size];
    int number ;
    cout << "Enter the number, that you don't want in your array" << endl;
    cin >> number;
    InitArray(array, size);

    Element(array, number , size);



    return 0;
}
