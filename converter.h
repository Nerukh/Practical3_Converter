/**
 * @file converter.h
 * @brief Модуль конвертації валют за фіксованими курсами.
 */
#ifndef CONVERTER_H
#define CONVERTER_H

#include <string>

/**
 * @brief Повертає курс валюти до гривні.
 * @param currency Код валюти (UAH, USD, EUR, PLN).
 * @return Скільки гривень становить одна одиниця валюти.
 * @throws std::invalid_argument якщо валюта невідома.
 */
double getRate(const std::string &currency);

/**
 * @brief Конвертує суму з однієї валюти в іншу.
 * @param amount Сума у початковій валюті.
 * @param from   Код початкової валюти.
 * @param to     Код цільової валюти.
 * @return Сума у цільовій валюті.
 * @throws std::invalid_argument якщо якусь із валют не знайдено.
 */
double convert(double amount, const std::string &from, const std::string &to);

#endif