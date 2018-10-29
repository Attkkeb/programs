#include <iostream>

int number = 1;
int helper1, helper2, max, max_number;
int counter = 1;

int main() {
    while (number != 0){
        helper2 = helper1;
        std::cout << "Podaj liczbe calkowita: " << std::endl;
        std::cin >> number;

        helper1 = number;

        if (helper1 == helper2){
            counter++;
        }
        else if (helper1 != helper2 && counter > max){
            max = counter;
            max_number = helper2;
            counter = 1;
        }
        else if (helper1 != helper2 && counter < max){
            counter = 1;
        }
    }

    std::cout << "Najdluzsza sekwencja: " << max << " razy. Liczba: " << max_number; ;

    return 0;
}