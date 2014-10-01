#pragma once
#include "wordhandler.h"
class FizzBuzzHandler :
    public WordHandler
{
public:
    FizzBuzzHandler(WordHandler* successor);
    ~FizzBuzzHandler(void);

    string Handle(const int number);
};

