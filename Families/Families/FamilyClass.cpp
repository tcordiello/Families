#include "FamilyClass.h"

Family::Family()
{
	familyName = "default";
	husbandsName = "default";
	wifesName = "default";
	hasChildren = false;
	numOfChildren = 0;
}

void Family::createFamily()
{
	cout << "Enter the family name:" << endl;
	cin >> familyName;
	cout << endl;
	cout << "Enter the husband's name:" << endl;
	cin >> husbandsName;
	cout << endl;
	cout << "Enter the wife's name:" << endl;
	cin >> wifesName;
	cout << endl;
}

void Family::setFamName(string name)
{
	familyName = name;
}

string Family::getFamName()
{
	return familyName;
}

void Family::setHusbName(string name)
{
	husbandsName = name;
}

string Family::getHusbName()
{
	return husbandsName;
}

void Family::setWifeName(string name)
{
	wifesName = name;
}

string Family::getWifeName()
{
	return wifesName;
}

bool Family::haveChildren()
{
	return hasChildren;
}

int Family::getNumOfChildren()
{
	return numOfChildren;
}

bool Family::getChildren()
{
	if (hasChildren) {
		for (int i = 0; i < childrensNames.size(); i++) {
			cout << childrensNames[i] << endl;
		}
		cout << endl;
		return true;
	}
	else {
		return false;
	}
}

void Family::setChildren()
{
	char yn;
	cout << "Do " + husbandsName + " and " + wifesName + " " + familyName + " have children? (Enter Y for yes, or N for no)" << endl;
	cin >> yn;
	cout << endl;
	if (yn == 'Y' || yn == 'y') {
		hasChildren = true;
		cout << "How many children? (Enter a number value greater than 0)" << endl;
		try {
			int num;
			cin >> num;
			cout << endl;
			if (num > 0) {
				numOfChildren = num;
				string name;
				for (int i = 1; i <= num; i++) {
					cout << "Enter the name of child number " + to_string(i) << endl;
					cin >> name;
					cout << endl;
					childrensNames.push_back(name);
				}
				cout << " Children successfully added." << endl;
			}
			else {
				throw "Number of children must be greater than 0.";
			}
		}
		catch (...) {
			cout << "Invalid entry." << endl;
		}
	}
	else {
		hasChildren = false;
	}

		
}

void Family::addChild(string childName)
{
	if (hasChildren) {
		numOfChildren++;
		childrensNames.push_back(childName);
	}
	else {
		hasChildren = true;
		numOfChildren++;
		childrensNames.push_back(childName);
	}
}
