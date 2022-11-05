
#include <iostream>
#include <fstream>

#include "List.h"

using namespace std;


/***********************************
*  ÌÅÒÎÄÛ ÌÀÍÈÏÓËßÖÈÉ ÑÎ ÑÏÈÑÊÀÌÈ  * 
***********************************/

void addPage(List* start, int num) {

	int i = 0;

	List* current = start;
	List* New = new List;

	while ((i < num - 1) && (current->next != NULL)) {
		current = current->next;
	}

	New->next = current->next;
	current->next = New;
}


void deletePage(List* start, int position) {
	int i = 0;

	List* current = start;
	List* del;

	while ((current->next->next != NULL) && (i < position - 1)) {
		current = current->next;
	}
	del = current->next;
	current->next = del->next;
	delete del;
}
void deleteList(List* start) {
	List* current = start;

	while (current->next != NULL) {
		current = current->next;
		delete start;
		start = current;
	}
	delete start;
}


	/**************************
	*   ÌÅÒÎÄÛ ÂÂÎÄÀ-ÂÛÂÎÄÀ	  *
	**************************/

void printConsole(List* start) {
	List* current = start;

	while (current!=NULL) {	
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
		current->number = i;
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
			addPage(start, i++);
			current = current->next;
		}
	}
	ifs.close();
}

void fileComplementList(List* start, const char* f_name) {
	List* current = start;
	int i = 1;

	while (current->next != NULL) {
		current = current->next;
		i++;
	}

	ifstream ifs(f_name);

	while (!ifs.eof()) {
		current->number = i;
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
			addPage(start, i++);
			current = current->next;
		}
	}
}

/*********************************************************
*   ÔÓÍÊÖÈÈ ÌÀÍÈÏÓËßÖÈÉ Ñ ÎÒÄÅËÜÍÛÌÈ ÄÀÍÍÛÌÈ ÑÒĞÀÍÈÖÛ    *
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


	/*******************
	*  ÔÓÍÊÖÈÈ ÏÎÈÑÊÀ  *
	*******************/


List* findNumber(List* start, int key) {

	List* current = start;

	while (current->next != NULL) {
		if (current->number == key) {
			break;
		}
		current = current->next;
	}
	return current;
}
List* findPrice(List* start, float key) {

	List* current = start;

	while (current->next != NULL) {
		if (current->price == key) {
			break;
		}
		current = current->next;
	}
	return current;
}
List* findName(List* start, string key) {

	List* current = start;

	while (current->next != NULL) {
		if (current->name == key) {
			break;
		}
		current = current->next;
	}
	return current;
}
List* findSurname(List* start, string key) {

	List* current = start;

	while (current->next != NULL) {
		if (current->surname == key) {
			break;
		}
		current = current->next;
	}
	return current;
}
List* findPhoneNumber(List* start, string key) {

	List* current = start;

	while (current->next != NULL) {
		if (current->phoneNumber == key) {
			break;
		}
		current = current->next;
	}
	return current;
}
List* findType(List* start, string key) {

	List* current = start;

	while (current->next != NULL) {
		if (current->type == key) {
			break;
		}
		current = current->next;
	}
	return current;
}
List* findProductionTime(List* start, string key) {

	List* current = start;

	while (current->next != NULL) {
		if (current->productionTime == key) {
			break;
		}
		current = current->next;
	}
	return current;
}
List* findPriceOfAccessories(List* start, string key) {

	List* current = start;

	while (current->next != NULL) {
		if (current->priceOfAccessories == key) {
			break;
		}
		current = current->next;
	}
	return current;
}
List* findSupplier(List* start, string key) {

	List* current = start;

	while (current->next != NULL) {
		if (current->supplier == key) {
			break;
		}
		current = current->next;
	}
	return current;
}
List* findDeliveryTime(List* start, string key) {

	List* current = start;

	while (current->next != NULL) {
		if (current->deliveryTime == key) {
			break;
		}
		current = current->next;
	}
	return current;
}