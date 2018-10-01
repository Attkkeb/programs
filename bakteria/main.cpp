#include <iostream>

using namespace std;

int population = 1;
int hour = 0;

int main()
{
    do
    {
        hour++;
        population = population * 2;

        cout << "Minelo godzin: " << hour;
        cout << " liczba bakterii: " << population << endl;
    }
        while(population <= 1000000000);

    return 0;
}
