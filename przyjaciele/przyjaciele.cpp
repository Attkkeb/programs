#include <iostream>
#include "przyjaciele.h"

using namespace std;

Point :: Point(string n, float xx, float yy)
{
    name = n;
    x = xx;
    y = yy;
}

void Point :: load()
{
    cout << "Podaj nazwe Twojego puktu: "; cin >> name;
    cout << "Podaj wartosc x punktu " << name << ": "; cin >> x;
    cout << "Podaj wartosc y punktu " << name << ": "; cin >> y;
}

Rectangle :: Rectangle (string n, float xx, float yy, float s, float w)
{
    name = n;
    x = xx;
    y = yy;
    width = s;
    height = w;
}

void Rectangle :: load()
{
    cout << "Podaj nazwe Twojego prostokata: "; cin >> name;
    cout << "Podaj x lewego dolnego naroznika prostokata " << name << ": "; cin >> x;
    cout << "Podaj y lewego dolnego naroznika prostokata " << name << ": "; cin >> y;
    cout << "Podaj szerokosc prostokata " << name << ": "; cin >> width;
    cout << "Podaj wysokosc prostokata " << name << ": "; cin >> height;

}
