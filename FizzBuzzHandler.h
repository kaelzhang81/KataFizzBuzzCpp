#pragma once
#include "wordhandler.h"
class FizzBuzzHandler :
    public WordHandler
{
public:
    FizzBuzzHandler(WordHandler* handler);
    ~FizzBuzzHandler(void);

    string Handler(const int number);
};

