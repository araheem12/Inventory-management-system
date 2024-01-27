#pragma once
#include<string>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


class Shopkeeper
{
private:
	string name1;
	string name2;
	int s_id;
	string username;
	string email;
	string password;
	string regis_no;
	string gender;
	string bloodgrp;
	string contactno;
	string address;


public:

	//constructor
	Shopkeeper();
	//setter
	void set_shopkeeper(string name1, string name2, int s_id, string username, string email, string password, string regis_no, string gender, string bloodgrp, string contactno, string address);
	//getters
	string get_name1();
	string get_name2();
	int get_s_id();
	string get_username();
	string get_email();
	string get_password();
	string get_regis_no();
	string get_gender();
	string get_bloodgrp();
	string get_contactno();
	string get_address();
	//functionalities
	void Input_shopkeeper();



};

