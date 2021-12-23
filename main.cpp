#include "header/func.h"
#include "header/paper.h"
#include <fstream>
#include <iostream>

int main() {

  double rate = {0.0};
  double ordreSize = {0.0};

  do {

    // user input
    const int print_size = getui("tui/print_size.txt");
    const int sheet_size = getui("tui/sheet_size.txt");
    const int paper_rate = getui("tui/paper_rate.txt");
    const int order_size = getui("tui/order_size.txt");

    // Prints              width    height
    paper one_4(        8.50, 11.25);
    paper one_8(       23.00, 36.00);
    
    // Sheets
    paper double_demy( 23.00, 36.00);
    paper half_demy(   23.00, 18.00);
    
    // Custom 




    // output

  } while (get_enter());

  return 0;
}
