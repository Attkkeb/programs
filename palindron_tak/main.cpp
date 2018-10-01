#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string number;
bool ifPalindrome = true;


int main()
{
    cout << "Podaj liczbe i sprawdz czy to palindrom: ";
    cin >> number;

    int digit = number.size();



    for(int i = 0; i < digit / 2; i++)
        {
            if (number[i] != number[digit - 1 - i])
            ifPalindrome = false;
        }

    if (ifPalindrome) cout << "Palindrom!";
    else cout << "Niepalindrom!";





    return 0;
}
