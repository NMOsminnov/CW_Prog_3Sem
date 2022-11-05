
#include <iostream>

#include "List.h"

using namespace std;

const char f_name[] = "input.txt";

int main()
{
	List* start = new List;

	fileReadList(start, f_name);
	printConsole(start);
	deleteList(start);
}
