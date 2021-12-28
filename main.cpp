#include "header/func.h"
#include "header/paper.h"
#include <fstream>
#include <iostream>

int main() {

  do {

    // user input
    const int print_size = getui("tui/print_size.txt");
    // check for custom

    const int sheet_size = getui("tui/sheet_size.txt");
    // check for custom

    const int paper_rate = getui("tui/paper_rate.txt"); // Per Ream
    const int order_size = getui("tui/order_size.txt");

    // calculation
    double total_sheet = get_sheet(print_size, sheet_size, order_size);
    double total_cost = get_cost(total_sheet, paper_rate);

    // output
    putui(total_sheet, total_cost, "tui/total.txt");

  } while (get_enter());

  return 0;
}