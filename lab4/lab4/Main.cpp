#include "Ship.h"




int main() {
	Ship* myObjPointer1 = nullptr;
	myObjPointer1 = new Ship();
	delete myObjPointer1;


	Ship* myObjPointer2 = nullptr;
	myObjPointer2 = new Ship("Titanic");
	delete myObjPointer2;


	myObjPointer1 = nullptr;
	myObjPointer1 = new Ship("Victoria");
	delete myObjPointer1;

}
