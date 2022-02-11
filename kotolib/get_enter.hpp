#pragma once
#include <iostream>

bool get_enter() {
  std::cout << "\n\n\n||> Press Enter to Continue <||" << std::endl;
  getchar();
  char enter = getchar();

  if (enter == '\n') {
    return true;
  } else {
    return false;
  }
}
