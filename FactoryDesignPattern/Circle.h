#pragma once

#include "Shape.h"

class Circle : public Shape {
public:
	Circle(double radius);
	std::string GetType() const override;
	double GetArea() const override;

private:
	double radius_;
};