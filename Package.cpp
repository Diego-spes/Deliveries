#include "Package.h"

Package::Package() {
	length = 0;
	depth = 0;
	width = 0;
	weight = 0;
}

Package::Package(string Sname, string Saddress, string Scity, string Sstate, string Szipc, string Rname, string Raddress, string Rcity, string Rstate, string Rzipc,
					int Lenght, int Depth, int Width, double Weight):Shipping(Sname,  Saddress,  Scity,  Sstate,  Szipc,  Rname,  Raddress,  Rcity,  Rstate,  Rzipc) {
	length = Lenght;
	depth = Depth;
	width = Width;
	weight = Weight;
}

int Package::get_Lenght() {
	return length;
}

int Package::get_Depth() {
	return depth;
}

int Package::get_Width() {
	return width;
}

double Package::get_Weight() {
	return weight;
}

double Package::Cost() {
	double costShip=15.5;
	double cost = costShip + (weight * costPerKg);
	cout << "The cost of the shipping is: " << cost<<"$"<< endl;
	return cost;
}

