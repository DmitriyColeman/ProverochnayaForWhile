#pragma once

void Task4()
{

	printf("¬ведите число!\n");
	std::string strInput;

	cin >> strInput;
	const char* szInput = strInput.c_str();

	if (szInput[strlen(szInput) - 1] < '0' || szInput[strlen(szInput) - 1] > '9')
	{
		printf("¬ведено не число!\n");
		return;
	}
	int iLastNumber = szInput[strlen(szInput) - 1] - '0';

	int iThreeCount = 0;
	int iLastCount = 0;
	int iOddCount = 0;
	int iMoreFiveSum = 0;
	int iMoreSevenMult = 1;
	int iZerosAndFivesCount = 0;

	while (*szInput != 0x0) // c str
	{
		if (*szInput < '0' || *szInput > '9')
		{
			printf("¬ведено не число!\n");
			return;
		}

		int iCurr = szInput[0] - '0';
		if (iCurr == 3) iThreeCount++;
		if (iCurr > 5) iMoreFiveSum += iCurr;
		if (iCurr > 7) iMoreSevenMult *= iCurr;
		if (iCurr == 0 || iCurr == 5) iZerosAndFivesCount++;
		if (iCurr == iLastNumber) iLastCount++;
		if (iCurr % 2 == 0) iOddCount++;
		*szInput++;
	}

	printf("–езультат: число троек: %d, число последних цифр: %d, число четных: %d, сумма больше п€ти: %d, произведение больше семи: %d, число нулей и п€терок: %d\n", iThreeCount,
		iLastCount, iOddCount, iMoreFiveSum, iMoreSevenMult, iZerosAndFivesCount);
}