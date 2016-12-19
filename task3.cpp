#include <iostream>

using namespace std;
void ReturnArray(int* pointer1, int* pointer2, int SIZE1, int SIZE2)
{
    int arr1[5] = {1, 3, 5, 7 , 9};
    int arr2[5] = {2, 4, 6, 8, 10};
    pointer1 = &arr1[0];
    pointer2 = &arr2[0];
    int SIZE3 = SIZE1 + SIZE2;

    for (int i = 0; i < (SIZE3) / 2; i++)
    {
        if(pointer1 > pointer2)
        {
            cout << *pointer1 << endl;
            cout << *pointer2 << endl;
        }
        else
        {
            cout << *pointer2 << endl;
            cout << *pointer1 << endl;
        }
        pointer1++;
        pointer2++;

    }

}

int main()
{
    int *pntr1, *pntr2;
    int size1 = 5;
    int size2 = 5;
    ReturnArray(pntr1, pntr2, size1, size2);
    return 0;
}
