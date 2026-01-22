
#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");

	// Test invalid level (should do nothing)
	harl.complain("invalid");

	return (0);
}
