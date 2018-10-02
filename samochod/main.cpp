#include <iostream>

using namespace std;

class Samochod
{

    string brand;
    string style;
    int year;
    int mileage;

    public:

    void dodaj_samochod()
    {
        cout << "Dodawanie nowego samochodu" << endl;
        cout << "Podaj marke: " << endl;
        cin >> brand;
        cout << "Podaj model: " << endl;
        cin >> style;
        cout << "Podaj rocznik: " << endl;
        cin >> year;
        cout << "Podaj przebieg: " << endl;
        cin >> mileage;
    }
    void wypisz_samochod()
    {
        cout << "Samochod to " << brand << " " << style << " z roku " << year << " o przebiegu " << mileage << " km. " << endl;
    }

};

int main()
{
    Samochod s1;
    s1.dodaj_samochod();
    s1.wypisz_samochod();
    Samochod s2;
    s2.dodaj_samochod();
    s2.wypisz_samochod();
    return 0;
}
