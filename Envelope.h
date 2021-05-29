#ifndef ENVELOPE
#define ENVELOPE
#include "Shipping.h"
using namespace std;
class Envelope: public Shipping {
	private:
		int width;
		int length;
		double Charge = 10;
		
		

	public: 
		Envelope();
		Envelope(string, string, string, string, string, string, string, string, string, string, int, int);
		
		int get_WidthDevelop();
		int get_HeightDevelop();
		double get_ExtraCharge();
		
		double Cost() override;
		
};


#endif //DEVELOP
