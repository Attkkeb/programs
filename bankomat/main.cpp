#include <iostream>

using namespace std;

string PIN, PIN2, PIN3;

int main()
{
    cout << "Witaj w naszym banku!" << endl;
    cout << "Podaj swoj nowy numer PIN: ";
    cin >> PIN;
    cout << "Powtorz numer PIN: ";
    cin >> PIN2;

    if (PIN != PIN2)
    {
        cout << "PIN-y nie moga sie roznic!";
    }
  else
    {
        cout << "PIN zmieniony pomyslnie!" << endl;
        cout << "Aby zalogowac wpisz PIN: ";
        cin >> PIN3;

        if (PIN == PIN3)
            cout << "Pomyslnie zalogowano do banku!" << endl;
        else
            cout << "Nie udalo Ci sie zalogowac do banku!" << endl;
    }
    return 0;
}
