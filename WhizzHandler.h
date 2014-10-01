#pragma once
#include "wordhandler.h"
class WhizzHandler :
    public WordHandler
{
public:
    WhizzHandler(WordHandler *successor);
    ~WhizzHandler(void);

    string Handle(const int number);
};

