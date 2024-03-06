// StudentC.h

#pragma once

#include <string>
using namespace std;

class StudentC {
private:
    string spec;

    class Man {
    private:
        string name;
        int age;
        char gender;
        double weight;

    public:
        string getName() const;
        int getAge() const;
        char getGender() const;
        double getWeight() const;

        void setName(const string& name);
        void setAge(int age);
        void setGender(char gender);
        void setWeight(double weight);

        void Init(const string& name, int age, char gender, double weight);
        void Read();
        void Display() const;
        string toString() const;
    };

    Man man;

public:
    string getSpec() const;
    void setSpec(const string& spec);

    Man getMan() const;
    void setMan(const Man& man);

    void Init(const string& spec, const string& name, int age, char gender, double weight);
    void Read();
    void Display() const;
    string toString() const;
};