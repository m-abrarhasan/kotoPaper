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

  int x;
  std::cin >> x;
  return x;
}

// get_enter ///////////////////////////

bool get_enter() {

  bool status = false;
  std::cout << "Press ENTER to continue" << std::endl;
  char enter = getchar();
  if (enter == '\n') {
    status = true;
  }
  return status;
}

