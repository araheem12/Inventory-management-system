#pragma once
#include<string>
#include <iostream>
#include <string>
#include <fstream>
#include "shopkeeper.h"
#include "customer.h"

#include"admin.h"
using namespace std;


class Admin
{
private:
	string user;
	string pass;
	string emai;


public:
	//constructor
	Admin();
	//setters
	void set_Username(string user);
	void set_Password(string pass);
	void set_Email(string emai);
	//getters
	string get_Username();
	string get_Password();
	string get_Email();
	//functionalities
	void sign_into_system(Customer* Customer_list, int Total_customers);
	void add_new_shopkeeper();
	void add_new_customer(int Customer_counter);
	void add_new_product();
	void edit_customer(Customer* Customer_list, int Total_customers);
	void delete_customer(Customer* Customer_list, int Total_customers);


	//destructor
	

};

