#include <iostream>

using namespace std;

class Rectangle;
class Point
{
    string name;
    float x,y;
public:
    Point(string = "a", float = 0, float = 0);
    void load();

    friend void judge (Point pkt, Rectangle p);
};

class Rectangle
{
    string name;
    float x, y, width, height;

public:
    Rectangle (string = "brak", float = 0, float = 0, float = 1, float = 1);
    void load();

    friend void judge (Point pkt, Rectangle p);
};
