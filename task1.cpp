#include <iostream>

using namespace std;

void SlappTwoIntegers(int* pointer1, int* pointer2)
{
    int container = *pointer1;
        *pointer1 = *pointer2;
        *pointer2 = container;
}

int main()
{
    int a, b;
        cout << "Enter two integers:";
        cin >> a >> b;

    SlappTwoIntegers(&a , &b);
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;

    return 0;
}
