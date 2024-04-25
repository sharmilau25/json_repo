/*

*/
#include <iostream>
using namespace std;
class Person
{
private:
    string name, city;
    int age;

public:
    Person()
    {
        this->name = "John Doe";
        this->age = 0;
        this->city = "City";
    }
    Person(string name, int age, string city)
    {
        this->name = name;
        this->age = age;
        this->city = city;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setCity(string city)
    {
        this->city = city;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getCity()
    {
        return city;
    }
    void display()
    {
        cout << "Name=" << name << endl;
        cout << "Age=" << age << endl;
        cout << "City=" << city << endl;
    }
};
int main()
{
    Person person1;
    cout<<"************Output using getter and setter************\n";
    person1.setName("Sanika");
    person1.setAge(25);
    person1.setCity("Nagpur");
    cout << person1.getName() << " is " << person1.getAge() << " years old.\n";
    cout<<"************Output using parametrized constructor************\n";
    Person person2("Prajakta", 20, "Mumbai");
    person2.display();
    return 0;
}