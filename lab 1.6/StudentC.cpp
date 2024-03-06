#include "StudentC.h"
#include <iostream>
using namespace std;

string StudentC::Man::getName() const {
    return name;
}

int StudentC::Man::getAge() const {
    return age;
}

char StudentC::Man::getGender() const {
    return gender;
}

double StudentC::Man::getWeight() const {
    return weight;
}

void StudentC::Man::setName(const string& name) {
    this->name = name;
}

void StudentC::Man::setAge(int age) {
    this->age = age;
}

void StudentC::Man::setGender(char gender) {
    this->gender = gender;
}

void StudentC::Man::setWeight(double weight) {
    this->weight = weight;
}

void StudentC::Man::Init(const string& name, int age, char gender, double weight) {
    setName(name);
    setAge(age);
    setGender(gender);
    setWeight(weight);
}

void StudentC::Man::Read() {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter gender (M/F): ";
    cin >> gender;
    cout << "Enter weight: ";
    cin >> weight;
}

void StudentC::Man::Display() const {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << gender << endl;
    cout << "Weight: " << weight << endl;
}

string StudentC::Man::toString() const {
    return "Name: " + name + ", Age: " + to_string(age) + ", Gender: " + gender + ", Weight: " + to_string(weight);
}

string StudentC::getSpec() const {
    return spec;
}

void StudentC::setSpec(const string& spec) {
    this->spec = spec;
}

StudentC::Man StudentC::getMan() const {
    return man;
}

void StudentC::setMan(const Man& man) {
    this->man = man;
}

void StudentC::Init(const string& spec, const string& name, int age, char gender, double weight) {
    this->spec = spec;
    man.Init(name, age, gender, weight);
}

void StudentC::Read() {
    cout << "Enter student information:" << endl;
    man.Read();
    cout << "Enter specialty: ";
    cin >> spec;
}

void StudentC::Display() const {
    cout << "Student Info:" << endl;
    man.Display();
    cout << "Specialty: " << spec << endl;
}

string StudentC::toString() const {
    return "Student Info: " + man.toString() + ", Specialty: " + spec;
}
