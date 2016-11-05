#include <iostream>

using namespace std;

int main()
{
    int a, b , c;
    cout << "Enter 3 integers:\n";
    cin >> a >> b >> c;
     if ( (a < 0 && b > 0 && c > 0) || ( a > 0 && b > 0 && c < 0) || ( a > 0 && b < 0  && c > 0) || ( a < 0 && b < 0 && c < 0 ))
         cout << "-";
        else  if ( a == 0 || b == 0 || c == 0)
        cout << "0";
        else
            cout << "+";

    return 0;
}
