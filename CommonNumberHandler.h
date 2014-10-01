#pragma once
#include "wordhandler.h"
class CommonNumberHandler :
    public WordHandler
{
public:
    CommonNumberHandler(WordHandler *handler);
    ~CommonNumberHandler(void);

    string Handler(const int number);

private:
    string ConverIntToString(int number);
};

