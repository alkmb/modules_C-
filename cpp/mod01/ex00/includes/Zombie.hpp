/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmb <kmb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:06:28 by kmb               #+#    #+#             */
/*   Updated: 2024/02/28 20:59:20 by kmb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

struct Zombie
{
	std::string name;

	Zombie() { }
	Zombie(std::string name) : name(name) { }

	void announce(void)
	{
		std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	}
};

void	deleteZombie(Zombie* zombie);
void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
