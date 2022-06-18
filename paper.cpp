#include "paper.h"

Paper::Paper(double width, double height, QString name, std::vector<Paper>& store)
{
  this->name = name;
  this->width = width;
  this->height = height;
  this->area = width * height;
  store.push_back(*this);
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
