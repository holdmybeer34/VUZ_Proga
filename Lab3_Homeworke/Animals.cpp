#include "Animals.hpp"
#include <cstring>
using namespace std;

Animal::Animal(){
    cout << "Пустой конструктор животного" << endl;
    name = new char[10];
    strcpy(name, "Нет имени");
    age = new int[0];
    weight = new int[0];
}

Animal::Animal(const char* n, int a, int w){
    cout << "Динамический конструктор животного" << endl;
    name = new char[strlen(n)+1];
    strcpy(name, n);
    age = new int(a);
    weight = new int(w);
}

Animal::Animal(const Animal& other) {
    cout << "Копирующий конструктор животного" << endl;
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
    cout << "Деструктор животного" << endl;
    delete[] name;
    delete age;
    delete weight;
}

Predator::Predator() : Animal() {
    cout << "Пустой конструктор хищника" << endl;
    prey = new char[10];
    strcpy(prey, "Нет имени");
    found = new int(0);
}

Predator::Predator(const char* n, int a, double w, const char* p, int f) : Animal(n, a, w) {
    cout << "Динамический конструктор хищника" << endl;
    prey = new char[strlen(p) + 1];
    strcpy(prey, p);
    found = new int(f);
}

Predator::Predator(const Predator& other) : Animal(other) {
    cout << "Копирующий конструктор хищника" << endl;
    prey = new char[strlen(other.prey) + 1];
    strcpy(prey, other.prey);
    found = new int(*other.found);
}

Predator::~Predator(){
    cout << "Деструктор хищника" << endl;
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