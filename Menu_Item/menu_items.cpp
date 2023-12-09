#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const MCherevko::MenuItem MCherevko::STUDY_SUMM = {
    "1 - Хочу научиться складывать!", MCherevko::study_summ, &MCherevko::STUDY
};
const MCherevko::MenuItem MCherevko::STUDY_SUBSTRACT = {
    "2 - Хочу научиться вычитать!", MCherevko::study_substract, &MCherevko::STUDY
};
const MCherevko::MenuItem MCherevko::STUDY_MULTIPLY = {
    "3 - Хочу научиться умножать!", MCherevko::study_multiply, &MCherevko::STUDY
};
const MCherevko::MenuItem MCherevko::STUDY_DIVIDE = {
    "4 - Хочу научиться делить!", MCherevko::study_divide, &MCherevko::STUDY
};
const MCherevko::MenuItem MCherevko::STUDY_GO_BACK = {
    "0 - Выйти в главное меню", MCherevko::study_go_back, &MCherevko::STUDY
};

namespace {
    const MCherevko::MenuItem* const study_children[] = {
        &MCherevko::STUDY_GO_BACK,
        &MCherevko::STUDY_SUMM,
        &MCherevko::STUDY_SUBSTRACT,
        &MCherevko::STUDY_MULTIPLY,
        &MCherevko::STUDY_DIVIDE
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const MCherevko::MenuItem MCherevko::STUDY = {
    "1 - Хочу учиться математике!", MCherevko::show_menu, &MCherevko::MAIN, study_children, study_size
};
const MCherevko::MenuItem MCherevko::EXIT = {
    "0 - Я лучше пойду полежу...", MCherevko::exit, &MCherevko::MAIN
};

namespace {
    const MCherevko::MenuItem* const main_children[] = {
        &MCherevko::EXIT,
        &MCherevko::STUDY
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const MCherevko::MenuItem MCherevko::MAIN = {
    nullptr, MCherevko::show_menu, nullptr, main_children, main_size
};