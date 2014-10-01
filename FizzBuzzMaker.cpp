#include "StdAfx.h"
#include "FizzBuzzMaker.h"
#include <sstream>


FizzBuzzMaker::FizzBuzzMaker(void)
{
}


FizzBuzzMaker::~FizzBuzzMaker(void)
{
}

string FizzBuzzMaker::Translate( int number )
{
    if (number % 3 == 0)
    {
        return "Fizz";
    }

    return ConverIntToString(number);
}

string FizzBuzzMaker::ConverIntToString(int number)
{
    string return_str;
    stringstream ss;
    ss<<number;
    ss>>return_str;
    return return_str;
}
