#pragma once
#include <QString>
#include <vector>

class Paper
{
private:
  QString name;
  double width;
  double height;
  double area;

public:
  Paper(double width, double height, QString name, std::vector<Paper>& store);

  double getArea();
  QString getName();
};
