// структура меню
#pragma once

namespace MCherevko {
	struct MenuItem {
		const char* const title;
		void (*func)(const MenuItem* current); // передаём текущий элемент меню	
		// масив указателей
		const MenuItem* const* children; //??

		const int children_count;
	
	};
}
