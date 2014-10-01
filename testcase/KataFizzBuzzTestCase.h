#pragma once
#include <gtest/gtest.h>
#include "FizzBuzzMaker.h"

class KataFizzBuzzTestCase:
	public testing::Test
{
public:
	virtual void SetUp()
	{

	}
	virtual void TearDown()
	{
	}

    FizzBuzzMaker fizz_buzz_maker;
};

