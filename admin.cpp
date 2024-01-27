#include<string>
#include <iostream>
#include <string>
#include <fstream>
//#include <windows.h>
#include "shopkeeper.h"
#include "customer.h"
#include"admin.h"
#include"product.h"

using namespace std;




//default constructor
Admin::Admin() {



}
//setters
void Admin::set_Username(string user) {

	this->user = user;
}

void Admin::set_Password(string pass) {

	this->pass = pass;
}

void Admin::set_Email(string emai) {

	this->emai = emai;
}

// getters
string Admin::get_Username() {

	return user;
}

string Admin::get_Password() {

	return pass;
}

string Admin::get_Email() {

	return emai;
}

void Admin::edit_customer(Customer* Customer_list, int Total_customers) {
	string t_username;
	int customer_no=-1;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "Enter Username: ";
	getline(cin, t_username);

	for (int i = 0; i < Total_customers; i++) {
		if (t_username == Customer_list[i].get_username()) {
			customer_no = i;
			cout << endl << "___________DESPLAYING DETAILS OF " << t_username << "___________" << endl;
			cout << "Customer ID: " << Customer_list[i].get_c_id() << endl;
			cout << "1) First Name: " << Customer_list[i].get_fname() << endl;
			cout << "2) Last Name: " << Customer_list[i].get_lname() << endl;
			cout << "3) Email: " << Customer_list[i].get_email() << endl;
			cout << "4) Username: " << Customer_list[i].get_username() << endl;
			cout << "5) Password: " << Customer_list[i].get_password() << endl;
			cout << "6) Registration Date: " << Customer_list[i].get_reg_date() << endl;
			cout << "7) Gender: " << Customer_list[i].get_gender() << endl;
			cout << "8) Blood Group: " <<  Customer_list[i].get_blood_grp() << endl;
			cout << "9) Contact Number: " << Customer_list[i].get_contact_no() << endl;
			cout << "10) Address: " << Customer_list[i].get_address() << endl;
		}
	}

	int option;
	cout << endl << "What to change?" << endl << ">>";
	cin >> option;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	string fname, lname, username, email, password, reg_date, gender, blood_grp, contact_no, address;
	
	switch (option) {
		case 1: {
			cout << "Enter New First name: ";
			getline(cin, fname);
			Customer_list[customer_no].set_fname(fname);
		}break;
		case 2: {
			cout << "Enter New Last name: ";
			getline(cin, lname);
			Customer_list[customer_no].set_lname(lname);
		}break;
		case 3: {
			cout << "Enter New Email: ";
			getline(cin, email);
			Customer_list[customer_no].set_email(email);
		}break;
		case 4: {
			cout << "Enter New Username: ";
			getline(cin, username);
			Customer_list[customer_no].set_username(username);
		}break;
		case 5: {
			cout << "Enter New Password: ";
			getline(cin, password);
			Customer_list[customer_no].set_password(password);
		}break;
		case 6: {
			cout << "Enter New Registration date(DD/MM/YYYY): ";
			getline(cin, reg_date);
			Customer_list[customer_no].set_reg_date(reg_date);
		}break;
		case 7: {
			cout << "Enter New Gender: ";
			getline(cin, gender);
			Customer_list[customer_no].set_gender(gender);
		}break;
		case 8: {
			cout << "Enter New Blood Group: ";
			getline(cin, blood_grp);
			Customer_list[customer_no].set_blood_grp(blood_grp);
		}break;
		case 9: {
			cout << "Enter New Contact Number: ";
			getline(cin, contact_no);
			Customer_list[customer_no].set_contact_no(contact_no);
		}break;
		case 10: {
			cout << "Enter New Address: ";
			getline(cin, address);
			Customer_list[customer_no].set_address(address);
		}break;
	}

	fstream write;
	write.open("Newfile.txt", ios::out);

	for (int i = 0; i < Total_customers; i++) {
		if (i != 0) {
			write << endl;
		}
		write << i + 1 << ")" << endl;
		write << "First Name: " << Customer_list[i].get_fname() << endl;
		write << "Last Name: " << Customer_list[i].get_lname() << endl;
		write << "Email: " << Customer_list[i].get_email() << endl;
		write << "Username: " << Customer_list[i].get_username() << endl;
		write << "Password: " << Customer_list[i].get_password() << endl;
		write << "Registration date: " << Customer_list[i].get_reg_date() << endl;
		write << "Gender: " << Customer_list[i].get_gender() << endl;
		write << "Blood group: " << Customer_list[i].get_blood_grp() << endl;
		write << "Contact number: " << Customer_list[i].get_contact_no() << endl;
		write << "Address: " << Customer_list[i].get_address() << endl;
		write << "Product Category: " << endl;
		write << "Product Quantity: " << endl;
		write << "Bill Status: " << endl;
		write << "__________________";
	}
	write.close();
	//Sleep(5);
	remove("customer.txt");
	rename("Newfile.txt", "customer.txt");
}

