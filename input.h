/**
 * @file input.h
 * @brief Модуль введення даних користувача.
 *
 * Зчитує суму та коди валют і перевіряє коректність введених даних.
 */
#ifndef INPUT_H
#define INPUT_H

#include <string>

/**
 * @brief Зчитує з клавіатури суму та коди двох валют.
 * @param amount Сума для конвертації (завжди більша за 0).
 * @param from   Код початкової валюти (у верхньому регістрі).
 * @param to     Код цільової валюти (у верхньому регістрі).
 */
void readInput(double &amount, std::string &from, std::string &to);

#endif