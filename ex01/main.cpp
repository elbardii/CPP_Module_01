
#include "Zombie.hpp"

int main(void)
{
	int N = 5;

	std::cout << "=== Creating a horde of " << N << " zombies ===" << std::endl;
	Zombie *horde = zombieHorde(N, "Walker");

	std::cout << std::endl;
	std::cout << "=== Making each zombie announce itself ===" << std::endl;
	for (int i = 0; i < N; i++)
		horde[i].announce();

	std::cout << std::endl;
	std::cout << "=== Deleting the horde ===" << std::endl;
	delete[] horde;

	std::cout << std::endl;
	std::cout << "=== All zombies deleted! ===" << std::endl;

	return (0);
}
