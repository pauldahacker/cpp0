#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : index(0), count(0)
{
    std::cout << "Launching Paul's Phonebook" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "Exiting Paul's Phonebook" << std::endl;
}

void PhoneBook::addContact(void)
{
    Contact& current = contactList[index];
    std::string input;

    if (count == 8)
        std::cout << "Phonebook is full. Replacing oldest entry..." << std::endl;
    else
        ++count;

    std::cout << "Enter First Name: ";
    std::getline(std::cin, input);
    current.setFirstName(input);

    std::cout << "Enter Last Name: ";
    std::getline(std::cin, input);
    current.setLastName(input);

    std::cout << "Enter Nickname: ";
    std::getline(std::cin, input);
    current.setNickName(input);

    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, input);
    current.setNumber(input);

    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin, input);
    current.setSecret(input);

    std::cout << "Contact added!" << std::endl;
    index = (index + 1) % 8;
}

void PhoneBook::searchContact(void)
{
    if (count == 0)
    {
        std::cout << "Phonebook is empty." << std::endl;
        return ;
    }

    std::cout   << std::setw(10) << "Index" << "|"
                << std::setw(10) << "First Name" << "|"
                << std::setw(10) << "Last Name" << "|"
                << std::setw(10) << "Nickname" << "|" << std::endl;
    
    int i = -1;
    while (++i < count)
        contactList[i].printSummary(i);
    std::cout << "Enter index to show more details: ";
    std::string buf;
    std::cin >> buf;
    std::cin.ignore();

    if (buf.length() == 1 && std::isdigit(buf[0]))
    {
        int id = buf[0] - '0';
        if (id >= 0 && id < count)
            contactList[id].printDetails();
        else
            std::cout << "Index is not in range." << std::endl;
    }
    else
        std::cout << "Invalid input." << std::endl;
}