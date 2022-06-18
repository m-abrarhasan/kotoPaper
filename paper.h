#pragma once
#include <QString>
#include <iostream>

class Paper
{
private:
  QString name;
  double width;
  double height;
  double area;

public:
  Paper(double width, double height, QString name);

  double getArea();
  QString getName();
};
