// Whileloop Class Example

#include <iostream>
#include <string>
using namespace std;

int main() {
	string food;
char resp;
	
	cout << "Please enter a food you like: ";
	cin; R"(Do you wish to continue ?(Y/N))";
	cin >> resp;

	while (resp!='N')
	{
		cout << "Please enter a food you like: ";
		cin >> food;
		cout << "Do you wish to continue? (Y/N) ";
		cin >> resp;
	}
	return 0;

}