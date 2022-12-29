#include "Rectangle.h"

Rectangle::Rectangle(double length, double width)
    : length_(length), width_(width) {}

std::string Rectangle::GetType() const {
    return "Rectangle";
}

double Rectangle::GetArea() const {
    return length_ * width_;
}