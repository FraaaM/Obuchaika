#include <clocale>
#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"

int main() {
    std::setlocale(LC_ALL, "");

    MCherevko::MenuItem study_summ = { "1 - Хочу научиться складывать!", MCherevko::study_summ };
    MCherevko::MenuItem study_substract = { "2 - Хочу научиться вычитать!", MCherevko::study_substract };
    MCherevko::MenuItem study_multiply = { "3 - Хочу научиться умножать!", MCherevko::study_multiply };
    MCherevko::MenuItem study_divide = { "4 - Хочу научиться делить!", MCherevko::study_divide };
    MCherevko::MenuItem study_go_back = { "0 - Выйти в главное меню", MCherevko::study_go_back };


    MCherevko::MenuItem* study_children[] = {
        &study_go_back,
        &study_summ,
        &study_substract,
        &study_multiply,
        &study_divide
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);


    MCherevko::MenuItem study = { "1 - Хочу учиться математике!", MCherevko::show_menu, study_children, study_size };
    MCherevko::MenuItem exit = { "0 - Я лучше пойду в армию...", MCherevko::exit };

    MCherevko::MenuItem* main_children[] = { &exit, &study };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);

    MCherevko::MenuItem main = { nullptr, MCherevko::show_menu, main_children, main_size };

    main.func(&main);
    int user_input;
    do {
        
        std::cin >> user_input;
        std::cout << std::endl;

        main.children[user_input]->func(main.children[user_input]);
    } while (true);

    return 0;
}