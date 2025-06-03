#include <iostream>
#include <string>

class Person
{
private:
    std::string firstName;
    std::string lastName;
    int arbitraryNumber;
public:
    std::string getName();
    void setName(const std::string& first, const std::string& last) {
        firstName = first;
        lastName = last;
    }
};

std::string Person::getName()
{
    return firstName + " " + lastName;
}

int main()
{
    Person person;
    person.setName("John", "Doe");
    std::cout << "Person's name: " << person.getName() << std::endl;
    return 0;
}