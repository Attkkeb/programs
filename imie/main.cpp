#include <iostream>

using namespace std;

string name;
int number;

int main()
{
    cout << "Podaj imie: ";
    cin >> name;
    cout << "Podaj dodatnia liczbe calkowita: ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        cout << i << ". " << name << endl;
    }

    return 0;
}
