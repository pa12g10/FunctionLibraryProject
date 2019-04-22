#include "stdafx.h"
#include <iostream>
#include "CppUnitTest.h"
#include "utils.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace tests
{		
	TEST_CLASS(testUtils)
	{
	public:
		
		TEST_METHOD(Addition)
		{
			int a = 1;
			int b = 2;
			int result;
			Engine add(a, b);
			result = add.add();
			std::cout << result << std::endl;
			Assert::AreEqual(result,a+b);
		}

		TEST_METHOD(Multiply)
		{
			int a = 1;
			int b = 2;
			int result;
			Engine multiply(a, b);
			result = multiply.multiply();
			std::cout << result << std::endl;
			Assert::AreEqual(result, a * b);
		}

	};
}