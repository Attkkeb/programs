#include <iostream>

int sumNine(int x){
    int result = 0;
    while (x > 0){
        result += x % 10;
        x /= 10;
    }
    return result;
}

bool isZero(int zero){

    if (zero % 10 == 0 || zero / 10 % 10 == 0 || zero / 100 % 10 == 0) {
        return true;
    }

    return false;
}

int main() {
    int anno = 1000;
    int n = 0;
    for(int i = 1000; i <= 9999; i++)
    {
        if (sumNine(anno) == 9 && isZero(anno)) {

                n++;

            std::cout << n << " " << anno << std::endl;

        }
        anno++;
    }

    return 0;
}
