//
// Created by Cayleigh on 12/1/2025.
//
#include <iostream>
#include "conversion.h"

float celciusToFahrenheit(float celcius) {
    celcius = celcius;
    float fahrenheit;
    fahrenheit = celcius * 1.8 + 32.0;
    return fahrenheit;
}
float fahrenheitToCelcius(float fahrenheit) {
    fahrenheit = fahrenheit;
    float celcius;
    celcius = (fahrenheit - 32.0) / 1.8;
    return celcius;
}
float inchToCentimeter(float inch) {
    inch = inch;
    float centimeter;
    centimeter = inch*2.54;
    return centimeter;
}
float centimeterToInch(float centimeter) {
    centimeter= centimeter;
    float inch;
    inch = centimeter/2.54;
    return inch;
}