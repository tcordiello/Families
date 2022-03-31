#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Family {

	private:
		string familyName;
		string husbandsName;
		string wifesName;
		bool hasChildren;
		int numOfChildren;
		vector<string> childrensNames;

	public:
		Family();
		void createFamily();
		void setFamName(string name);
		string getFamName();
		void setHusbName(string name);
		string getHusbName();
		void setWifeName(string name);
		string getWifeName();
		bool haveChildren();
		int getNumOfChildren();
		bool getChildren();
		void setChildren();
		void addChild(string childName);


};
