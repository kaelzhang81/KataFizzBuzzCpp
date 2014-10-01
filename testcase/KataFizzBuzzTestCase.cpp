#include "stdafx.h"
#include "KataFizzBuzzTestCase.h"
#include "FizzBuzzMaker.h"


TEST_F(KataFizzBuzzTestCase, given_1_should_say_1)
{
    ASSERT_TRUE("1" == fizz_buzz_maker.Translate(1));
}

TEST_F(KataFizzBuzzTestCase, given_2_should_say_2)
{
    ASSERT_TRUE("2" == fizz_buzz_maker.Translate(2));
}

TEST_F(KataFizzBuzzTestCase, given_3_should_say_fizz)
{
    ASSERT_TRUE("Fizz" == fizz_buzz_maker.Translate(3));
}

TEST_F(KataFizzBuzzTestCase, given_5_should_say_buzz)
{
    ASSERT_TRUE("Buzz" == fizz_buzz_maker.Translate(5));
}