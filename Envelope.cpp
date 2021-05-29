#include "Envelope.h"

Envelope::Envelope() {
	width = 0;
	length = 0;
	
}

Envelope::Envelope(string Sname, string Saddress, string Scity, string Sstate, string Szipc, string Rname, string Raddress, string Rcity, string Rstate, string Rzipc, 
					int WidthE, int LengthE):Shipping(Sname, Saddress,  Scity,  Sstate, Szipc,  Rname,  Raddress,  Rcity,  Rstate,  Rzipc) {
	width = WidthE;
	length =LengthE;
}

int Envelope::get_WidthDevelop() {
	return width;
}

int Envelope::get_HeightDevelop() {
	return length;
}

double Envelope::get_ExtraCharge() {
	return Charge;
}

double Envelope::Cost() {
	double FinalCost;
	double cost=costShip;
	if(length>25 or width>30){
		FinalCost=cost+Charge;
	

	}
	else{
		FinalCost=cost;
	    

	}
	    cout << "The cost of the shipping is: " <<FinalCost<<"$"<< endl;
		return FinalCost;

}
