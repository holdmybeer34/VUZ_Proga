#include "Animals.hpp"
#include <iostream>
using namespace std;

int main(){

    int choice;
    cout << "1. Вызов конструкторов/деструкторов" << endl;
    cout << "2. Вызов методов" << endl;
    cin >> choice;

    switch(choice){
        case 1:{
            Predator wolf;
            wolf.info();

            Predator bear("Медведь", 6, 500, "Рыбка", 9);
            bear.info();

            Predator newbear = bear;
            newbear.info();
            break;
        }
        case 2:{
            Predator lion("ЛИООООН", 4, 148, "Бобэр", 67);
            lion.info();
            int oldweight = lion.getWeight();
            lion.setWeight(195);
            lion.info();
            break;
        }
    }
}