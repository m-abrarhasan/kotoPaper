#include "kotolib.h"
/*** getui_op  **********/
int getui_op(std::string txtpath) {

  clear();
  std::ifstream tui(txtpath);
  if (tui.is_open()) {
    std::cout << tui.rdbuf();
  }
  int _in;

label:
  std::cin >> _in;
  if (_in < 1 || _in > 5) {
    if (_in == 6) {
      std::cout << "\nERROR: Custom Not Available Yet!!" << std::endl;
      std::cout << "Wrong Input! Please Enter Again  > ";
      goto label;
    } else {
      std::cout << "\nWrong Input! Please Enter Again  > ";
      goto label;
    }
  }
  clear();

  return _in;
}
