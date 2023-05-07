#include <iostream>

#include "Person.h"

using namespace std;

void PrintPerson(Person* person);

int main() {
    string first_name;
    string last_name;

    cout << "Enter first name: ";
    cin >> first_name;
    cout << "Enter last name: ";
    cin >> last_name;

    auto* person = new Person();
    person->last_name = last_name;
    person->first_name = first_name;
    PrintPerson(person);

    Person::Save(person);
    auto* person_2 = Person::Restore();
    PrintPerson(person_2);

    return 0;
}

void PrintPerson(Person* person) {
    cout << person->last_name << " " << person->first_name << endl;
}