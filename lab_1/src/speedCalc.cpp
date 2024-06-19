/*******************************************************************************
* Имя файла: speedCalc.cpp
* Дата: 19-06-2024
* Разработчик: Артем Подлегаев
* Описание: Решение задач к лабораторной работе №1
* *****************************************************************************/

#include <speedCalc.h>

// Функция расчета скорости прямолинейного движения

float StraightforwardSpeed(float DistanseMovement, float TimeMovement) {
    return DistanseMovement / TimeMovement;
}

// Функция расчета ускорения

float BoostSpeed(float InitialSpeed, float FinalSpeed, float TimeMovement) {
    return (InitialSpeed - FinalSpeed) / TimeMovement;
}

// Функция расчета радиуса окружности

float CircleRadius(float CircleLength) {
    return CircleLength / 6,28;
}
