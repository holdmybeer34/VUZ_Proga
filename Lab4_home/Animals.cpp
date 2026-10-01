#include "Animals.hpp"
#include <cstring>
using namespace std;

Animal::Animal(){
    name = new char[10];
    strcpy(name, "Нет имени");
    age = new int[0];
    weight = new int[0];
}

Animal::Animal(const char* n, int a, int w){
    name = new char[strlen(n)+1];
    strcpy(name, n);
    age = new int(a);
    weight = new int(w);
}

Animal::Animal(const Animal& other) {
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);
    age = new int(*other.age);
    weight = new int(*other.weight);
}

void Animal::info() const {
    cout << "Имя: " << name << " \nВозраст: " << *age << " лет" << " \nВес: " << *weight << " кг" << endl;
}

void Animal::setWeight(int setweight) {
    *weight = setweight;
}

int Animal::getWeight() const {
    return *weight;
}

Animal::~Animal(){
    delete[] name;
    delete age;
    delete weight;
}

Predator::Predator() : Animal() {
    prey = new char[10];
    strcpy(prey, "Нет имени");
    found = new int(0);
}

Predator::Predator(const char* n, int a, double w, const char* p, int f) : Animal(n, a, w) {
    prey = new char[strlen(p) + 1];
    strcpy(prey, p);
    found = new int(f);
}

Predator::Predator(const Predator& other) : Animal(other) {
    prey = new char[strlen(other.prey) + 1];
    strcpy(prey, other.prey);
    found = new int(*other.found);
}

Predator::~Predator(){
    delete[] prey;
    delete found;
}

void Predator::info() const{
    cout << "Хищник: " << endl;
    Animal::info();
    cout << "\nПоймал " << *found << " " << prey << " и плотно пообедал" << endl;
    cout << endl;
}

void Predator::hunt(){
    (*found)++;
    cout << name << " охотится на " << prey << ". Пока поймал " << *found << endl;
}

Mammal::Mammal(){
    food = new char[10];
    strcpy(food, "Нет имени");
    food_volume = new double(0);
}

Mammal::Mammal(const char* n, int a, double w, const char* f, double fv) : Animal(n, a, w) {
    food = new char[strlen(f) + 1];
    strcpy(food, f);
    food_volume = new double(fv);
}

Mammal::Mammal(const Mammal& other) : Animal(other) {
    food = new char[strlen(other.food) + 1];
    strcpy(food, other.food);
    food_volume = new double(*other.food_volume);
}

Mammal::~Mammal(){
    delete[] food;
    delete food_volume;
}

void Mammal::info() const{
    cout << "Млекопитающее: " << endl;
    Animal::info();
    cout << "\nПокушал " << *food_volume << "кг " << food << " и плотно пообедал" << endl;
    cout << endl;
}

void Mammal::searching(){
    (*food_volume)++;
    cout << name << " крадется и ищет " << *food << ". " << "Нашел он " << *food_volume << " кг" << endl;
    cout << "И молодец" << endl; 
}