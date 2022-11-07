#pragma once

void Task2()
{
	printf("Вводите числа. Когда надоест, введите !q\n");
	std::string strNextInfo;
	int iMax = 0;
	while (strNextInfo != string("!q"))
	{
		cin >> strNextInfo;
		if (strNextInfo == string("!q")) continue;

		int iCurr = atoi(strNextInfo.c_str());
		if (iCurr > iMax) iMax = iCurr;
	}

	printf("Максимальное число из введенных - %d!\n", iMax);
}