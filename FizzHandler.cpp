#include "StdAfx.h"
#include "FizzHandler.h"


FizzHandler::FizzHandler(WordHandler *handler) : WordHandler(handler)
{
}


FizzHandler::~FizzHandler(void)
{
}

std::string FizzHandler::Handler( const int number )
{
    if (number % 3 == 0)
    {
        return "Fizz";
    }

    return _handler->Handler(number);
}
