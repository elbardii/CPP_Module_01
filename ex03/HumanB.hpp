/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bard <iel-bard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 01:00:00 by iel-bard          #+#    #+#             */
/*   Updated: 2026/01/22 01:00:00 by iel-bard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon*		_weapon;

	public:
		HumanB(std::string name);
		~HumanB();

		void	attack() const;
		void	setWeapon(Weapon& weapon);
};

#endif
