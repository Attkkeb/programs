#include <iostream>

using namespace std;

float metre;

float how_many_inches(float m)
{
    float inch = m * 39.37;
    return inch;
}

int main()
{
    cout << "Podaj ile metrow: ";
    cin >> metre;

    cout << "Na cale: " << how_many_inches(metre) << endl;

    return 0;
}
