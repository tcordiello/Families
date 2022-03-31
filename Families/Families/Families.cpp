#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "FamilyClass.h"

using namespace std;

int main()
{
	bool run = true;
	string newName;
	Family* fam = new Family();
	bool famCreated = false;

	while (run) {
		cout << "Family" << endl << endl;

		cout << "Enter a number to choose what to do:" << endl << endl;

		cout << "1 - Create family" << endl;
		cout << "2 - View family" << endl;
		cout << "3 - Add child" << endl;
		cout << "4 - Exit" << endl;
		
		char choice;
		cin >> choice;
		switch (choice) {
			case '1':
				famCreated = true;
				fam->createFamily();
				fam->setChildren();
				break;
			case '2':
				if (famCreated) {
					cout << fam->getHusbName() + " and " + fam->getWifeName() + " " + fam->getFamName() << endl;
					if (fam->haveChildren()) {
						cout << "They have " + to_string(fam->getNumOfChildren()) + " children:" << endl;
						fam->getChildren();
					}
				}
				else {
					cout << "You must create a family first." << endl << endl;
				}
				break;
			case '3':
				if (famCreated) {
					cout << "What is the name of the child?" << endl;
					cin >> newName;
					cout << endl;
					fam->addChild(newName);
				}
				else {
					cout << "You must create a family first." << endl << endl;
				}
				break;
			case '4':
				run = false;
				break;
			default:
				cout << "Enter a number from 1 to 4." << endl << endl;
				break;
		}
	}
}