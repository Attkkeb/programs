#include <iostream>

using namespace std;

int pupils, sweets, x, y;

int main()
{
    cout << "Ilu uczniow jest w Twojej klasie: ";
    cin >> pupils;

    cout << "Ile cukierkow kupila mama: ";
    cin >> sweets;

    if (pupils > 1)
    {
        x = sweets / (pupils - 1);
        y = sweets - x * (pupils - 1);
    }
    else
    {
        x = 1;
        y = 0;
    }

    cout << "Cukierkow dla kazdego ucznia jest: " << x;



    cout << endl << "Dla Jasia na wieczor: " << y;


    return 0;
}
