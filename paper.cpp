#include "paper.h"

Paper::Paper(double width, double height, std::string name)
{
    this->name = name;
    this->width = width;
    this->height = height;
    this->area = width * height;
};

double Paper::getArea()
{
    return area;
}

std::string Paper::getName()
{
    return name;
}
