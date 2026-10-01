#include "Animals.hpp"
#include <iostream>
using namespace std;

int main(){
    Predator lion("Алекс", 10, 150, "Стейк", 10);
    Mammal zebra("Мартини", 10, 200, "Водоросли", 15);
    Mammal giraffe("Мелман", 13, 1000, "Травка", 50);
    Mammal hippi("Глория", 13, 1500, "Арбузик", 4);
    Mammal pinguin1("Кавасаки", 29, 50, "Рыба", 1);
    Mammal pinguin2("Каго", 16, 50, "Рыба", 1);
    Mammal pinguin3("Крико", 31, 50, "Рыба", 1);
    Mammal pinguin4("Естрипер", 35, 50, "Рыба", 1);

    cout << "Kowalski analisys..." << endl;
    cout << "\nLos penguinos helamana de mascar:" << endl;
    pinguin1.info();
    pinguin2.info();
    pinguin3.info();
    pinguin4.info();

    cout << "Alex and co: " << endl;
    lion.info();
    zebra.info();
    giraffe.info();
    hippi.info();

    cout << "Я не помню что именно требовалось, поэтому вот)" << endl;
}