#include "StdAfx.h"
#include "CommonNumberHandler.h"
#include <sstream>


CommonNumberHandler::CommonNumberHandler(WordHandler *handler) : WordHandler(handler)
{
}


CommonNumberHandler::~CommonNumberHandler(void)
{
}

string CommonNumberHandler::Handle(const int number)
{
    return ConverIntToString(number);
}

string CommonNumberHandler::ConverIntToString(int number)
{
    string return_str;
    stringstream ss;
    ss<<number;
    ss>>return_str;
    return return_str;
}
