#include<string>
#include <iostream>
#include <string>
#include <fstream>
#include "menu.h"

int Find_No_Of_Customers() {
	//opening file to read
	fstream read;
	string line;
	read.open("customer.txt");
	if (!read) {
		return 0;
	}

	//read until the end of file
	int line_counter = 0;

	while (!read.eof()) {
		getline(read, line);
		line_counter++;
	}
	read.close();
	int total_customers = line_counter / 12;
	cout << "Total Customers: " << total_customers << endl;

	return total_customers;
}

void retrieve_customers(Customer* Customer_list) {
	//opening file to read
	fstream read;
	string line;
	//populate customer list with info
	read.open("customer.txt");

	int line_counter = 0;

	//will be used to set a customer
	int customer_counter = 0;
	string fname, lname, username, email, password, reg_date, gender, blood_grp, contact_no, address;
	bool paid_status;

	//read until the end of file
	while (!read.eof()) {
		getline(read, line);

		switch (line_counter % 15) {
			case 0: {
				string st_number;
				for (int i = 0; i < line.length(); i++) {
					if (line[i] == ')') {
						break;
					}
					st_number += line[i];
				}
				//cout << "st: " << st_number << endl;
				customer_counter = stoi(st_number);
			}break;
			case 1: {
				fname = "";
				for (int i = 0; i < line.length(); i++) {
					if (fname == "First Name: ") {
						fname = "";
					}
					fname+= line[i];
				}
			}break;
			case 2: {
				lname = "";
				for (int i = 0; i < line.length(); i++) {
					if (lname == "Last Name: ") {
						lname = "";
					}
					lname += line[i];
				}
			}break;
			case 3: {
				email = "";
				for (int i = 0; i < line.length(); i++) {
					if (email == "Email: ") {
						email = "";
					}
					email += line[i];
				}
			}break;
			case 4: {
				username = "";
				for (int i = 0; i < line.length(); i++) {
					if (username == "Username: ") {
						username = "";
					}
					username += line[i];
				}
			}break;
			case 5: {
				password = "";
				for (int i = 0; i < line.length(); i++) {
					if (password == "Password: ") {
						password = "";
					}
					password += line[i];
				}
			}break;
			case 6: {
				reg_date = "";
				for (int i = 0; i < line.length(); i++) {
					if (reg_date == "Registration Date: ") {
						reg_date = "";
					}
					reg_date += line[i];
				}
			}break;
			case 7: {
				gender = "";
				for (int i = 0; i < line.length(); i++) {
					if (gender == "Gender: ") {
						gender = "";
					}
					gender += line[i];
				}
			}break;
			case 8: {
				blood_grp = "";
				for (int i = 0; i < line.length(); i++) {
					if (blood_grp == "Blood Group: ") {
						blood_grp = "";
					}
					blood_grp += line[i];
				}
			}break;
			case 9: {
				contact_no = "";
				for (int i = 0; i < line.length(); i++) {
					if (contact_no == "Contact Number: ") {
						contact_no = "";
					}
					contact_no += line[i];
				}
			}break;
			case 10: {
				address = "";
				for (int i = 0; i < line.length(); i++) {
					if (address == "Address: ") {
						address = "";
					}
					address += line[i];
				}
			}break;
			case 11: {
				/*product_category = "";
				for (int i = 0; i < line.length(); i++) {
					if (product_category  == "Product Category: ") {
						product_category = "";
					}
					product_category += line[i];
				}*/
			}break;
			case 12: {
				/*product_category = "";
				for (int i = 0; i < line.length(); i++) {
					if (product_category == "Product Quantity:") {
						product_category = "";
					}
					product_category += line[i];
				}*/
			}break;
			case 13: {
				//cout << "Done" << endl;
				Customer_list[customer_counter - 1].set_Customer(customer_counter, fname, lname, email, username, password, reg_date, gender, blood_grp, contact_no, address);
			}break;
			default: {
				/*cout << "Customer Counter: " << customer_counter << endl;
				cout << "First Name: " << first_name << endl;
				cout << "Last Name: " << last_name << endl;
				cout << "Registration Date: " << registration_date << endl;
				cout << "Gender: " << gender << endl;
				cout << "Blood Group: " << blood_group << endl;
				cout << "Contact Number: " << contact_number << endl;
				cout << "Address: " << address << endl << endl;*/
				//Customer_list[customer_counter - 1].set_Customer(customer_counter, fname, lname, email, username, password, reg_date, gender, blood_grp, contact_no, address);

			}break;
		}
		line_counter++;
	}
	read.close();
}


void Menu::newMenu(int choice) {
	this->choice = choice;

	//retrieve info beforehand of all the customers in txt file
	//making object pointer for customers that are already in the system
	int Total_customers = Find_No_Of_Customers();
	Customer* Customer_list = new Customer[Total_customers];
	retrieve_customers(Customer_list);

	switch (choice) {
		case 1: {

			Admin a;
			a.sign_into_system(Customer_list, Total_customers);
		}break;

		case 2: {

		}break;

		case 3: {

			//Customer Mnu
			int choice = 0;

			cout << "_____________1.Register Customer_____________" << endl;
			cout << "_____________2.Sign-in Customer_____________" << endl;
			cout << "_____________3.Purchase a Product_____________" << endl;
			cout << "_____________4.Add to Cart_____________" << endl;
			cout << "_____________5.Checkout_____________" << endl;

			cin >> choice;

			switch (choice) {
				case 1: {
					Customer NewCustomer;
					NewCustomer.Register_customer(Total_customers);
				}break;
				case 2:
					Customer User;
					User.SignIn(Customer_list, Total_customers);
			}

		}break;
	}

}


