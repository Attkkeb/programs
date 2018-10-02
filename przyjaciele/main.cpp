#include <iostream>
#include "przyjaciele.h"

using namespace std;

void judge(Point pkt, Rectangle p)
{
    if((pkt.x >= p.x) && (pkt.x <= p.x + p.width) && (pkt.y >= p.y) && (pkt.y <= p.y + p.height))

        cout << endl << "Punkt " << pkt.name << " nalezy do prostokata: " << p.name;
    else
        cout << endl << "Punkt " << pkt.name << " lezy poza prostokatem: " << p.name;
}

int main()
{
    cout << "Zdefiniuj punkt i prostok¹t i sprawdz czy punkt zawiera sie w prostokacie." << endl;
    cout << "--------------------------------------------------------------------------" <<endl;

    Point pkt1("A", 3, 17);

    Rectangle p1("prostokat", 0, 0, 6, 4);
    pkt1.load();
    p1.load();

    judge (pkt1, p1);

    return 0;
}
