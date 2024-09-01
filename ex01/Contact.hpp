#include <iostream>
#include <string>

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string number;
        std::string secret;

        void printColumn(const std::string& column);
    public:
        Contact(void);
        ~Contact(void);
        void setFirstName(std::string str);
        void setLastName(std::string str);
        void setNickName(std::string str);
        void setNumber(std::string str);
        void setSecret(std::string str);

        void printSummary(int index);
        void printDetails(void);
};