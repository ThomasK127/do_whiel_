#include <iostream>
using namespace std;

int minuta = 0; int zamiekanych = 1;
int main() {
    do {
        minuta +=5;
        zamiekanych *= 4;
        cout << "minelo minut: " << minuta << endl;
        cout << "liczba zamieszkanych osob: " << zamiekanych << endl;
    }
    return 0;
}
