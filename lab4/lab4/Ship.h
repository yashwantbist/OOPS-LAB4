#pragma once
#pragma once //protects against multiple definitions
#include <iostream>
using namespace std;


// we create a class named ship
class Ship {
private:
	string name;

public:
	

	//defaut paras
	Ship() : name("N/A") {
		cout << " A ship was created named: " << name << endl;
	}
	//para constructor
	Ship(const string& name) : name(name) {
		cout << "A ship was created named: " << name << endl;
	}
	//destructor
	~Ship() {
		cout << " A ship named " << name << " has sunk." << endl;
	}
};


