#include <iostream>

using namespace std;

int age;

int main()
{
    cout << "Ile masz lat: ";
    cin >> age;

    if (age < 18)
        {
            cout << "Nie jestes pelnoletni i nie mozesz zostac prezydentem.";
        }
    else if ( (age >= 18) && (age < 35) )
        {
            cout << "Jestes pelnoletni, ale nie mozesz kandydowac na prezydenta.";
        }
    else
        {
            cout << "Jestes pelnoletni i mozesz kandydowac na prezydenta.";
        }

    return 0;
}
