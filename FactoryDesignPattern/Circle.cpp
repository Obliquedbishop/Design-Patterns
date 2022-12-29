#include "Circle.h"

Circle::Circle(double radius) : radius_(radius) {}

std::string Circle::GetType() const {
	return "Circle";
}

double Circle::GetArea() const {
	return 3.14 * radius_ * radius_;
}