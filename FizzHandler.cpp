#include "StdAfx.h"
#include "FizzHandler.h"


FizzHandler::FizzHandler(WordHandler *handler) : WordHandler(handler)
{
}


FizzHandler::~FizzHandler(void)
{
}

std::string FizzHandler::Handle( const int number )
{
    if (number % 3 == 0)
    {
        return "Fizz";
    }

    return _successor->Handle(number);
}
