#include <iostream>
#include  <cstdlib>
#include <time.h>
using namespace std;


int main()
{
srand(time(NULL));
int guess1 = -1, guess2 = -1, guess3 = -1 , guess4 = -1;
bool flag = false;

while (!flag)
     { guess1 = rand() % 9 + 1;
          guess2 = rand() % 9 + 1;
          guess3 = rand() % 9 + 1;
          guess4 = rand() % 9 + 1;
        if (guess1 != guess2 && guess1 != guess3 && guess1 != guess4 && guess2 != guess3 && guess2 != guess4 && guess4 != guess3)
       {

        flag = true;}

     }

int bikove = 0;
int kravi = 0;
int a1, b2 ,c3, d4;

for (int i = 0; i <= 10; i ++)
{
    cout << "Enter 4 different digits:\n";
    cin >> a1>> b2 >> c3 >> d4;

    bikove = 0;
    kravi= 0;

if (a1 == guess1)
    bikove++;
if (a1 == guess2 || a1 == guess3 || a1 == guess4)
    kravi++;
if (b2 == guess2)
    bikove++;
if (b2 == guess1 || b2 == guess3 || b2 == guess4)
    kravi++;
if (c3 == guess3)
    bikove++;
if (c3== guess2 || c3 ==guess1 || c3 == guess4)
    kravi++;
if (d4 == guess4)
    bikove++;
if (d4 == guess1 || d4 == guess2 || d4 == guess3)
    kravi++;
if (bikove == 4)
    cout << "Congratulations, you won!";
else
    cout << "Bulls:" << bikove <<endl<< "Cows: " << kravi<<endl;

}



cout << "Sorry, you lost the game";


        return 0;
}
