#pragma once
#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
	string ctgry;
	string prod_name;
	string prod_dscrptn;
	int p_id;
	string prod_size;
	string prod_clr;
	int prod_qnty;
public:
	//constructor
	Product();
	//setter 
	void set_prod(string ctgry, string prod_name, string pro_dscrptn, int p_id, string prod_size, string prod_clr, int prod_qnty);

	//getters
	string get_ctgry();
	string get_prod_name();
	string get_prod_dscrptn();
	int get_p_id();
	string get_prod_size();
	string get_prod_clr();
	int get_prod_qnty();

	//funtionalities
	//void Input_prod();
	void input_prod();

};

