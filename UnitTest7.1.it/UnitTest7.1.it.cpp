#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_07_1.it/Lab_07_1.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71it
{
	TEST_CLASS(UnitTest71it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int z [2][2] =
			{
				{13, 14},
				{15, 16}
			};

			int* pz[2] = { z[0], z[1]};
			int S = 0;
			int k = 0;
			Calc(pz, 2, 2, S, k);
			int result = S;
			Assert::AreEqual(result, 58);


		}
	};
}
