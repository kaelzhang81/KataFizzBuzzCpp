#pragma once
#include "wordhandler.h"
class FizzHandler :
    public WordHandler
{
public:
    FizzHandler(WordHandler* successor);
    ~FizzHandler(void);

    string Handle(const int number);
};

