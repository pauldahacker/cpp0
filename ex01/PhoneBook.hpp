#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contactList[8];
        int index;
        int count;
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void addContact(void);
        void searchContact(void);
};
