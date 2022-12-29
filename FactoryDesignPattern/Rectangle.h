#pragma once

#include "Shape.h"

class Rectangle : public Shape {
public:
	Rectangle(double length, double width);
	std::string GetType() const override;
	double GetArea() const override;

private:
	double length_;
	double width_;
};
