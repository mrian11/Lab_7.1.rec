﻿#include "pch.h"
#include "CppUnitTest.h"
#include"../Lab_7.1.rec/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab72
{
	TEST_CLASS(UnitTestLab72)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            const int rowCount = 3;
            const int colCount = 3;
            int** t = new int* [rowCount];
            for (int i = 0; i < rowCount; ++i)
            {
                t[i] = new int[colCount];
                for (int j = 0; j < colCount; ++j)
                {
                   
                    t[i][j] = -5; 
                }
            }

            int S = 0;
            int k = 0;
            int i = 0;
            int j = 0;

            Calc(t, rowCount, colCount, S, k, i, j);

            Assert::AreEqual(0, t[0][0]); 
		}
	};
}
