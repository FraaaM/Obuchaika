#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>


void MCherevko::show_menu(const MenuItem* current) {
    std::cout << "Обучайка приветствует тебя!" << std::endl;
    for (int i = 1; i < current->children_count; i++) {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Обучайка  > ";
}


void MCherevko::exit(const MenuItem* current) {
    std::cout << "хороший выбор";
    std::exit(0);
}

void MCherevko::study_go_back(const MenuItem* current) {

}

void MCherevko::study_substract(const MenuItem* current) {

}
void MCherevko::study_summ(const MenuItem* current) {

}
void MCherevko::study_multiply(const MenuItem* current) {

}
void MCherevko::study_divide(const MenuItem* current) {

}
