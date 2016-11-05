#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter two numbers";
    cin >> a >> b;
    c = (a > b ? a : b);
    c = ( c > 0 ? c : c * (-1) );
    cout << c << endl;

    return 0;
}
