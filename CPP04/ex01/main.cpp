#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	{
		/* Brain Orthodox Canonical Class Form test */
		Brain a;
		Brain b( a );
		Brain c;
		c = a;

		a.setIdea( "Idea a", 10 );
		b.setIdea( "Idea b", 10 );
		c.setIdea( "Idea c", 10 );

		a.getIdea( 10 );
		b.getIdea( 10 );
		c.getIdea( 10 );

		std::cout << &a << std::endl;
		std::cout << &b << std::endl;
		std::cout << &c << std::endl;
		
	}
	std::cout << "\n------------------------------------------------------------\n\n";
	{
		/* Deep copy on Cat/Dog objects */
		Dog a;
		Dog b( a );
		Dog c;
		c = a;

		a.setIdea("Dog Idea 1", 10);
		b.setIdea("Dog Idea 2", 10);
		c.setIdea("Dog Idea 3", 10);

		a.getIdea( 10 );
		b.getIdea( 10 );
		c.getIdea( 10 );

	}
	std::cout << "\n------------------------------------------------------------\n\n";
	{
		/* Array of Animals (subject) */
		Animal *arrayAnimals[10];

		for (int i = 0; i < 10; i++) {
			if (i % 2 == 0)
				arrayAnimals[i] = new Dog();
			else
				arrayAnimals[i] = new Cat();
		}

		for (int i = 0; i < 10; i++)
			delete arrayAnimals[i];
	}
	std::cout << "\n------------------------------------------------------------\n\n";
	{
		/* Brain class test */
		Brain a;

		a.printIdeas();

		for (int i = 0; i < 100; i++) {
			if ( i % 2 == 0)
				a.setIdea("I have an idea", i);
		}

		a.printIdeas();

		a.getIdea(10);
		a.getIdea(-10); // index management
	}
	
	return 0;
}
