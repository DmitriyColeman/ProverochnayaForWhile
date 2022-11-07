#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int InputNaturalInt()
{
	std::string strInt;
	cin >> strInt;

	return atoi(strInt.c_str());
}

#include "Task1.h"
#include "Task2.h"
#include "Task3.h"
#include "Task4.h"
#include "Task5.h"

int main()
{
	setlocale(0, "");

	while (true)
	{
		system("cls");
		printf("Введите желаемый номер задачи. От 1 до 5\n");

		int iNum = _getch() - '0';
		switch (iNum)
		{
		case 1:
			Task1();
			printf("Для продолжения нажмите на любую клавишу\n");
			_getch();
			continue;
		case 2:
			Task2();
			printf("Для продолжения нажмите на любую клавишу\n");
			_getch();
			continue;
		case 3:
			Task3();
			printf("Для продолжения нажмите на любую клавишу\n");
			_getch();
			continue;
		case 4:
			Task4();
			printf("Для продолжения нажмите на любую клавишу\n");
			_getch();
			continue;
		case 5:
			Task5();
			printf("Для продолжения нажмите на любую клавишу\n");
			_getch();
			continue;
		default:
			continue;
		}
	}
	return 0;
}