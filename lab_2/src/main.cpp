/*******************************************************************************
* Имя файла: main.cpp
* Дата: 21-06-2024
* Разработчик: Артем Подлегаев
* Описание: Решение задач к лабораторной работе №2
* *****************************************************************************/


#include <iostream>
#include <oneTask.h>
#include <twoTask.h>
#include <threeTask.h>

#define Unit 3

int main() {
#if Unit == 1 /* Задание № 1 */
    std::cout << "Калькулятор для расчета идеального веса \n";

    int age, gender;
    float weight, height;

    std::cout << "Введите возраст: ";
    std::cin >> age;
    std::cout << "Введите вес: ";
    std::cin >> weight;
    std::cout << "Введите рост: ";
    std::cin >> height;
    std::cout << "Если мужчина введите 1, женщина 0: ";
    std::cin >> gender;
    std:: cout << "\n";

    std::cout << "Ваш идеальный вес: " << broksFormula(height, gender) << std::endl;

    float massIndex = ketlesFormula(weight, height);


    if(gender == 1 && age >= 19 && age <= 24 && massIndex - 21,4 >= 5) {
        std::cout << "Ваша норма ИМТ по возрасту: 21,4 (у вас имеются проблемы с лишним весом) \n";
    }
    else if(gender == 1 && age >= 25 && age <= 34 && massIndex - 21,6 >= 5) {
        std::cout << "Ваша норма ИМТ по возрасту: 21,6 (у вас имеются проблемы с лишним весом) \n";
    }
    else if(gender == 1 && age >= 35 && age <= 44 && massIndex - 22,9 >= 5) {
        std::cout << "Ваша норма ИМТ по возрасту: 22,9 (у вас имеются проблемы с лишним весом) \n";
    }
    else if(gender == 1 && age >= 45 && age <= 54 && massIndex - 25,8 >= 5) {
        std::cout << "Ваша норма ИМТ по возрасту: 25,8 (у вас имеются проблемы с лишним весом) \n";
    }
    else if(gender == 1 && age >= 55 && massIndex - 27,3 >= 5) {
        std::cout << "Ваша норма ИМТ по возрасту: 27,3 (у вас имеются проблемы с лишним весом) \n";
    }
    else if(gender == 0 && age >= 19 && age <= 24 && massIndex - 19,5 >= 5) {
        std::cout << "Ваша норма ИМТ по возрасту: 19,5 (у вас имеются проблемы с лишним весом) \n";
    }
    else if(gender == 0 && age >= 25 && age <= 34 && massIndex - 23,2 >= 5) {
        std::cout << "Ваша норма ИМТ по возрасту: 23,2 (у вас имеются проблемы с лишним весом) \n";
    }
    else if(gender == 0 && age >= 35 && age <= 44 && massIndex - 23,4 >= 5) {
        std::cout << "Ваша норма ИМТ по возрасту: 23,4 (у вас имеются проблемы с лишним весом) \n";
    }
    else if(gender == 0 && age >= 45 && age <= 54 && massIndex - 25,2 >= 5) {
        std::cout << "Ваша норма ИМТ по возрасту: 25,2 (у вас имеются проблемы с лишним весом) \n";
    }
    else if(gender == 0 && age >= 55 && massIndex - 27,3 >= 5) {
        std::cout << "Ваша норма ИМТ по возрасту: 27,3 (у вас имеются проблемы с лишним весом) \n";
    }
    else {
        std::cout << "У вас имеются проблемы с дифицитом массы тела!";
    }

#elif Unit == 2 /* Задание № 2 */

#elif Unit == 3 /* Задание № 3 */
    int n = 10;
    float floatNumber[n] = {11.4, 5.1, 7.2, 8.8, 1.4, 8.3, 5.1, 9.1, 9.1, 2.3};

    std::cout << "Среднее арифметическое равно: " << arithmeticMean(floatNumber) << std::endl;

#elif Unit == 4 /* Задание № 4 */

#else

#endif

    return 0;
}
