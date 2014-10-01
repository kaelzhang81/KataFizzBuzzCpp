#include "StdAfx.h"
#include "WordHandler.h"


WordHandler::WordHandler(WordHandler* handler)
{
    _handler = handler;
}


WordHandler::~WordHandler(void)
{
}
