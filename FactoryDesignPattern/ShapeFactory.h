#pragma once

#include "Shape.h"

class ShapeFactory {
public:
	static Shape* CreateShape(const std::string& type);
};