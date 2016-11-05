
#include <iostream>

using namespace std;

int main()
{
    int a;

    cin >> a;
    switch (a)
    {


    case 1:
    case 2:
    case 3:

        a = a * 10;
    cout << a;
    break;

    case 4:
    case 5:
    case 6:

        a= a *100;
    cout << a;
    break;
case 7:
    case 8:
        case 9:

             a=  a*1000;
    cout << a;


    break;
    default:
    cout << "Invalid input";
    }


    return 0;
}
