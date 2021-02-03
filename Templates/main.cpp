#include <iostream>
#include <string>
#include <vector>

#include "Fraccion.h"

using namespace std;

int main() {

    Fraccion fr1(2,5);
    Fraccion fr2(5,6);

    cout<< fr1+fr2 <<endl;

    return 0;
}