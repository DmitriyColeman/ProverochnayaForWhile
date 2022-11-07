#pragma once


void Task5()
{
	printf("Введите число!\n");
	std::string strInput;

	cin >> strInput;

	const char* szInput = strInput.c_str();

	int iCount = 0;
	int iMax = 0;
	while (*szInput != 0x0)
	{
		if (*szInput < '0' || *szInput > '9')
		{
			printf("Введено не число!\n");
			return;
		}

		int iCurr = szInput[0] - '0';
		int iDelim = iCurr / 4;

		if (iDelim != 0)
		{
			iCount++;
			if (iCurr > iMax)
			{
				iMax = iCurr;
			}
		}
		
		*szInput++;
	}

	printf("Максимальное: %d, число делимых: %d\n", iMax, iCount);

	
}