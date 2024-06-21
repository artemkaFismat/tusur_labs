/*******************************************************************************
* Имя файла: oneTask.cpp
* Дата: 21-06-2024
* Разработчик: Артем Подлегаев
* Описание: Решение задач к лабораторной работе №2
* *****************************************************************************/


#include <oneTask.h>
#include <twoTask.h>

float broksFormula(float height, int gender) {
    if (gender == 1) {
        return ((height - 100) * 9) / 10;
    }
    else {
        return ((height - 100) * 85) / 100;
    }
}

float ketlesFormula(float weight, float height) {
    return weight / (height / 100);
}
