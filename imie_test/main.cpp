#include <iostream>

using namespace std;

int main()
{
    string word;

    cout << "PROGRAM ODWRACAJACY KOLEJNOSC LITER W WYRAZIE" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Podaj wyraz: ";
    getline(cin, word);

    int lenght = word.length();

    while(lenght!=0)
        {
            cout << word[lenght - 1];
            lenght--;
        }


    return 0;
}
