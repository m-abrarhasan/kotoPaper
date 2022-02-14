#pragma once
#include <iostream>

bool get_enter(std::string _prompt = "") {
  std::cout << _prompt;
  getchar();
  char enter = getchar();

  if (enter == '\n')
    return true;
  else
    return false;
}
