#ifdef _WIN32
#endif
#ifdef linux
#endif
#include <fstream>
#include <iostream>

//////////////////////////////////////////
// clear console

void clear() {

#ifdef _WIN32
  system("cls");
#endif

#ifdef linux
  system("clear");
#endif
}

//////////////////////////////////////////
// tui - terminal user interface

void tui(std::string txtpath) {

  std::ifstream getui(txtpath);

  if (getui.is_open()) {
    std::cout << getui.rdbuf();
  }
}

// user input ///////////////////////////

int get_option(std::string txtpath) {

  clear(); // clear screen

  int PrintSize;
  tui(txtpath);
  std::cin >> PrintSize;

  clear(); // clear screen
  return PrintSize;
}

bool get_enter() {

  bool status = false;
  std::cout << "Press ENTER to continue" << std::endl;
  char enter = getchar();
  if (enter == '\n') {
    status = true;
  }
  return status;
}

/////////////////////////////////////////
