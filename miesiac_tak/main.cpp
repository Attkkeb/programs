#include <iostream>
#include <cstdlib>

using namespace std;

int number;

int main()
{
    cout << "Podaj numer miesiaca: ";
    if (! (cin >> number) )
    {
        cerr << "To nie jest liczba!";
        exit(0);
    }

    switch(number)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:

            cout << "Ten miesiac ma 31 dni!";
            break;

        case 4:
        case 6:
        case 9:
        case 11:

            cout << "Ten miesiac ma 30 dni!";
            break;

    case 2:
    {
        int year;
        cout << "Podaj rok: ";
        cin >> year;
        if ( ( (year % 4 == 0) && (year % 100 != 0) ) || (year % 400 == 0) )
        cout << "Ten miesiac ma 29 dni";
        else cout << "Ten miesiac ma 28 dni";
    }
            break;
            default: cout << "Niepoprawny numer miesiaca";
    }

    return 0;
}
