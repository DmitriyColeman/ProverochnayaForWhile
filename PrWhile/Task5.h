#pragma once


void Task5()
{
	printf("������� �����!\n");
	std::string strInput;

	cin >> strInput;

	const char* szInput = strInput.c_str();

	int iCount = 0;
	int iMax = 0;
	while (*szInput != 0x0)
	{
		if (*szInput < '0' || *szInput > '9')
		{
			printf("������� �� �����!\n");
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

	printf("������������: %d, ����� �������: %d\n", iMax, iCount);

	
}