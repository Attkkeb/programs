#include <iostream>

using namespace std;

class Rectangle_area
{
   float a;
   float b;

public:

    Rectangle_area (float x, float y)
    {
        a = x;
        b = y;
    }

    ~Rectangle_area()
    {
        ;
    }



   void load()
   {
       cout << "Podaj pierwszy bok prostokata: ";
       cin >> a;
       cout << "Podaj drugi bok prostokata: ";
       cin >> b;
   }
   void show()
   {
       cout << "Pole prostokata: " << a*b;
   }
};
