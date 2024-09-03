#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook   phonebook;
    std::string input;

    while (1)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, input);
        if (std::cin.eof() || input == "EXIT")
            break ;
        else if (input == "SEARCH")
            phonebook.searchContact();
        else if (input == "ADD")
            phonebook.addContact();
        else
            std::cout << "Invalid Command, try again." << std::endl;
    }
    return (EXIT_SUCCESS);
}