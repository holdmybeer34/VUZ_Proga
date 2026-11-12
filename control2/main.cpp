#include "magazine.hpp"
#include <iostream>
#include <string>

int main(){
    Science magazine1("Энтальпия химических процессов.");
    Entertain magazine2("ХиханькиХаханьки.");

    magazine1.info();
    magazine2.info();
    std::cout << std::endl;

    std::cout << "Ну ка, прочитаем что тут у вас..." << std::endl;
    magazine1.read();
    magazine2.read();

    std::cout << "\nА сколько я вообще журналов купил там?" << std::endl;

    Magazine::getCount();

    std::cout << "Еще один возьму, но какой выбрать?" << std::endl;
    int choice;
    Magazine* magazine3 = nullptr;

    std::cout << "1. Научный" << std::endl;
    std::cout << "2. Развлекательный" << std::endl;
    std::cout << "Ваш выбор: ";
    std::cin >> choice;

    switch(choice){

        case 1:{
            magazine3 = new Science("Развиваемся, развиваемя.");
            break;
        }
        case 2:{
            magazine3 = new Entertain("Развлекаемся, развлекаемся.");
            break;
        }
        default:{
            std::cout << "Тут всего две цифры..." << std::endl;
            break;
        }
    }

    if (magazine3 != nullptr){
        magazine3->info();
        magazine3->read();
    }
}