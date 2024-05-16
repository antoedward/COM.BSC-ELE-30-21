#include "Rectangle.h"

Rectangle::Rectangle() : length(0), width(0) {}

Rectangle::Rectangle(float length, float width) : length(length), width(width) {}

Rectangle::~Rectangle() {}

void Rectangle::setLength(float length)
{
    length = length;
}

void Rectangle::setWidth(float width) 
{
    width = width;
}

float Rectangle::getLength() const {
    return length;
}

float Rectangle::getWidth() const {
    return width;
}

float Rectangle::calculateArea() const {
    return length * width;
}


