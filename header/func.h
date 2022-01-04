#ifdef _WIN32
#endif
#ifdef linux
#endif
#include <fstream>
#include <iostream>

/// clear console //////////////////////

void clear() {

#ifdef _WIN32
  system("cls");
#endif

#ifdef linux
  system("clear");
#endif
}

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
    std::cout << "Wrong Input! Please Enter Again  > ";
    goto label;
  }
  clear();

  return _in;
}

/*** getui_num  **********/
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

/*** putui **********/
void putui(double total_sheet, double total_cost, std::string txtpath) {

  std::ifstream tui(txtpath);
  if (tui.is_open()) {
    std::cout << tui.rdbuf();
  }
  std::cout << "|| >> Sheet Needed = " << total_sheet << "\n";
  std::cout << "|| >> Sheet Cost   = " << total_cost << "\n";

  return;
}

// get_enter ///////////////////////////
bool get_enter() {

  std::cout << "\n\n\nPress Enter to Continue........." << std::endl;
  getchar();
  char enter = getchar();

  if (enter == '\n')
    return true;
  else
    return false;
<<<<<<< HEAD
}
=======
}
>>>>>>> 7208c617224a37fb2a5c92441946c49c31dcd828
