#pragma once

void Task1()
{
	printf("[������ 1]: ������� �����!\n");
	int iChislo = InputNaturalInt();
	if (iChislo <= 0)
	{
		printf("�����\n");
		return;
	}

	int iSum = 0;
	
	for (; iChislo > 0; iChislo--)
	{
		iSum += iChislo;
	}
	printf("����� ���������: %d\n", iSum);
}