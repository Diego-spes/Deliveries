#include "Shipping.h"

Shipping::Shipping() {
	SName = "-";
	SAddress = "-";
	SCity = "-";
	SState = "00000";
	SZipcode = "-";
	
	RName = "-";
	RAddress = "-";
	RCity = "-";
	RState = "-";
	RZipcode = "00000";
}

Shipping::Shipping(string Sname, string Saddress, string Scity, string Sstate, string Szipc, string Rname, string Raddress, string Rcity, string Rstate, string Rzipc) {
	SName = Sname;
	SAddress = Saddress;
	SCity = Scity;
	SState = Sstate;
	SZipcode = Szipc;
	
    RName = Rname;
	RAddress = Raddress;
	RCity = Rcity;
	RState = Rstate;
	RZipcode = Rzipc;



}
string Shipping::get_SName() {
	return SName;
}
string Shipping::get_SAddress(){
	return SAddress;
}


string Shipping::get_SCity() {
	return SCity;
}

string Shipping::get_SState() {
	return SState;
}

string Shipping::get_SZipcode() {
	return SZipcode;
}

double Shipping::get_CostShip() {
	return costShip;
}

string Shipping:: get_RName() {
	return RName;
}
string Shipping::get_RAddress(){
	return RAddress;
}

string Shipping::get_RCity() {
	return RCity;
}

string Shipping::get_RState() {
	return RState;
}

string Shipping::get_RZipcode() {
	return RZipcode;
}

