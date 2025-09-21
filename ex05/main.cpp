#include <iostream>
#include "Harl.hpp"

int main()
{
	Harl h;
	h.complain("DEBUG");
	h.complain("INFO");
	h.complain("WARNING");
	h.complain("ERROR");
	h.complain("OTHER");
	return 0;
}
