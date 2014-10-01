#pragma once
#include "wordhandler.h"
class BuzzHandler :
    public WordHandler
{
public:
    BuzzHandler(WordHandler *successor);
    ~BuzzHandler(void);

    string Handle(const int number);
};

