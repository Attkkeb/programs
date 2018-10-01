#include <iostream>

using namespace std;

int number;


int main()
{
    cout << "Podaj liczbe nieparzysta: ";
    cin >> number;
    if (number % 2 == 0)
        {
            cout << "Liczba jest parzysta!";
        }
    else
        {
            for (int i = 0; i < number; i++)
                {
                    for (int a = 0; a < number; a++)
                        {
                            if (i > a) cout << i;
                            else cout << a;
                        }
    cout << endl;
                }
        }
    return 0;
}
