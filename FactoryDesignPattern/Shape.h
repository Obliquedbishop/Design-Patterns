#pragma once

#include <string>

class Shape {
public:
	virtual std::string GetType() const = 0;
	virtual double GetArea() const = 0;
};