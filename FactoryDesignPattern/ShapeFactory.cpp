#include "ShapeFactory.h"
#include "Circle.h"
#include "Rectangle.h"

Shape* ShapeFactory::CreateShape(const std::string& type) {
    if (type == "Circle") {
        return new Circle(10.0);
    }
    else if (type == "Rectangle") {
        return new Rectangle(20.0, 30.0);
    }
    return nullptr;
}
