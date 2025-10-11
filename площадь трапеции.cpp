#include <iostream>
float main()
{
	float a, b, h;
	float s;
	std::cout << "The bases of the trapezoid equal: "; //osnovaniya trapetsii ravni
	std::cin >> a >> b;
	std::cout << "The height of the trapezoid equals: "; //visota trapetsii ravna
	std::cin >> h;
	s = (a + b) / 2 * h;
	std::cout << "The area of the trapezoid equals " << s << std::endl; //plochad trapetsii ravna
	return 0;
}