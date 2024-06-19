/*******************************************************************************
* Имя файла: main.cpp
* Дата: 19-06-2024
* Разработчик: Артем Подлегаев
* Описание: Решение задач к лабораторной работе №1
* *****************************************************************************/


#include <myDescription.h>
#include <myFormatDescription.h>
#include <speedCalc.h>

#define Unit 3

int main() {
#if Unit == 1
    myDescription(); // Задание № 1
#elif Unit == 2
    myFormatDescription(); // Задание № 2
#elif Unit == 3 // Задание № 3
    std::cout << "Выберите задачу:\n\n" <<
                 "1. Вычислить скорость прямолинейного движения (по расстоянию и времени). \n" <<
                 "2. Вычислить ускорение (по начальной скорости, конечной скорости и времени). \n" <<
                 "3. Вычислить радиус круга (по длине его окружности). \n\n" <<
                 "Для выбора введите номер задачи... \n";
    int NumberProblem;
    std::cin >> NumberProblem;
    switch (NumberProblem) {
    case 1:
        std::cout << "Введите расстояние (м) и время (с): \n";
        float DistanseMovement, TimeMovement;
        std::cin >> DistanseMovement >> TimeMovement;
        std::cout << "Cкорость прямолинейного движения равна " << StraightforwardSpeed(DistanseMovement, TimeMovement) << " м/с.\n";
        break;
    case 2:
        std::cout << "Введите начальную скорость (м/с), конечную скорость (м/с) и время (с) \n";
        TimeMovement = 0;
        float InitialSpeed, FinalSpeed;
        std::cin >> InitialSpeed >> FinalSpeed >> TimeMovement;
        std::cout << "Ускорение равно " << BoostSpeed(InitialSpeed, FinalSpeed, TimeMovement) << " м/с^2.\n";
        break;
    case 3:
        std::cout << "Введите длину окружности (см): \n";
        float CircleLength;
        std::cin >> CircleLength;
        std::cout << "Радиус круга равен " << CircleRadius(CircleLength) << " см.\n";
        break;
    default:
        std::cout << "Такого задания не существует... \n";
        break;
    }
#else

#endif

    return 0;
}
