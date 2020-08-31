#include <iostream>
#include <string>

using namespace std;

class interfaceFamily {
public:
    virtual string getFirstName() = 0;
    virtual void setFirstName(string firstName) = 0;
    virtual string getLastName() = 0;
    virtual void setLastName(string lastName) = 0;
    virtual int getAge() = 0;
    virtual void setAge(int age) = 0;
};

class Mother : public interfaceFamily {
public:
    Mother() = default;

    string getFirstName() override {
        return m_firstName;
    }

    void setFirstName(string firstName) override {
        m_firstName = firstName;
    }

    string getLastName() override {
        return m_lastName;
    }
    void setLastName(string lastName) override {
        m_lastName = lastName;
    }
    int getAge() override{
        return m_age;
    }
    void setAge(int age) override {
        m_age = age;
    }
    void showAll() {
        std::cout << "First name: " << m_firstName << std::endl;
        std::cout << "Last name: " << m_lastName << std::endl;
        std::cout << "Age: " << m_age << std::endl;
    }
protected:
    string m_firstName;
    string m_lastName;
    int m_age = 0;
};

class Son : public Mother {

};
int main() {
    Mother mother;
    mother.setFirstName("First Name");
    mother.setLastName("Last Name");
    mother.setAge(18);
    mother.showAll();

}