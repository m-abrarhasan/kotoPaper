#ifndef PAPER_H
#define PAPER_H
#include <iostream>
// get_sheets ///////////////////////////

class paper {

    public:
	double area; 
	paper( double W, double H) { 
	area  = W*H;
	}
};

// Sheets (width, height)
paper double_demy(23.00, 36.00);
paper half_demy(23.00, 18.00);

// Prints 
paper one_4(8.50, 11.25);
paper one_8(23.00, 36.00);
// Custom 


double print_area(int print_size) {

        int _print_size = print_size;
        double _area;

	if(_print_size == 1) _area = one_4.area;
	if(_print_size == 2) _area = one_8.area;
	return _area;
}
double sheet_area(int sheet_size) {

        int _sheet_size = sheet_size;
        double _area;

	if(_sheet_size == 1) _area = double_demy.area;
	if(_sheet_size == 2) _area = half_demy.area;
	return _area;
}
double get_sheet(int print_size, int sheet_size, int order_size) {

    int _print_size = print_size;
    int _sheet_size = sheet_size;
    int _order_size = order_size;

    double _print_area = print_area(_print_size);
    double _sheet_area = sheet_area(_sheet_size);
    
    double _total_sheet = _order_size/(_sheet_area/_print_area);

       return _total_sheet;
}
double get_cost(double total_sheet, int paper_rate) {

	double _total_sheet = total_sheet;
	double _paper_rate = paper_rate;

	double _total_cost  = _total_sheet*(_paper_rate/500); // 500 Sheets = to 1 Ream

	return _total_cost;
}

#endif
