#include <iostream>

#include "ShapeFactory.h"

int main() {
	Shape* circle = ShapeFactory::CreateShape("Circle");
	std::cout << "Type: " << circle->GetType() << std::endl;
	std::cout << "Area: " << circle->GetArea() << std::endl;

	Shape* rectangle = ShapeFactory::CreateShape("Rectangle");
	std::cout << "Type: " << rectangle->GetType() << std::endl;
	std::cout << "Area: " << rectangle->GetArea() << std::endl;

	return 0;
}