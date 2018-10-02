#include <iostream>
#include "rectangle.h"

using namespace std;

void Rectangle_area::load ()
{
    cout << "Podaj pierwszy bok prostokata: ";
    cin >> a;
    cout << "Podaj drugi bok prostokata: ";
    cin >> b;
};

void Rectangle_area::count ()
{
    area = a*b;
};

void Rectangle_area::show ()
{
    cout << "Podaj pierwszy bok prostokata: " << area;
};

