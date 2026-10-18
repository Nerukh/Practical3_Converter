/**
 * @file main.cpp
 * @brief Головний модуль програми-конвертера валют.
 *
 * Викликає модулі по черзі: введення -> конвертація -> виведення.
 */
#include <iostream>
#include <string>
#include <windows.h>
#include "input.h"
#include "converter.h"
#include "output.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double amount;
    string from, to;

    readInput(amount, from, to);
    
    try
    {
        double result = convert(amount, from, to);
        printResult(amount, from, result, to);
    }
    catch (const std::exception &e)
    {
        // Невідома валюта: виводимо повідомлення й завершуємо програму
        printError(e.what());
        return 1;
    }
    
}