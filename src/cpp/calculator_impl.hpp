#pragma once

#include "calculator.hpp"

namespace calculator {

    class CalculatorImpl : public calculator::Calculator {

    public:
        CalculatorImpl();

        int32_t summation(int32_t number1, int32_t number2);

        int32_t multiplication(int32_t number1, int32_t number2);
        
        int32_t subtraction(int32_t number1, int32_t number2);
        
        int32_t division(int32_t number1, int32_t number2);
    };
}
