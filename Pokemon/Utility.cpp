#include "Utility.h"
#include <iostream>
using namespace std;

void Utility::clearConsole()
{
#ifdef _WIN32
	system("cls");
#else
	(void)system("clear");
#endif
}

void Utility::WaitForEnter()
{
	cin.get();
}

void Utility::clearInputBuffer()
{
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}