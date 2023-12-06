#include <iostream>
#include "menu.hpp"

void ff() {
	std::cout << "WEWEW";
}

int main() {
	MCherevko::MenuItem st = { "wqeqwrewv", ff };
	
	std::cout << st.title << std::endl;
	std::cout << (&st)->title << std::endl;
	
	(&st)->func(); // обращаемся ко 2-му полю
}
