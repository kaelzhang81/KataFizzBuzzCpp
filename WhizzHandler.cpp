#include "StdAfx.h"
#include "WhizzHandler.h"


WhizzHandler::WhizzHandler(WordHandler *successor) : WordHandler(successor)
{
}


WhizzHandler::~WhizzHandler(void)
{
}

std::string WhizzHandler::Handle( const int number )
{
    if (number % 7 == 0)
    {
        return "Whizz";
    }

    return _successor->Handle(number);
}
