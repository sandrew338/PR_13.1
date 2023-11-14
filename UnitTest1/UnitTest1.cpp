#include "pch.h"
#include "CppUnitTest.h"
#include "../Var.cpp"
#include "../Sum.cpp"
#include "../Dod.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(tests)
	{
	public:
		
		TEST_METHOD(nsVar)
		{
			nsVar::x = 1.;
			nsVar::a = 0.;
			nsSum::sum();
			Assert::AreEqual(s, 0.);/*
			nsVar::x = 1., nsVar::x_p = 1., nsVar::x_k = 1., nsVar::dx = 1., nsVar::a = 0., nsVar::s = 0.;
			nsVar::e = 0.001;
			nsSum::sum();
			Assert::AreEqual(nsVar::s, 0.);
			Assert::AreEqual(1, 1);*/
		}
	};
}
