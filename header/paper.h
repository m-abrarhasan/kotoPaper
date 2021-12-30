#ifndef PAPER_H
#define PAPER_H
#include <iostream>
// get_sheets ///////////////////////////

class paper {

public:
  double area;
  paper(double W, double H) { area = W * H; }
};

// Sheets        (width, height)
paper double_demy(23.00, 36.00);
paper half_demy(18.00, 23.00);
// paper art_paper(18.00, 23.00);
// paper art_paper(18.00, 23.00);

// Prints  (width, height)
paper one_4(09.00, 11.50);
paper one_8(5.75, 09.00);

double print_area(int print_size) {

  switch (print_size) {
  case 1:
    return one_4.area;
    break;
  case 2:
    return one_8.area;
    break;
  default:
    break;
  }
}
double sheet_area(int sheet_size) {

  switch (sheet_size) {
  case 1:
    return double_demy.area;
    break;
  case 2:
    return half_demy.area;
    break;
  default:
    break;
  }
}
double get_sheet(int print_size, int sheet_size, int order_size) {

  int _print_size = print_size;
  int _sheet_size = sheet_size;
  int _order_size = order_size;

  double _print_area = print_area(_print_size);
  double _sheet_area = sheet_area(_sheet_size);

  double _total_sheet = _order_size / (_sheet_area / _print_area);

  return _total_sheet;
}
double get_cost(double total_sheet, int paper_rate) {

  double _total_sheet = total_sheet;
  double _paper_rate = paper_rate;

  double _total_cost =
      _total_sheet * (_paper_rate / 500); // 500 Sheets = to 1 Ream

  return _total_cost;
}

#endif