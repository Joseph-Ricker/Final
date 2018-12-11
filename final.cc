#include <iostream>
#include <fstream>
using namespace std;

int countLine(string pname);
int countChar(string pname);

int main()
{

	char* parameter;
	string p;

	cout << "Enter a parameter";
	cin >> p;

	if(p == '\n'){
		string p1 = "Ohio University";
		string p2 = "Athens";
	}

	cout << countLine(p1) << " Lines" << endl;
	cout << countChar(p2) << " Characters" << endl;


	return 0;
}

int countLine(string pname){
	int count;

	while(pname != NULL){
		if (pname == '\n')
			count++;
	}

	return count;
}

int countChar(string pname){
	int count;

	while(pname != NULL){
		if pname != '\n'
			count++;
	}

	return count;
}


}
