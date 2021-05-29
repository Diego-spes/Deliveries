#ifndef PACKAGE
#define PACKAGE
#include "Shipping.h"
using namespace std;
class Package: public Shipping {
	private:
		int length;
		int depth;
		int width;
		double weight;
		double costPerKg = 1.5;
	
	public:
		Package();
		Package(string, string, string, string, string, string, string, string, string, string, int, int, int, double);
		
		int get_Lenght();
		int get_Depth();
		int get_Width();
		double get_Weight();
		double get_CostPerKg();
		
		double Cost() override;
	
};



#endif //PACKAGE
