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

// getui ///////////////////////////////
int getui(std::string txtpath) {

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

// putui ///////////////////////////////
void putui(double total_sheet, double total_cost, std::string txtpath) {

  std::ifstream tui(txtpath);

  if (tui.is_open()) {
    std::cout << tui.rdbuf();
  }
  double _total_sheet = total_sheet;
  double _total_cost = total_cost;

  std::cout << "|| >> Sheet Needed = " << _total_sheet << "\n";
  std::cout << "|| >> Sheet Cost   = " << _total_cost << "\n";

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
}
