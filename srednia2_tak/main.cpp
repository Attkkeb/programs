#include <iostream>

using namespace std;

float mark[5];
float sum = 0, mean;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Podaj ocene " << i+1 << ": ";
        cin >> mark[i];
        sum += mark[i];
    }

    mean = sum/5;

    cout << "Srednia = " << mean;

    return 0;
}
