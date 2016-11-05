#include <iostream>

using namespace std;

int main()
{
   int a, b;
   cout << "Enter two integers:\n";
   cin >> a >> b;
   int sum = a + b;
   sum = (sum % 2 == 0 ? sum * 2 : sum / 2 );
   cout << sum;

    return 0;
}
