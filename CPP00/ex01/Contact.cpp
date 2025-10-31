#include "Contact.hpp"

Contact::Contact()
{
    return ;
};

Contact::~Contact()
{
    return ;
};

int Contact::getId()
{
    return this->_id;
};

std::string Contact::getFirstName()
{
    return this->_firstName;
};

std::string Contact::getLastName()
{
    return this->_lastName;
};

std::string Contact::getNickname()
{
    return this->_nickname;
};

std::string Contact::getPhoneNumber()
{
    return this->_phoneNumber;
};

std::string Contact::getDarkestSecret()
{
    return this->_darkestSecret;
};

void        Contact::setId(int id)
{
    this->_id = id;
};

void        Contact::setFirstName(std::string firstName)
{
    this->_firstName = firstName;
};

void        Contact::setLastName(std::string lastName)
{
    this->_lastName = lastName;
};

void        Contact::setNickname(std::string nickname)
{
    this->_nickname = nickname;
};

void        Contact::setPhoneNumber(std::string phoneNumber)
{
    this->_phoneNumber = phoneNumber;
};

void        Contact::setDarkestSecret(std::string darkestSecret)
{
    this->_darkestSecret = darkestSecret;
};
