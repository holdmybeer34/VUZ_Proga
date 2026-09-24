#include <iostream>

class Animal {
protected:

    char* name;
    int* age;
    int* weight;

public:
    Animal();
    Animal(const char* n, int a, int w);
    Animal(const Animal& other);
    ~Animal();

    void info() const;
    void setWeight(int setweight);
    int getWeight() const;
};

class Predator : public Animal{
    private:

    char* prey;
    int* found;

    public:
    Predator();
    Predator(const char* n, int a, double w, const char* p, int f);
    Predator(const Predator& other);
    ~Predator();

    void info() const;
    void hunt();
};