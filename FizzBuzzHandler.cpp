#include "StdAfx.h"
#include "FizzBuzzHandler.h"


FizzBuzzHandler::FizzBuzzHandler(WordHandler *successor) : WordHandler(successor)
{
}


FizzBuzzHandler::~FizzBuzzHandler(void)
{
}

std::string FizzBuzzHandler::Handle( const int number )
{
    if (number % 3 == 0 && number % 5 == 0)
    {
        return "FizzBuzz";
    }

    return _successor->Handle(number);
}
