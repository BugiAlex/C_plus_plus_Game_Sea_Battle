#include <Windows.h>
#include <iostream>
#include"Function.h"
#include<ctime>
#include<stdlib.h>

using namespace std;

int main() {

	SetConsoleTitle(L" - * - * - Sea Battle - * - * - ");

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hStdOut, 241);
	system("cls");
	StartWindow();

	system("cls");
	bool state = false;
	int i = 12;
	int j = 12;

	srand(time(NULL));

	char humanField[10][11];
	char humanMove[10][11];
	char computerField[10][11];

	inicializationArray(humanField);
	inicializationArray(humanMove);
	inicializationArray(computerField);

	cout << "\n\tChoose a way to fill the field with ships\n\t\tFill in manually\tpress 0\n\t\tFill in automatically\tpress 1\n\n\tYour chose: ";
	bool choseFill;
	cin >> choseFill;
	if (choseFill) 
	{
		shipAlignmentAutomatically(humanField);
	}
	else
	{
		manualShipPlacement(humanField);

	}

	shipAlignmentAutomatically(computerField);

	while (true)
	{
		HumanMove(humanField, computerField, humanMove, hStdOut);

		ComputerMove(humanField, &state,&i,&j);
	}
	
	return 0;
}