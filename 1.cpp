TEST_METHOD(TestMethod1)
		{
			int parenl/*左括号*/, parenr/*右括号*/, shuzi0[4] = { 1,2,3,4 };
			float shuzi1[4] = { 1.2,2.3,3.4,4.5 };
			char yf[3] = { '+','-','+' };
			char yfc[3] = { '*','+','/' };
			char test[50] = {NULL};
			int k = 0;
			parenl = 1;                            //随机右括号
			parenr = 3;            //随机左括号
				for (int i = 1; i <= 4; i++)
				{
					if (parenl == i)                         //打印右括号
					{
						test[k] = '(';
						k++;
					}
					test[k] = shuzi0[i - 1] + '0';
					k++;//打印数字
					if (parenr == i + 1)                        //打印左括号
					{
						test[k] = ')';
						k++;
					}
					if (i + 1 == 5)                                //打印等号结束算式
					{
						test[k] = '=';
						k++;
						break;
					}
						test[k] = yf[i - 1];
						k++;
				}
			char ture[50] = {'(','1','+','2',')','-','3','+','4','='};
			Assert::AreEqual(ture, test);
		}