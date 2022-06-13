#pragma once
#include <iostream>

class Paper {
private:
    std::string name;
    double width;
    double height;
    double area;

public:
    Paper(double width, double height, std::string name);

    double getArea();
    std::string getName();
};
