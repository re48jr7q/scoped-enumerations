#include <iostream>

int main()
{
	enum class Color
	{
		red,
		blue,
   };

	Color shirt{ Color::red };

	if (shirt == Color::red)
		std::cout << "this shirt is red.\n";
	else if (shirt == Color::blue)
		std::cout << "this shirt is blue.\n";

	return 0;
}


