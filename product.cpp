#include "product.h"
#include<string>
#include <iostream>
#include <string>
#include <fstream>



//constructor
Product::Product() {

	string ctgry = " ";
	string prod_name = " ";
	string prod_dscrptn = " ";
	int p_id = 0;
	string prod_size = " ";
	string prod_clr = " ";
	int prod_qnty = 0;
}


// setter
void Product::set_prod(string ctgry, string prod_name, string prod_dscrptn, int p_id, string prod_size, string prod_clr, int prod_qnty) {

	this->ctgry = ctgry;
	this->prod_name = prod_name;
	this->prod_dscrptn = prod_dscrptn;
	this->p_id = p_id;
	this->prod_size = prod_size;
	this->prod_clr = prod_clr;
	this->prod_qnty = prod_qnty;

}
//getter
string Product::get_ctgry() {
	return ctgry;

};
string Product::get_prod_name() {
	return prod_name;
};
string Product::get_prod_dscrptn() {
	return prod_dscrptn;
};
int Product::get_p_id() {
	return p_id;
};
string Product::get_prod_size() {
	return prod_size;
};
string Product::get_prod_clr() {
	return prod_clr;
};
int Product::get_prod_qnty() {
	return prod_qnty;
};


void Product::input_prod() {

	ofstream write;
	write.open("product.txt", ios::app);
	if (write) {

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Enter the category of the Product" << endl;
		getline(cin, ctgry);
		cout << "Enter product name" << endl;
		getline(cin, prod_name);
		cout << "Enter product description" << endl;
		getline(cin, prod_dscrptn);
		cout << "Enter Size of the product(S/M/L)" << endl;
		getline(cin, prod_size);
		cout << "Enter product color" << endl;
		getline(cin, prod_clr);
		cout << "Enter product quantity" << endl;
		cin >> prod_qnty;
		while (prod_qnty == 0) {
			cout << "PRODUCT OUT OF STOCK" << endl;
			break;
		}

	}

	write << "PRODUCT DETAIL" << endl;
	write << "Category: " << ctgry << endl;
	write << "Name: " << prod_name << endl;
	write << "Description: " << prod_dscrptn << endl;
	write << "size: " << prod_size << endl;
	write << "color: " << prod_clr << endl;
	while (prod_qnty > 0) {
		write << "quantity: " << prod_qnty << endl;
		break;
	}
	while (prod_qnty == 0) {
		write << "quantity: OUT OF STOCK" << prod_qnty << endl;
		break;
	}
	write.close();


}



