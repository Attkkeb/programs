#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
clock_t start, start2, stop, stop2;
double czas, czas2;

long int silnia (int n)
{
    if (n == 0) return 1;
    else return silnia(n - 1) * n;
}

long int silnia2 (int n)
{
    long int iloczyn = 1;
    for(int i = 1; i <= n; i++)
    {
        iloczyn *=  i;
    }
    return iloczyn;
}
int main()
{
    start = clock();

    silnia(62229);

    stop = clock();

    czas = (double)(stop - start) / CLOCKS_PER_SEC;

    cout << "Czas zapisu rekurencyjnego " << czas << endl;

    start2 = clock();
    silnia2(62229);
    stop2 = clock();
    czas2 = (double)(stop - start) / CLOCKS_PER_SEC;
    cout << "Czas zapisu iteracyjnego " << czas2 << endl;

    if(czas2 > czas) {
        cout << "Rekurencja jest szybsza";
    }
    else if (czas >= czas2) {
        cout << "Iteracja!";
    }
    return 0;
}
