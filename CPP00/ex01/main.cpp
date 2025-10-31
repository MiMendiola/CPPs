#include <iostream>
#include <iomanip>
#include <sstream>
#include <limits>   // para std::numeric_limits

#include "Contact.hpp"
#include "PhoneBook.hpp"


std::string Actions[] = {"ADD", "SEARCH", "EXIT"};

void	stringToUpper(std::string &accion)
{
	for (size_t i = 0; i < accion.length(); i++) {
        accion[i] = std::toupper(accion[i]);
    }
}

std::string	stringFormat(const std::string &input)
{
	std::string text = input;

	if (text.length() > 10) {
        text = text.substr(0, 9) + ".";
    }

	// std::setw(10) devuelve -> manipulador de flujo
	std::ostringstream oss;
	
	oss << std::setw(10) << std::right << text << "|";
	return oss.str();
}

std::string	numberFormat(int number)
{
	std::ostringstream oss;
	
	oss << std::setw(10) << std::right << number << "|";
	return oss.str();
}

bool safeInput(const std::string &message, std::string &out)
{
    std::cout << message;
    std::cout.flush();

    if (!std::getline(std::cin, out)) {
        if (std::cin.eof()) {
            return false;
        }
    }
    return true;
}

int main()
{
	int i = 0;
	std::string accion;

    std::cout << "Write down the action to do (ADD, SEARCH, EXIT): ";
    std::getline(std::cin, accion);
	if (std::cin.eof()) {
		return 1;
	}
	stringToUpper(accion);

	PhoneBook PhoneBook;

	while (accion != Actions[2])
	{
		if (accion == Actions[0])
		{
			std::string temp;

			PhoneBook.Contacts[i].setId(i + 1);

			if (!safeInput("Write the name: ", temp))
				break;
			PhoneBook.Contacts[i].setFirstName(temp);

			if (!safeInput("Write the last name: ", temp))
				break;
			PhoneBook.Contacts[i].setLastName(temp);

			if (!safeInput("Write the nickname: ", temp))
				break;
			PhoneBook.Contacts[i].setNickname(temp);

			if (!safeInput("Write the phone number: ", temp))
				break;
			PhoneBook.Contacts[i].setPhoneNumber(temp);

			if (!safeInput("Write the darkest secret: ", temp))
				break;
			PhoneBook.Contacts[i].setDarkestSecret(temp);
			
			i = (i + 1) % 8;
		}
		else if (accion == Actions[1])
		{
			int idContact = 0;
			std::string idContactStr;

			if (!safeInput("Write the id of the contact you want (1-8): ", idContactStr))
    			break;

			std::stringstream ss(idContactStr);
			ss >> idContact;

			if (idContact >= 1 && idContact <= 8 && !PhoneBook.Contacts[idContact - 1].getFirstName().empty())
			{
				std::cout	<< stringFormat("INDEX")
							<< stringFormat("NAME")
							<< stringFormat("LAST NAME")
							<< stringFormat("NICKNAME")
							<< "\n";
				std::cout	<< numberFormat(PhoneBook.Contacts[idContact - 1].getId())
							<< stringFormat(PhoneBook.Contacts[idContact - 1].getFirstName())
							<< stringFormat(PhoneBook.Contacts[idContact - 1].getLastName())
							<< stringFormat(PhoneBook.Contacts[idContact - 1].getNickname())
							<< "\n";
			}
			else
				std::cout << "Invalid id or empty contact." << std::endl;
		}

		if (!safeInput("Write down the action to do (ADD, SEARCH, EXIT): ", accion))
			break;
		stringToUpper(accion);
	}
	
	return 0;
}
