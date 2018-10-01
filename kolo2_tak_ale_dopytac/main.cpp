#include <iostream>
#include <math.h>

using namespace std;

class Point
{
    string name;
    float x,y;

public:

    void show ()
    {
        cout << name << "(" << x << "," << y << ")" << endl;
    }
    Point (string n = "S", float a = 0, float b = 0 )
    {
        name = n;
        x = a;
        y = b;
    }
};

class Wheel : public Point
{
    string name;
    protected:
    float r;

public:

    void show ()
    {
        cout << "Kolo o nazwie: " << name << endl;
        cout << "Srodek kola: ";
        Point::show();
        cout << "Promien: " << r << endl;
        cout << "Pole kola: " << atan(1)*4 * r * r << endl;
    }
    Wheel (string nk = "Kolko", string np = "S", float a = 0, float b = 0, float pr = 1)
    :Point (np, a, b)
    {
        name = nk;
        r = pr;

    }
};

class Sphere : public Wheel
{
    string name;

public:
    void show()
    {
        Wheel::show();
        cout << "Kula o nazwie: " << name << endl;
        cout << "Objetosc kuli: " << atan(1)*4*r*r*r*4.0/3.0 << endl;

    }
    Sphere (string ns = "Kulka",  string nk = "Kolko", string np = "S", float a = 0, float b = 0, float pr = 1)
    :Wheel (nk, np, a, b, pr)
    {
        name = ns;


    }
};

int main()
{
    Sphere w1;
    w1.show();
    return 0;
}
