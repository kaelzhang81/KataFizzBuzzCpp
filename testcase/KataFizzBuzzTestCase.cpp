#include "stdafx.h"
#include "KataFizzBuzzTestCase.h"
#include "FizzBuzzMaker.h"


TEST_F(KataFizzBuzzTestCase, given_one_should_say_one)
{
    ASSERT_TRUE("1" == fizz_buzz_maker.Translate(1));
    ASSERT_TRUE("2" == fizz_buzz_maker.Translate(2));
}