#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main()
{
    for (int i = 15; i >= 0; i--)
    {
        cout << i << endl;
        Sleep(1000);
        system("cls");
    }

    cout << "JEBUT!";

    return 0;
}
