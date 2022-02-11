#ifndef PAPER_H
#define PAPER_H

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
    return 0;
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
    return 0;
  }
}
double get_sheet(int print_size, int sheet_size, int order_size) {

  return order_size / (sheet_area(sheet_size) / print_area(print_size));
}
double get_cost(double total_sheet, int paper_rate) {

  return total_sheet * (paper_rate / 500); // 500 Sheets = to 1 Ream
}

#endif
