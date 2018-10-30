#include <iostream>
#include "binary.h"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "Binary Array Practice" << endl;
    cout << "===========================================================" << endl << endl;

    boolean test(15);
    test.bitOn(5);
    test.bitOn(10);
    test.bitOn(1);
    test.bitOn(8);
    for (int i = 0; i < 15; i++)
        cout << test[i];

    test.bitOff(10);
    cout << endl << test[10];
    return EXIT_SUCCESS;
}

