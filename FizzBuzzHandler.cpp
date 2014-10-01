#include "StdAfx.h"
#include "FizzBuzzHandler.h"


FizzBuzzHandler::FizzBuzzHandler(WordHandler *handler) : WordHandler(handler)
{
}


FizzBuzzHandler::~FizzBuzzHandler(void)
{
}

std::string FizzBuzzHandler::Handler( const int number )
{
    if (number % 3 == 0 && number % 5 == 0)
    {
        return "FizzBuzz";
    }

    return _handler->Handler(number);
}
