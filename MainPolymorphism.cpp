#include "Shipping.cpp"
#include "Envelope.cpp"
#include "Package.cpp"
#include <vector>
#include <iostream>
using namespace std;

int main() {
	vector < Shipping* > shippers;
	shippers.push_back(new Envelope("Javier Rojas", "227 La Moneda", "Queretaro", "Qro", "76050", 
									"Giovanna di valti", "4269 salto del agua", "Queretaro", "Qro", "74568", 37, 20));
	shippers.push_back(new Package("Felix Javier", "Los olvera 46", "Queretaro", "Qro", "19763", 
									"Maria", "Arboledas 249", "Queretaro", "Qro", "75831", 10, 35, 80, 15));
	double Finaltotal = 0;
	
	vector < Shipping* > :: const_iterator i;
	for (i = shippers.begin(); i != shippers.end(); ++i) {
		cout << "The Sender" << endl;
		cout << "The Sender's 'Name is: " << (*i) -> get_SName() << endl;
		cout << "The Sender's Address is: " << (*i) -> get_SAddress() << endl;
		cout << "The Sender's City is: " << (*i) -> get_SCity() << endl;
		cout << "The Sender's State is: " << (*i) -> get_SState() << endl;
		cout << "The Sender's ZipCode is: " << (*i) -> get_SZipcode() << endl;
		cout << endl;
		
		cout << "The Adressee" << endl;
		cout << "The Adressee's 'Name is:" << (*i) -> get_RName() << endl;
		cout << "The Adressee's Address is: " << (*i) -> get_RAddress() << endl;
		cout << "The Adressee's City is: " << (*i) -> get_RCity() << endl;
		cout << "The Adressee's State is: " << (*i) -> get_RState() << endl;
		cout << "The Adressee's ZipCode is: " << (*i) -> get_RZipcode() << endl;
		cout << endl;
		
		double cost = (*i) -> Cost();
		cout << endl;
		cout << endl;
		
		Finaltotal = Finaltotal + cost;
	}
	cout << "The total for all the shipments is: " << Finaltotal<<"$" << endl;
	
	return 0;
}
