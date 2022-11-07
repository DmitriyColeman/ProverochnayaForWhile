#pragma once

void Task1()
{
	printf("[ЗАДАЧА 1]: Введите число!\n");
	int iChislo = InputNaturalInt();
	if (iChislo <= 0)
	{
		printf("Говно\n");
		return;
	}

	int iSum = 0;
	
	for (; iChislo > 0; iChislo--)
	{
		iSum += iChislo;
	}
	printf("Сумма делителей: %d\n", iSum);
}