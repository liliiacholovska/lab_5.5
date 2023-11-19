#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.5/lab5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 3;
			int m = 9;
			int r = n % m;
			Assert::AreEqual(NSD(n, m), r);
		}
	};
}
