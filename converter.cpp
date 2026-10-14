#include "converter.h"

double getRate(const std::string &currency)
{
    if (currency == "UAH") return 1.0;
    if (currency == "USD") return 41.5;
    if (currency == "EUR") return 45.0;
    if (currency == "PLN") return 10.4;
    return -1;
}

double convert(double amount, const std::string &from, const std::string &to)
{
    double rateFrom = getRate(from);
    double rateTo = getRate(to);
    if (rateFrom < 0 || rateTo < 0)
        return -1;
    return amount * rateFrom / rateTo;
}