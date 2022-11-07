#pragma once


void Task3()
{
	printf("¬ведите число!\n");
	std::string strInput;

	cin >> strInput;
	/* SHIZA BEGINS HERE!!! */

	const char* szInput = strInput.c_str();

	bool bIsOk = true;
	int iLast = 0;
	while (*szInput != 0x0)
	{
		if (*szInput < '0' || *szInput > '9')
		{
			printf("¬ведено не число!\n");
			return;
		}

		int iCurr = szInput[0] - '0';
		
		if (iCurr < iLast)
			bIsOk = false;

		iLast = iCurr;
		*szInput++;
	}

	if (bIsOk)
		printf("YES\n");
	else
		printf("NO\n");
	
}