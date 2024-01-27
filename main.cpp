#include <iostream>
//#include <fstream>
#include"Menu.h"

using namespace std;

int main(){
	int choice;
	cout << "_____________INVENTORY MANAGEMENT SYSTEM_____________" << endl;
	cout << "_____________________________________________________" << endl;
	cout << "_____________________1.Admin Menu____________________" << endl;
	cout << "___________________2.Shopkeeper Menu_________________" << endl;
	cout << "____________________3.Customer Menu__________________" << endl;
	cout << "_____________________________________________________" << endl;
	cin >> choice;

	Menu check;
	check.newMenu(choice);

		
}

