#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	// Animal a;
	Dog	dog;
	Cat	cat;

	dog.makeSound();
	cat.makeSound();

	dog.setIdea( "Dog new Idea", 0 );
	cat.setIdea( "Cat new Idea", 0 );

	dog.getIdea( 0 );
	cat.getIdea( 0 );
	
	return 0;
}
