/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbardii                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 21:28:00 by elbardii          #+#    #+#             */
/*   Updated: 2026/01/20 21:28:00 by elbardii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
