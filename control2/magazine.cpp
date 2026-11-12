#include "magazine.hpp"
#include <iostream>

int Magazine::count = 0;

Magazine::Magazine(std::string n){
    name = n;
    count++;
}

Magazine::~Magazine(){
    count--;
}

int Magazine::getCount(){
    return count;
}

Science::Science(std::string n) : Magazine(n){}

void Science::info() const{
    std::cout << "Название научного журнала: " << name << std::endl;
}

void Science::read() const{
    std::cout << "Поздравляем, вы поумнели, прочитав " << name << std::endl;
}

Entertain::Entertain(std::string n) : Magazine(n){}

void Entertain::info() const{
    std::cout << "Название развлекательного журнала: " << name << std::endl;
}

void Entertain::read() const{
    std::cout << "Поздравляем, вы повеселели, прочитав " << name << std::endl;
}