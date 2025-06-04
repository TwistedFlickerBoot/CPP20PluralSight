#include <iostream>
#include <string>

class Person
{
private:
    std::string firstName;
    std::string lastName;
    int arbitraryNumber;
public:
    Person(std::string first, std::string last, int arbitrary)
        : firstName(first), lastName(last), arbitraryNumber(arbitrary) {}
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
    Person person("Jane", "Doe", 42);
    person.setName("John", "Doe");
    std::cout << "Person's name: " << person.getName() << std::endl;
    return 0;
}