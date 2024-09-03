#include "Contact.hpp"

void Contact::printColumn(const std::string& column)
{
    if (column.length() > 10)
        std::cout << column.substr(0, 9) << ".";
    else
        std::cout << std::setw(10) << column;
    std::cout << "|";
}

void Contact::setFirstName(std::string str)
{
    this->firstName = str;
}

void Contact::setLastName(std::string str)
{
    this->lastName = str;
}

void Contact::setNickName(std::string str)
{
    this->nickName = str;
}

void Contact::setNumber(std::string str)
{
    this->number = str;
}

void Contact::setSecret(std::string str)
{
    this->secret = str;
}

void Contact::printSummary(int index)
{
    std::cout << std::setw(10) << index << "|";
    printColumn(firstName);
    printColumn(lastName);
    printColumn(nickName);
    std::cout << std::endl;
}

void Contact::printDetails(void)
{
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickName << std::endl;
    std::cout << "Phone Number: " << number << std::endl;
    std::cout << "Darkest Secret: " << secret << std::endl;
}