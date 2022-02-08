#include "kotolib.h"

int getui_num(std::string txtpath) {

  clear();
  std::ifstream tui(txtpath);
  if (tui.is_open()) {
    std::cout << tui.rdbuf();
  }
  int _in;
  std::cin >> _in;
  clear();

  return _in;
}