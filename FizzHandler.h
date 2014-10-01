#pragma once
#include "wordhandler.h"
class FizzHandler :
    public WordHandler
{
public:
    FizzHandler(WordHandler* handler);
    ~FizzHandler(void);

    string Handler(const int number);
};

