#ifndef MEMENTODEMO_PERSON_H
#define MEMENTODEMO_PERSON_H

#include <string>
#include <fstream>

using namespace std;

class Person {
public:
    string first_name;
    string last_name;

    static void Save(Person* person) {
        ofstream file;
        file.open("person.bak", ios::trunc);
        file << person->last_name << " " << person->first_name << endl;
        file.close();
    }

    static Person* Restore() {
        auto* person = new Person();
        ifstream file;
        file.open("person.bak");
        file >> person->last_name >> person->first_name;
        file.close();
        return person;
    }
};


#endif //MEMENTODEMO_PERSON_H
