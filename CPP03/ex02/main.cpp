#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void ) {
	{
		/* Constructor & destructor testing */
		FragTrap a;
		FragTrap b( "Pepe" );
		FragTrap c( a );
		FragTrap d;
		d = b;

		std::cout << a.getName() << ": HIT: " << a.getHit() << ", ENERGY: " << a.getEnergy() << ", ATTACK: " << a.getAttack() << std::endl;
		std::cout << b.getName() << ": HIT: " << b.getHit() << ", ENERGY: " << b.getEnergy() << ", ATTACK: " << b.getAttack() << std::endl;
		std::cout << c.getName() << ": HIT: " << c.getHit() << ", ENERGY: " << c.getEnergy() << ", ATTACK: " << c.getAttack() << std::endl;
		std::cout << d.getName() << ": HIT: " << d.getHit() << ", ENERGY: " << d.getEnergy() << ", ATTACK: " << d.getAttack() << std::endl;

		a.attack("Juan");

		std::cout << &a << std::endl;
		std::cout << &b << std::endl;
		std::cout << &c << std::endl;
		std::cout << &d << std::endl;

		ClapTrap aa;

		std::cout << aa.getName() << ": HIT: " << aa.getHit() << ", ENERGY: " << aa.getEnergy() << ", ATTACK: " << aa.getAttack() << std::endl;
		aa.attack("Juan");

	}
	std::cout << "\n------------------------------------------------------------\n\n";
	{
		/* Attack, Repair and take damage */
		FragTrap a( "Pepe" );
		ClapTrap b( "Pepe" );

		// different messages
		a.attack("Juan");
		b.attack("Juan");

		// shared methods
		a.takeDamage(5);
		b.takeDamage(5);

		a.beRepaired(5);
		b.beRepaired(5);

	}
	std::cout << "\n------------------------------------------------------------\n\n";
	{
		/* highFiveGuys method */
		FragTrap a( "Pepe" );

		a.highFivesGuys();

		a.takeDamage(100);

		a.highFivesGuys();

	}

	return 0;
}
