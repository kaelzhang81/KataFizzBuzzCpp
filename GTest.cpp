// GTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <gtest/gtest.h>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int nTestReturnValue = 0;
	string line;
	
	testing::GTEST_FLAG(output) = "xml:gtest_result.xml";
	testing::InitGoogleTest(&argc, argv);

	nTestReturnValue = RUN_ALL_TESTS();

	cin >> line;

	return nTestReturnValue;
}

