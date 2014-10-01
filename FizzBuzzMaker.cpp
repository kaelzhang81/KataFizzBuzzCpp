#include "StdAfx.h"
#include "FizzBuzzMaker.h"
#include "CommonNumberHandler.h"
#include "BuzzHandler.h"
#include "FizzHandler.h"


FizzBuzzMaker::FizzBuzzMaker(void)
{
}


FizzBuzzMaker::~FizzBuzzMaker(void)
{
}

string FizzBuzzMaker::Translate( int number )
{
    CommonNumberHandler common_number_handler(nullptr);
    BuzzHandler buzz_handler(&common_number_handler);
    FizzHandler fizz_handler(&buzz_handler);
    //FizzBuzzHandler fizzbuzz_handler(fizz_handler);

    //return fizzbuzz_handler.Handle(number);

    if (number % 15 == 0)
    {
        return "FizzBuzz";
    }

    return fizz_handler.Handler(number);
}


