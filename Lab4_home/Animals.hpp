#include <iostream>

class Animal {
    public:
        Animal();
        Animal(const char* name, int age, int weight);
        Animal(const Animal& other);
        ~Animal();

    void info() const;
    void setWeight(int setweight);
    int getWeight() const;

    protected:
        char* name;
        int* age;
        int* weight;
};

class Predator : public Animal{

    public:
        Predator();
        Predator(const char* n, int a, double w, const char* p, int f);
        Predator(const Predator& other);
        ~Predator();

    void info() const;
    void hunt();

    private:
        char* prey;
        int* found;
};

class Mammal : public Animal{
    public:
        Mammal();
        Mammal(const char* n, int a, double w, const char* f, double fv);
        Mammal(const Mammal& other);
        ~Mammal();
    
    void info() const;
    void searching();

    private:
        char* food;
        double* food_volume;
};