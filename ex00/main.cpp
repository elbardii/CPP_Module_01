/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbardii                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 20:00:00 by elbardii          #+#    #+#             */
/*   Updated: 2026/01/20 20:00:00 by elbardii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout << "=== Creating zombie on the HEAP ===" << std::endl;
	Zombie *heapZombie = newZombie("Foo");
	heapZombie->announce();
	std::cout << "Heap zombie still exists..." << std::endl;

	std::cout << std::endl;
	std::cout << "=== Creating zombie on the STACK ===" << std::endl;
	randomChump("Bar");
	std::cout << "Stack zombie was automatically destroyed!" << std::endl;

	std::cout << std::endl;
	std::cout << "=== Manually deleting heap zombie ===" << std::endl;
	delete heapZombie;
	std::cout << "Heap zombie manually deleted." << std::endl;

	return (0);
}
