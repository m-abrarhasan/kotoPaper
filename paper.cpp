#include "paper.h"

Paper::Paper(double width, double height, QString name)
{
  this->name = name;
  this->width = width;
  this->height = height;
  this->area = width * height;
};

double
Paper::getArea()
{
  return area;
}

QString
Paper::getName()
{
  return name;
}
