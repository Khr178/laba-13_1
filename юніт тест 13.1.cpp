#include "pch.h"
#include "CppUnitTest.h"
#include "../лаба 13.1/var.h"
#include "../лаба 13.1/var.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace юніттест131
{
	TEST_CLASS(юніттест131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			nsVar::x_k = 2;
			nsVar::x_p = 3;
			double expected = 0;
			Assert::AreEqual(nsVar::a, expected);
		}
	};
}
