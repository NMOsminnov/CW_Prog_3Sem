﻿
#include <iostream>
#include<string>

#include "List.h"

using namespace std;

const char f_name[] = "input.txt";

int main()
{
	List* start = new List;
	List* answer;

	fileReadList(start, f_name);
	printConsole(start);
	answer = findName(start, "door1");

	cout << "-------------------" << endl;
	printConsole(answer);
	cout << "-------------------" << endl;
	printConsole(start);
	

}
