// Person.h
#pragma once
#include <string>
#include <iostream>

using namespace std;
class person {
    public:
    person();
    person(float newWeight);

    ~person();

    float operator + (const person& otherperson);

    private:
    float mWeight;
    string mFirstname;
    int mAge;

    operator int();

};

#pragma once
#include <string>
#include <iostream>

using namespace std;

class Person {
public:
    Person(string name, float newWeight) : firstName(name), weight(newWeight) {}
    float operator+(const Person& otherPerson) {
        return weight + otherPerson.weight;
    }
    bool operator==(const Person& otherPerson) const {
        return firstName == otherPerson.firstName;
    }
    bool operator>(const Person& otherPerson) const {
        return weight > otherPerson.weight;
    }
    float getWeight() const { return weight; }

private:
    string firstName;
    float weight;
};