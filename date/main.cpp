#include<iostream>
#include<cmath>
#include <ctime>
using namespace std;

int main()
{

  time_t t = time(NULL);
  tm* timePtr = localtime(&t);


  cout << "Date     " << (timePtr -> tm_mday) << "/" << (timePtr -> tm_mon) + 1 << "/" << (timePtr -> tm_year) + 1900 << endl;

  return 0;
}
