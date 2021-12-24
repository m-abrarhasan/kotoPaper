#include "header/func.h"
#include "header/get_sheet.h"
#include <fstream>
#include <iostream>

int main() {

  do {

    // user input
    const int print_size = getui("tui/print_size.txt");
    const int sheet_size = getui("tui/sheet_size.txt");
    const int paper_rate = getui("tui/paper_rate.txt");
    const int order_size = getui("tui/order_size.txt");

    double total_sheet = get_sheets(print_size, sheet_size, order_size);
    double total_cost  = get_cost(total_sheet, paper_rate);


    //std::cout << total_sheet << std::endl;
    std::cout << total_cost;
    getchar();
    clear();

    // output

  } while (get_enter());

  return 0;
}
