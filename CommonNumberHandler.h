#pragma once
#include "wordhandler.h"
class CommonNumberHandler :
    public WordHandler
{
public:
    CommonNumberHandler(WordHandler *handler);
    ~CommonNumberHandler(void);

    string Handle(const int number);

private:
    string ConverIntToString(int number);
};

