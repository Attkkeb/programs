#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int number;

int main()
{
    cout << "Witaj w losowaniu, za 3 sekundy nastapi zwolnienie blokady..." << endl;
    Sleep(3000);
    cout << endl;
    srand(time(NULL));

    for (int i = 0; i < 6; i++)
    {
          number = rand() % 49 + 1;
          cout << number << endl;
          Sleep(1000);

    }
    return 0;
}
