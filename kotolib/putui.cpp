#include "../header/kotolib.h"

void putui(double total_sheet, double total_cost, std::string txtpath) {

  std::ifstream tui(txtpath);
  if (tui.is_open()) {
    std::cout << tui.rdbuf();
  }
  std::cout << "|| >> Sheet Needed = " << total_sheet << "\n";
  std::cout << "|| >> Sheet Cost   = " << total_cost << "\n";

  return;
}
