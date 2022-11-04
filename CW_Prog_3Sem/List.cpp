
#include <iostream>
#include <fstream>

#include "List.h"

using namespace std;


/***********************************
*  Ã≈“Œƒ€ Ã¿Õ»œ”Àﬂ÷»… —Œ —œ»— ¿Ã»  * 
***********************************/


void addList(List* start, int num) {

	int i = 0;

	List* current = start;
	List* New = new List;

	while ((i < num - 1) && (current->next != NULL)) {
		current = current->next;
	}

	New->next = current->next;
	current->next = New;
}


	/**************************
	*   Ã≈“Œƒ€ ¬¬Œƒ¿-¬€¬Œƒ¿	  *
	**************************/

void printConsole(List* start) {
	List* current = start;

	while (current->next!=NULL) {
		

		cout<<current->number<<endl
			<<current->price<<endl			
			<<current->name<<endl
			<<current->type<<endl
			<<current->productionTime<<endl
			<<current->phoneNumber<<endl
			<<current->surname<<endl
			<<current->priceOfAccessories<<endl
			<<current->supplier<<endl
			<<current->deliveryTime<<endl<<endl;

		current = current->next;

	}
}
void fileReadList(List* start, const char* f_name) {
	int i = 1;
	ifstream ifs(f_name);

	List* current = start;

	while (!ifs.eof()) {
		ifs >> current->number;
		ifs >> current->price;

		ifs >> current->name;
		ifs >> current->type;
		ifs >> current->productionTime;
		ifs >> current->phoneNumber;
		ifs >> current->surname;
		ifs >> current->priceOfAccessories;
		ifs >> current->supplier;
		ifs >> current->deliveryTime;
		if (!ifs.eof()) {
			addList(start, i++);
			current = current->next;
		}

	}
}

/*********************************************************
*   ‘”Õ ÷»» Ã¿Õ»œ”Àﬂ÷»… — Œ“ƒ≈À‹Õ€Ã» ƒ¿ÕÕ€Ã» —“–¿Õ»÷€    *
*********************************************************/



void setNumber(List* start, int position, int number)
{
	List* current = start;
	int i = 0;

	while ((current->next != NULL) && (i < position)) {
		current = current->next;
	}
	current->number = number;
}
void setPrice(List* start, int position, float newPrice)
{
	List* current = start;
	int i = 0;

	while ((current->next != NULL) && (i < position)) {
		current = current->next;
	}
	current->price = newPrice;
}

void setName(List* start, int position, string newName)
{
	List* current = start;
	int i = 0;

	while ((current->next != NULL) && (i < position)) {
		current = current->next;
	}
	current->name = newName;
}
void setSurname(List* start, int position, string newSurname)
{
	List* current = start;
	int i = 0;

	while ((current->next != NULL) && (i < position)) {
		current = current->next;
	}
	current->surname = newSurname;
}
void setPhoneNumber(List* start, int position, string phoneNumber)
{
	List* current = start;
	int i = 0;

	while ((current->next != NULL) && (i < position)) {
		current = current->next;
	}
	current->phoneNumber = phoneNumber;
}

void setType(List* start, int position, string newType)
{
	List* current = start;
	int i = 0;

	while ((current->next != NULL) && (i < position)) {
		current = current->next;
	}
	current->type = newType;
}
void setProductionTime(List* start, int position, string newData)
{
	List* current = start;
	int i = 0;

	while ((current->next != NULL) && (i < position)) {
		current = current->next;
	}
	current->productionTime = newData;
}

void setPriceOfAccessories(List* start, int position, string newData)
{
	List* current = start;
	int i = 0;

	while ((current->next != NULL) && (i < position)) {
		current = current->next;
	}
	current->priceOfAccessories = newData;
}
void setSupplier(List* start, int position, string newData)
{
	List* current = start;
	int i = 0;

	while ((current->next != NULL) && (i < position)) {
		current = current->next;
	}
	current->supplier = newData;
}
void setDeliveryTime(List* start, int position, string newData)
{
	List* current = start;
	int i = 0;

	while ((current->next != NULL) && (i < position)) {
		current = current->next;
	}
	current->deliveryTime = newData;
}