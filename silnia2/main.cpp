#include <iostream>

using namespace std;

int main()
{

    int n = 5;
    long int iloczyn = 1;
    for(int i = 1; i <= n; i++)
    {
        iloczyn *=  i;
    }
        cout<<iloczyn<<endl;
}
