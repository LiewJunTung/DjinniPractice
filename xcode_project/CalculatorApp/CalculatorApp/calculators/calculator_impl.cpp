#include "calculator_impl.hpp"
#include <string>


namespace calculator{
    std::shared_ptr<Calculator> Calculator::create() {
        return std::make_shared<CalculatorImpl>();
    }

    CalculatorImpl::CalculatorImpl() {

    }

    int32_t CalculatorImpl::summation(int32_t number1, int32_t number2) {
        int32_t result = number1 + number2;
        return result;
    }
    
    int32_t CalculatorImpl::multiplication(int32_t number1, int32_t number2) {
        return number1 * number2;
    }
    
    int32_t CalculatorImpl::subtraction(int32_t number1, int32_t number2) {
        return number1 - number2;
    }
    
    int32_t CalculatorImpl::division(int32_t number1, int32_t number2) {
        if(number2 == 0){
          throw std::overflow_error("Divide by zero exception");
        }
        return number1 / number2;
    }
}
