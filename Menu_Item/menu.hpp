#pragma once

namespace MCherevko {
	struct MenuItem {
		const char* const title;
		void (*func)(); // ������� ������� ������� ����	
	};
}
