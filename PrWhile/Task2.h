#pragma once

void Task2()
{
	printf("������� �����. ����� �������, ������� !q\n");
	std::string strNextInfo;
	int iMax = 0;
	while (strNextInfo != string("!q"))
	{
		cin >> strNextInfo;
		if (strNextInfo == string("!q")) continue;

		int iCurr = atoi(strNextInfo.c_str());
		if (iCurr > iMax) iMax = iCurr;
	}

	printf("������������ ����� �� ��������� - %d!\n", iMax);
}