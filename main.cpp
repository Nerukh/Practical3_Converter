#include <iostream>
#include <string>
#include <windows.h>
#include "input.h"
#include "converter.h"
#include "output.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double amount;
    std::string from, to;

    readInput(amount, from, to);
    double result = convert(amount, from, to);
    printResult(amount, from, result, to);

    return 0;
}