#include "output.h"
#include <iostream>
#include <iomanip>

void printResult(double amount, const std::string &from,
                 double result, const std::string &to)
{
    if (result < 0)
    {
        std::cout << "Помилка: невідома валюта!\n";
        return;
    }
    std::cout << std::fixed << std::setprecision(2);
    std::cout << amount << " " << from << " = " << result << " " << to << "\n";
}