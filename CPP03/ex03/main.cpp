#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int	main( void ) {
	{
		/* Constructor & destructor testing */
		DiamondTrap a;
		DiamondTrap b( "Pepe" );
		DiamondTrap c( a );
		DiamondTrap d;
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
		/* Repair and takeDamage */
		DiamondTrap a( "Pepe" );

		// shared methods
		a.takeDamage(5);
		a.beRepaired(5);

		for(int i = 0; i < 15; i++) {
			std::cout << i + 1 << ". ";
			a.takeDamage(10);
		}
		a.beRepaired(5);

	}
	std::cout << "\n------------------------------------------------------------\n\n";
	{
		/* whoAmI, highFiveGuys & attack methods */
		DiamondTrap a;

		a.whoAmI();

		a.highFivesGuys();
		a.attack("Pedro");

		a.takeDamage(100);

		a.highFivesGuys();
		a.attack("Pedro");

	}

	return 0;
}
