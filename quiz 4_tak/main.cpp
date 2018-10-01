#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;

string topic, nick;
string content[5];
string odpA[5], odpB[5], odpC[5], odpD[5];
string correct[5];
string ansawer;
int points = 0;
int main()
{
    int nr_line = 1;
    string line;
    int nr_quest = 0;

    fstream plik;
    plik.open("quiz.txt", ios::in);
    if (plik.good() == false)
    {
        cout << "Nie udalo sie otworzyc pliku!";
        exit(0);
    }
    cout << "Test programistyczny" << endl;
    cout << "--------------------" << endl;
    while(getline(plik, line))
    {
        switch(nr_line)
        {
            case 1: topic = line;               break;
            case 2: nick = line;                break;
            case 3: content[nr_quest] = line;   break;
            case 4: odpA[nr_quest] = line;      break;
            case 5: odpB[nr_quest] = line;      break;
            case 6: odpC[nr_quest] = line;      break;
            case 7: odpD[nr_quest] = line;      break;
            case 8: correct[nr_quest] = line;   break;

        }
        if(nr_line == 8)
            {
                nr_line = 2;
                nr_quest++;
            }

        nr_line++;
    }
    plik.close();
    for(int i = 0; i <= 4; i++)
    {
        cout << endl << content[i] << endl;
        cout << "A. " << odpA[i] << endl;
        cout << "B. " << odpB[i] << endl;
        cout << "C. " << odpC[i] << endl;
        cout << "D. " << odpD[i] << endl;

        cout <<" Twoja odpowiedz: ";
        cin >> ansawer;

        transform(ansawer.begin(), ansawer.end(), ansawer.begin(), ::tolower);

        if(ansawer == correct[i])
        {
           cout << "Dobrze! Zdobywasz punkt!" << endl;
           points++;
        }
        else
            cout << "Zle! Brak punktu! Poprawna odpowiedz: " << correct[i] << endl;


    }
        cout << endl << "Koniec quizu! zdobyte punkty: " << points;

    return 0;
}
