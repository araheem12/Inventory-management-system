#include "customer.h"
#include <string>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int Customer::c_id = 0;
Customer::Customer() {
	fname = "";
	lname = "";
	username = "";
	email = "";
	password = "";
	reg_date = "";
	gender = "";
	blood_grp = "";
	contact_no = "";
	address = "";
}


// setter

void Customer::set_Customer(int c_id, string fname, string lname, string email, string username, string password, string reg_date, string gender, string blood_grp, string contact_no, string address)
{
	this->c_id = c_id;
	this->fname = fname;
	this->lname = lname;
	this->username = username;
	this->email = email;
	this->password = password;
	this->reg_date = reg_date;
	this->gender = gender;
	this->blood_grp = blood_grp;
	this->contact_no = contact_no;
	this->address = address;
}

void Customer::set_fname(string fname) {
	this->fname = fname;
}
void Customer::set_lname(string lame) {
	this->lname = lname;
}
void Customer::set_email(string email) {
	this->email = email;
}
void Customer::set_username(string username) {
	this->username = username;
}
void Customer::set_password(string password) {
	this->password = password;
}
void Customer::set_reg_date(string reg_date) {
	this->reg_date = reg_date;
}
void Customer::set_gender(string gender) {
	this->gender = gender;
}
void Customer::set_blood_grp(string blood_grp) {
	this->blood_grp = blood_grp;
}
void Customer::set_contact_no(string contact_no) {
	this->contact_no = contact_no;
}
void Customer::set_address(string address) {
	this->address = address;
}

// getters
int Customer::get_c_id() {
	return c_id;

}

string Customer::get_fname() {
	return fname;

}

string Customer::get_lname() {
	return lname;

}


string Customer::get_email() {
	return email;
}
string Customer::get_username() {
	return username;
}
string Customer::get_password() {
	return password;
}

string Customer::get_reg_date() {
	return reg_date;

}
string Customer::get_gender() {
	return gender;

}
string Customer::get_blood_grp() {
	return blood_grp;

}
string Customer::get_contact_no() {
	return contact_no;

}

string Customer::get_address() {
	return address;

}


void Customer::Register_customer(int customer_number) {

	fstream write;
	write.open("customer.txt", ios::app| ios::out);

	if (write) {
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Enter First name: ";
		getline(cin, fname);
		cout << "Enter Last name: ";
		getline(cin, lname);
		cout << "Enter Email: ";
		getline(cin, email);
		cout << "Enter Username: ";
		getline(cin, username);
		cout << "Enter Password: ";
		getline(cin, password);
		cout << "Enter registration date(DD/MM/YYYY): ";
		getline(cin, reg_date);
		cout << "Enter gender: ";
		getline(cin, gender);
		cout << "Enter blood group: ";
		getline(cin, blood_grp);
		cout << "Enter contact number: ";
		getline(cin, contact_no);
		cout << "Enter address: ";
		getline(cin, address);
	}
	
	if (customer_number != 0) {
		write << endl;
	}
	write << customer_number+1 << ")" << endl;
	write << "First Name: " << fname << endl;
	write << "Last Name: " << lname << endl;
	write << "Email: " << email << endl;
	write << "Username: " << username << endl;
	write << "Password: " << password << endl;
	write << "Registration date: " << reg_date << endl;
	write << "Gender: " << gender << endl;
	write << "Blood group: " << blood_grp << endl;
	write << "Contact number: " << contact_no << endl;
	write << "Address: " << address << endl;
	write << "Product Category: " << endl;
	write << "Product Quantity: " << endl;
	write << "Bill Status: " << endl;
	write << "__________________";
	write.close();
}

void Customer::SignIn(Customer* Customer_list, int Total_customers){
	string username, password;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "Enter Username: ";
	getline(cin, username);
	cout << "Enter Passsword: ";
	getline(cin, password);

	for (int i = 0; i < Total_customers; i++) {
		cout << i + 1 << ")" << endl;
		cout << "Username: " << Customer_list[i].get_username() << endl;
		cout << "Password: " << Customer_list[i].get_password() << endl;
		if (username == Customer_list[i].get_username() && password == Customer_list[i].get_password()) {
			//SIGNIN FUNCTION that leads to system
		}

	}
}


