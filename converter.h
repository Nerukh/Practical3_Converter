#ifndef CONVERTER_H
#define CONVERTER_H

#include <string>

double getRate(const std::string &currency);

double convert(double amount, const std::string &from, const std::string &to);

#endif