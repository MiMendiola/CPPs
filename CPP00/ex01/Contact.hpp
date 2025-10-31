#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
    public:
		Contact();
        ~Contact();

        int         getId();
        std::string getFirstName();
        std::string getLastName();
        std::string getNickname();
        std::string getPhoneNumber();
        std::string getDarkestSecret();

        void        setId(int id);
        void        setFirstName(std::string _firstName);
        void        setLastName(std::string _lastName);
        void        setNickname(std::string _nickname);
        void        setPhoneNumber(std::string _phoneNumber);
        void        setDarkestSecret(std::string _darkestSecret);

    private:
        int         _id;
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
};

#endif