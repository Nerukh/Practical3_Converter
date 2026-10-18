/**
 * @file output.h
 * @brief Модуль виведення результатів та повідомлень про помилки.
 */
#ifndef OUTPUT_H
#define OUTPUT_H

#include <string>
using namespace std;

/**
 * @brief Виводить результат конвертації.
 * @param amount Початкова сума.
 * @param from   Код початкової валюти.
 * @param result Сума після конвертації.
 * @param to     Код цільової валюти.
 */
void printResult(double amount, const string &from, double result, const string &to);

/**
 * @brief Виводить повідомлення про помилку.
 * @param message Текст помилки.
 */
void printError(const string &message);

#endif