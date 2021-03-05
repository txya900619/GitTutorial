#include <iostream>
#include <string>

#include "stdafx"

using namespace System;

bool Guess(int number) {
}

int main(array<System::String ^> ^ args) {
    int guess;
    do {
        std::cin >> guess;
    } while (!Guess(guess));
    return 0;
}