void Admin::delete_customer(Customer* Customer_list, int Total_customers) {
	string t_username;
	int customer_no = -1;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "Enter Username to delete: ";
	getline(cin, t_username);

	fstream write;
	write.open("Newfile.txt", ios::out);

	for (int i = 0; i < Total_customers; i++) {
		if(Customer_list[i].get_username() != t_username){
			if (i != 0) {
				write << endl;
			}
			write << i + 1 << ")" << endl;
			write << "First Name: " << Customer_list[i].get_fname() << endl;
			write << "Last Name: " << Customer_list[i].get_lname() << endl;
			write << "Email: " << Customer_list[i].get_email() << endl;
			write << "Username: " << Customer_list[i].get_username() << endl;
			write << "Password: " << Customer_list[i].get_password() << endl;
			write << "Registration date: " << Customer_list[i].get_reg_date() << endl;
			write << "Gender: " << Customer_list[i].get_gender() << endl;
			write << "Blood group: " << Customer_list[i].get_blood_grp() << endl;
			write << "Contact number: " << Customer_list[i].get_contact_no() << endl;
			write << "Address: " << Customer_list[i].get_address() << endl;
			write << "Product Category: " << endl;
			write << "Product Quantity: " << endl;
			write << "Bill Status: " << endl;
			write << "__________________";
		}
	}
	write.close();
	//Sleep(5);
	remove("customer.txt");
	rename("Newfile.txt", "customer.txt");

}

// funtionalities
void Admin::sign_into_system(Customer* Customer_list, int Total_customers) {
	int choice;

	cout << " Enter username:" << endl << ">> ";
	cin >> user;
	cout << "Enter password:" << endl << ">> ";
	cin >> pass;
	if (user == "admin" && pass == "admin") {
		cout << "Welcome admin " << endl;
		cout << "1. Add new shopkeeper" << endl;
		cout << "2. Add new customer" << endl;
		cout << "3. Add new Product" << endl;
		cout << "5. Edit a Customer" << endl;
		cout << "6. Edit a Product" << endl;
		cout << "7. Delete a Customer" << endl;
		cout << ">> ";
		cin >> choice;
		switch (choice)
		{
			case 1:
			{
				add_new_shopkeeper();
				break;
			}
			case 2:
			{
				//call retrieve function here
				int Customer_counter = 0;
				add_new_customer(Customer_counter);
				break;
			}
			case 3:
			{
				add_new_product();
				break;
			}

			case 4: {

			}break;
			case 5: {
				edit_customer(Customer_list, Total_customers);
			}break;
			case 6: {
			}break;
			case 7: {
				delete_customer(Customer_list, Total_customers);
			}




		}


	}
	else if (user != "admin" && pass == "admin")
	{
		cout << "Access denied!" << endl;
	}
}

// incomplete
void Admin::add_new_shopkeeper()
{
	Shopkeeper obj;
	obj.Input_shopkeeper();
}

void Admin::add_new_customer(int Customer_counter)
{
	Customer object;
	object.Register_customer(Customer_counter);
	
}

void Admin::add_new_product() {

	Product object;
	object.input_prod();
}




