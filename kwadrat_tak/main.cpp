#include <iostream>

using namespace std;

int side;

int main()
{
    cout << "Podaj dlugosc boku kwadratu: ";
    cin >> side;

    for (int i = 0; i < side; i++)
    {

    for (int l = 0; l < side; l++)
    {
        cout << "x ";
    }
    cout << endl;
}

    return 0;
}
