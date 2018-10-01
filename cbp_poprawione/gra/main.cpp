#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;
int number, shot, attempt = 0;
int coins;

int main()
{
    cout << "Wrzuc monety! Ile monet wrzuciles: ";
    cin >> coins;
    cout << "Witaj! Pomyslalam sobie liczbe 1-100" << endl;
    srand(time(NULL));
    number = rand() % 100 + 1;


    while(number != shot && coins > 0)
    {
        cout << "Zgadnij jaka to liczba (proba " << attempt + 1 << " zostalo Ci " << coins << " monet): ";
        cin >> shot;
        if (number > shot && coins != 0)
            cout << "Zle! za malo! ";
        else if(number < shot && coins != 0)
            cout << "Zle! za duzo! ";
        else if (number == shot && coins != 0)
            cout << "Udalo sie! wygrywasz!";
        attempt++;
        coins--;
    }
    if (coins == 0)
        cout << endl << "Frajer! Przegrales! Wrzuc wiecej monet!";

    return 0;
}
