#pragma once
#include "shopkeeper.h"
#include<string>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


Shopkeeper::Shopkeeper() {



}
// setter

void Shopkeeper::set_shopkeeper(string name1, string name2, int s_id, string username, string email, string password, string regis_no, string gender, string bloodgrp, string contactno, string address)
{
	this->name1 = name1;
	this->name2 = name2;
	this->s_id = s_id;
	this->username = username;
	this->email = email;
	this->password = password;
	this->regis_no = regis_no;
	this->gender = gender;
	this->bloodgrp = bloodgrp;
	this->contactno = contactno;
	this->address = address;
}
// getters
string Shopkeeper::get_name1() {
	return name1;

}

string Shopkeeper::get_name2() {
	return name2;

}
int Shopkeeper::get_s_id() {
	return s_id;

}
string Shopkeeper::get_username() {
	return username;

}
string Shopkeeper::get_email() {
	return email;

}
string Shopkeeper::get_password() {
	return password;

}
string Shopkeeper::get_regis_no() {
	return regis_no;

}
string Shopkeeper::get_gender() {
	return gender;

}
string Shopkeeper::get_bloodgrp() {
	return bloodgrp;

}
string Shopkeeper::get_contactno() {
	return contactno;

}

string Shopkeeper::get_address() {
	return address;

}


void Shopkeeper::Input_shopkeeper() {

	cout << "Enter First name: " << endl;
	cin >> name1;
	cout << "Enter Second name: " << endl;
	cin >> name2;
	cout << "Enter username: " << endl;
	cin >> username;
	cout << "Enter email: " << endl;
	cin >> email;
	cout << "Enter password: " << endl;
	cin >> password;
	cout << "Enter registration no: " << endl;
	cin >> regis_no;
	cout << "Enter gender: " << endl;
	cin >> gender;
	cout << "Enter blood group: " << endl;
	cin >> bloodgrp;
	cout << "Enter contact no: " << endl;
	cin >> contactno;
	cout << "Enter address: " << endl;
	cin >> address;



	//object to write in file
	fstream shpkpr;
	//openning file in append mode
	shpkpr.open("shopkeeper.txt", ios::app);
	//cin.ignore(numeric_limits<streamsize>::max(), '\n');
	//object of shopkeeper
	Shopkeeper obj1;
	string nameo = name1;
	string nameo2 = name2;
	string usernameo = username;
	string regno = regis_no;
	string emailo = email;
	string gendero = gender;
	string bloodgrpo = bloodgrp;
	string contactnoo = contactno;
	string addresso = address;
	int s_ido = s_id;
	obj1.name1 = nameo;
	obj1.name2 = nameo2;
	obj1.username = usernameo;
	obj1.regis_no = regno;
	obj1.email = emailo;
	obj1.gender = gendero;
	obj1.bloodgrp = bloodgrpo;
	obj1.contactno = contactnoo;
	obj1.address = addresso;
	++obj1.s_id;

	// Writing the object's data in file
	shpkpr.write((char*)&obj1, sizeof(obj1)) << endl;
	shpkpr.close();

}



