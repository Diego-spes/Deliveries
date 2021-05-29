#ifndef SHIPPING
#define SHIPPING
#include <iostream>
using namespace std;

class Shipping {
	protected: 
		string SName;
		string SAddress;
		string SCity;
		string SState;
		string SZipcode;
		
		double costShip = 15.5;
		
		string RName;
		string RAddress;
		string RCity;
		string RState;
		string RZipcode;
		
	public: 
		Shipping();
		Shipping(string, string, string, string, string, string, string, string, string, string);
		
		string get_SName();
		string get_SAddress();
		string get_SCity();
		string get_SState();
		string get_SZipcode();
		
		double get_CostShip();
		
		string get_RName();
		string get_RAddress();
		string get_RCity();
		string get_RState();
		string get_RZipcode();
		
		virtual double Cost() = 0;
		
};



