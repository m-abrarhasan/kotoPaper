#include "kotolib.h"
#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::vector;

int main()
{
  // media_sizes
  paper double_demy(23.00, 36.00, "Double Demy\t[ 23x36 ]");
  paper half_demy(18.00, 23.00, "Half Demy\t[ 18x23 ]");

  // print_sizes
  paper one_4(09.00, 11.50, "One Four\t[ 9.00 x 11.5 ]");
  paper one_8(5.75, 09.00, "One Eight\t[ 5.75 x 9.00 ]");

  vector<paper> print_sizes = {one_4, one_8};
  vector<paper> media_sizes = {double_demy, half_demy};

  // do
  // {

  // user input
  char border = '=';
  clear();
  const int op_print = getOption(print_sizes, border, "Print Size");
  // clear();
  // const int op_media = getOption(media_sizes, border, "Sheet Size");

  // const int paper_rate = getui_num("tui/paper_rate.txt"); // Per Ream
  // const int order_size = getui_num("tui/order_size.txt");

  // calculation
  // double total_sheet = get_sheet(job_size, sheet_size, order_size);
  // double total_cost = get_cost(total_sheet, paper_rate);

  // output
  // putui(total_sheet, total_cost, "tui/total.txt");

  // } while (get_enter("press enter to continue..... "));

  return 0;
}
