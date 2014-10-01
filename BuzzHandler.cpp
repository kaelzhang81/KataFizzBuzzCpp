#include "StdAfx.h"
#include "BuzzHandler.h"


BuzzHandler::BuzzHandler(WordHandler *handler) : WordHandler(handler)
{
}


BuzzHandler::~BuzzHandler(void)
{
}

std::string BuzzHandler::Handle(const int number)
{
    if (number % 5 == 0)
    {
        return "Buzz";
    }

    return _successor->Handle(number);
}
