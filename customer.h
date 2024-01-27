#pragma once
#include<string>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


class Customer
{
private:
	string fname;
	string lname;
	string username;
	string email;
	string password;
	string reg_date;
	string gender;
	string blood_grp;
	string contact_no;
	string address;


public:

	static int c_id;
	//constructor
	Customer() ;
	//setter
	void set_Customer(int c_id, string fname, string lname, string email, string username, string password, string reg_date, string gender, string blood_grp, string contact_no, string address);
	void set_fname(string fname);
	void set_lname(string lame);
	void set_email(string email);
	void set_username(string username);
	void set_password(string password);
	void set_reg_date(string reg_date);
	void set_gender(string gender);
	void set_blood_grp(string blood_grp);
	void set_contact_no(string contct_no);
	void set_address(string address);
	//getters
	int get_c_id();
	string get_fname();
	string get_lname();
	string get_email();
	string get_username();
	string get_password();
	string get_reg_date();
	string get_gender();
	string get_blood_grp();
	string get_contact_no();
	string get_address();
	//functionalities
	void Register_customer(int customer_number);
	void SignIn(Customer* Customer_list, int Total_customers);

	
};

