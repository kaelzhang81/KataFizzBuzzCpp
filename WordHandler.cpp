#include "StdAfx.h"
#include "WordHandler.h"


WordHandler::WordHandler(WordHandler* successor)
{
    _successor = successor;
}


WordHandler::~WordHandler(void)
{
}
