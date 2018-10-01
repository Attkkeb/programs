#include <iostream>
#include <cmath>

using namespace std;

int how_much;
float average, sum;

int main()
{
    cout << "Podaj ilosc liczb, ktore chcesz wpisac: ";
    cin >> how_much;
    cout << "Wpisz " << how_much << " liczb:" << endl;
    float number[how_much], difference[how_much];


    for(int i = 0; i < how_much; i++)
    {
        cin >> number[i];
        sum += number[i];
    }

    average = sum / how_much;

    for(int i = 0; i < how_much; i++)
    {
        difference[i] = fabs(average - number[i]);
    }

    float m;
    m = difference[0];


    for(int i = 1; i < how_much; i++)
    {
       if(difference[i] < m) m = difference[i];
    }

    cout << endl;
    cout << "Srednia: " << average << endl;
    cout << "Liczba najblizsza sredniej: ";


    int conjuction = 0;
    for(int i = 0; i < how_much; i++)
    {

       if(number[i] == number[i - 1]);
       else if(m == difference[i])
       {
            if(conjuction > 0) cout << " oraz ";
                cout << number[i];
            conjuction++;
       }

    }

    return 0;
}
